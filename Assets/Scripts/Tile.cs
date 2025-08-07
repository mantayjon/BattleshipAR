using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    public Vector2Int coordinates;
    public bool isOccupied = false;
    public bool isHit = false;

    private Renderer rend;

    void Awake()
    {
        rend = GetComponent<Renderer>();
    }

    public void SetOccupied(bool occupied) 
    {
        isOccupied = occupied;
    }

    public void Hit()
    {
        isHit = true;
        rend.material.color = isOccupied ? Color.green : Color.red; 
    }
}

