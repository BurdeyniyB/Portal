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

    public int GetCountLose()
    {
        int count = PlayerPrefs.GetInt("CountLose");
        return count;
    }

    public void SetSceneName(string name)
    {
        PlayerPrefs.SetString("SceneName", name);
    }

    public void SetNumberLevel(int number)
    {
       PlayerPrefs.SetInt("NumberLevel", number);
    }

    public void SetCountLose(int count)
    {
        PlayerPrefs.SetInt("CountLose", count);
    }
}
