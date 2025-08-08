using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ShipButton : MonoBehaviour
{
    [SerializeField] TMP_Text label;
    private ShipData data;
    private System.Action<ShipData> onClick;

    public void Init(ShipData shipData, System.Action<ShipData> clickAction)
    {
        data = shipData;
        label.text = shipData.shipName;
        onClick = clickAction;
    }

    public void OnClick()
    {
        onClick?.Invoke(data);
        Debug.Log("pressed button");
    }
}