using System;
using UnityEngine;

public class EndGame : MonoBehaviour
{
    public event Action<string> SetNameScene;
    [SerializeField] private LevelProgressLine _levelProgressLine;
    [SerializeField] private GameObject _endPanel;
    [SerializeField] private string _loadScenePath;

    private void OnEnable()
    {
        _levelProgressLine.EndGame += CallWhenEnd;
    }

    private void OnDisable()
    {
        _levelProgressLine.EndGame -= CallWhenEnd;
    }

    private void CallWhenEnd()
    {
        ActivePanel();
        SendData();
    }

    private void ActivePanel()
    {
        _endPanel.SetActive(true);
    }

    private void SendData()
    {
        SetNameScene.Invoke(_loadScenePath);
    }
}
