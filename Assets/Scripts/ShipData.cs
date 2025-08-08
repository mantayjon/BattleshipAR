using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipData : ScriptableObject
{
    public string shipName;
    [TextArea] public string description;
    public Sprite image;
}
