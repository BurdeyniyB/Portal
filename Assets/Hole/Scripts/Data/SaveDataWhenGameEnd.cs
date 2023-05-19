using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SaveDataWhenGameEnd : MonoBehaviour
{
    private Data _data = new Data();
    [SerializeField] private EndGame _endGame;

    private void OnEnable()
    {
        _endGame.SetNameScene += SaveData;
    }

    private void OnDisable()
    {
        _endGame.SetNameScene -= SaveData;
    }
    public void SaveData(string name)
    {
        _data.SetSceneName(name);
        int number = _data.GetNumberLevel();
        _data.SetNumberLevel(++number);
        Debug.Log($"Data save: name - {name}, number - {number}");
    }
}
