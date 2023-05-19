using UnityEngine;

public class Data : DataGame
{
    public string GetSceneName()
    {
        string name = PlayerPrefs.GetString("SceneName");
        return name;
    }

    public int GetNumberLevel()
    {
        int number = PlayerPrefs.GetInt("NumberLevel");
        return number;
    }

    public void SetSceneName(string name)
    {
        PlayerPrefs.SetString("SceneName", name);
    }

    public void SetNumberLevel(int number)
    {
       PlayerPrefs.SetInt("NumberLevel", number);
    }
}
