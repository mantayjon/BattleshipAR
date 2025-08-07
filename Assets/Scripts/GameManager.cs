using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameManager : MonoBehaviour
{
    
    private int[,] grid;
    public TextMeshProUGUI attemptsText; 
    public CameraControls cameraControls;


    [Header("Grid Settings")]
    public int gridWidth = 10;
    public int gridHeight = 10;


    [Header("Tile Info")]
    public GameObject tilePrefab; 
    public Transform gridParent;  
    private Tile[,] tileObjects; 


    [Header("Ship Info")]
    public int[] shipSizes = { 5, 3, 2, 2 }; 
    private List<Ship> placedShips = new List<Ship>();


    [Header("Game ")]
    public int maxAttempts = 20;
    private int currentAttempts = 0;

    void Start()
    {
        grid = new int[gridWidth, gridHeight];
        cameraControls.initialFocusPoint = new Vector3(gridWidth / 2f, 0f, gridHeight / 2f);
        attemptsText.text = $"Attempts Left: {maxAttempts - currentAttempts}";

        PlaceShips();
        CreateGridVisual();
        HighlightShips();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) && currentAttempts < maxAttempts)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out RaycastHit hit))
            {
                Tile tile = hit.collider.GetComponent<Tile>();
                if (tile != null && !tile.isHit)
                {
                    tile.Hit(); // Color the tile and mark as hit
                    currentAttempts++;

                    // Check if a ship is on that tile
                    foreach (Ship ship in placedShips)
                    {
                        if (ship.RegisterHit(tile.coordinates))
                        {
                            Debug.Log("Hit!");
                            attemptsText.text = $"Attempts Left: {maxAttempts - currentAttempts}";

                            if (ship.IsSunk())
                            {
                                Debug.Log($"Ship of size {ship.size} is sunk!");
                            }
                            return; 
                        }
                    }

                    Debug.Log("Miss!");
                }

                attemptsText.text = $"Attempts Left: {maxAttempts - currentAttempts}";

                if (placedShips.TrueForAll(s => s.IsSunk()))
                {
                    attemptsText.text = "You win!";
                    
                }
                else if (currentAttempts >= maxAttempts)
                {
                    attemptsText.text = "Game Over. You lost.";
                    
                }
            }
        }
    }


    private void PlaceShips()
    {
        foreach (int size in shipSizes)
        {
            bool placed = false;
            int attempts = 0;

            while (!placed && attempts < 100)
            {
                attempts++;

                // Generate random position and orientation
                int x = Random.Range(0, gridWidth);
                int y = Random.Range(0, gridHeight);
                bool isHorizontal = Random.Range(0, 2) == 0;

                Ship newShip = new Ship(size, new Vector2Int(x, y), isHorizontal);
                List<Vector2Int> occupiedCoords = newShip.GetOccupiedCoordinates();

                // Check if ship fits inside grid
                if (isHorizontal)
                {
                    if (x + size > gridWidth) continue;
                }
                else
                {
                    if (y + size > gridHeight) continue;
                }
                // Check for overlap
                bool overlaps = false;
                foreach (Vector2Int pos in occupiedCoords)
                {
                    if (grid[pos.x, pos.y] != 0)
                    {
                        overlaps = true;
                        break;
                    }
                }
                if (overlaps) continue;

                // Place ship on the grid
                foreach (Vector2Int pos in occupiedCoords)
                {
                    grid[pos.x, pos.y] = 1;
                }

                placedShips.Add(newShip);
                Debug.Log($" Ship of size {size} placed at {newShip.position} " +
                        (isHorizontal ? "→ horizontal" : "↓ vertical") + " after " + attempts + " attempts");

                placed = true;
            }

            if (!placed)
            {
                Debug.LogError($" Could not place ship of size {size} after 100 attempts");
            }

        }


    }

    private void CreateGridVisual()
    {
        tileObjects = new Tile[gridWidth, gridHeight];

        for (int x = 0; x < gridWidth; x++)
        {
            for (int y = 0; y < gridHeight; y++)
            {
                Vector3 position = new Vector3(x, 0, y);
                GameObject tileGameOobject = Instantiate(tilePrefab, position, Quaternion.identity, gridParent);
                tileGameOobject.name = $"Tile_{x}_{y}";

                Tile tile = tileGameOobject.GetComponent<Tile>();
                tile.coordinates = new Vector2Int(x, y);
                tileObjects[x, y] = tile;
            }
        }
    }
        
    private void HighlightShips()
    {
        foreach (Ship ship in placedShips)
        {
            foreach (Vector2Int pos in ship.GetOccupiedCoordinates())
            {
                tileObjects[pos.x, pos.y].SetOccupied(true);
            }
        }
}

}
