using System;
using UnityEngine;
public class LoadDataWhenGameStart : MonoBehaviour, DataLoadInterface
{
    public event Action<int> SetNumber;

    private Data _data = new Data();
    private int _number;
    private void Awake()
    {
        LoadData();
        CheckData();
        SendData();
    }

    public void LoadData()
    {
        _number = _data.GetNumberLevel();
    }

    public void CheckData()
    {
        if (_number == 0)
        {
            _number = 1;
            _data.SetNumberLevel(_number);
        }
    }

    public void SendData()
    {
        SetNumber.Invoke(_number);
    }
}