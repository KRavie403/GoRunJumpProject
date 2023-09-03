using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SettingsManager : MonoBehaviour
{
    [SerializeField] private GameObject _pausePanel, _settings, _settingsImage;
    private string _currentSceneName;

    private void Start()
    {
        _currentSceneName = SceneManager.GetActiveScene().name;
    }

    public void ClickPause()
    {
        Time.timeScale = 0;
        _pausePanel.SetActive(true);
    }
    public void ClickPlay()
    {
        Time.timeScale = 1;
        _pausePanel.SetActive(false);
    }
    public void ClickRestart()
    {
        SceneManager.LoadScene(_currentSceneName);
    }    
    public void ClickSettings()
    {
        _settingsImage.SetActive(true);
        _settings.SetActive(true);
    }
    public void ClickCloseSettings()
    {
        _settingsImage.SetActive(false);
        _settings.SetActive(false);
    }
    public void ClickHome()
    {
        SceneManager.LoadScene("StagesScene");
    }
}
