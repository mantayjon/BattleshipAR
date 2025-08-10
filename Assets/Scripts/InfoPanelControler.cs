using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoPanelControler : MonoBehaviour
{
    [SerializeField] ShipButton[] shipButtons; 
    [SerializeField] ShipData[] shipData;    
    [SerializeField] InfoPanel infoPanel;

    void Start()
    {
        for (int i = 0; i < shipButtons.Length; i++)
        {
            shipButtons[i].Init(shipData[i], infoPanel.Show);
        }
        infoPanel.Hide();
    }
}