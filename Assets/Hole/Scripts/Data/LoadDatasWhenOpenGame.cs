using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LoadDatasWhenOpenGame : MonoBehaviour, DataLoadInterface
{
    private Data _data = new Data();
    private string _name;
    private void Awake()
    {
        LoadData();
        CheckData();
        SendData();
        LoadLevel();
    }

    public void LoadData()
    {
        _name = _data.GetSceneName();
    }

    public void CheckData()
    {
        if (_name == "")
        {
            _name = "1";
        }
    }

    public void SendData()
    {
        _data.SetSceneName(_name);
    }

    public void LoadLevel()
    {
        SceneManager.LoadScene(_name);
    }
}
