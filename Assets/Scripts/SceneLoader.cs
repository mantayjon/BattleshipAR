using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public void LoadMainScene()
    {
        SceneManager.LoadScene("new mainScene");
    }

    public void LoadARScene()
    {
        SceneManager.LoadScene("ARScene");
    }
}
