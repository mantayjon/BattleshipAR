using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class InfoPanel : MonoBehaviour
{
    [SerializeField] TMP_Text heading;
    [SerializeField] TMP_Text info;
    [SerializeField] Image boatPicture;

    public void Show(ShipData data)
    {
        heading.text = data.shipName;
        info.text = data.description;
        boatPicture.sprite = data.image;
        gameObject.SetActive(true);
    }

    public void Hide()
    {
        gameObject.SetActive(false);
    }
}