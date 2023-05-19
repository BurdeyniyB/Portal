using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    [SerializeField] private EndGame _endGame;
    private string _scenePath;
    public void LoadLevel()
    {
         SceneManager.LoadScene(_scenePath);
    }

    public void Restart()
    {
        SceneManager.LoadScene(0);
    }

    private void OnEnable()
    {
        _endGame.SetNameScene += SetScenePath;
    }

    private void OnDisable()
    {
        _endGame.SetNameScene -= SetScenePath;
    }
    public void SetScenePath(string name)
    {
        _scenePath = name;
    }
}
