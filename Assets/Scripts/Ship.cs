using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ship
{
    public int size;
    public Vector2Int position;
    public bool isHorizontal;
    private List<Vector2Int> occupiedCoords;
    private HashSet<Vector2Int> hits = new HashSet<Vector2Int>();

    public Ship(int size, Vector2Int position, bool isHorizontal)
    {
        this.size = size;
        this.position = position;
        this.isHorizontal = isHorizontal;
         this.occupiedCoords = GetOccupiedCoordinates();
    }

    public List<Vector2Int> GetOccupiedCoordinates()
    {
        List<Vector2Int> coordinats = new List<Vector2Int>();
        for (int i = 0; i < size; i++)
        {
            int x = isHorizontal ? position.x + i : position.x;
            int y = isHorizontal ? position.y : position.y + i;
            coordinats.Add(new Vector2Int(x, y));
        }
        return coordinats;
    }
    
    public bool RegisterHit(Vector2Int hitPosition)
    {
        if (occupiedCoords.Contains(hitPosition))
        {
            hits.Add(hitPosition);
            return true; 
        }
        return false; 
    }

    public bool IsSunk()
    {
        return hits.Count >= size;
    }
}

