using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : Singleton<TitleManager>
{
    [SerializeField] private GameObject Settings, SettingsImage;
    [SerializeField] private AudioManager _audioManager;


    public void OpenSettingsMenu() //Settings
    {
        SettingsImage.SetActive(true);
        Settings.SetActive(true);
    }
    
    public void CloseSettingsMenu() //Settings
    {
        SettingsImage.SetActive(false);
        Settings.SetActive(false);
    }

    public void OpenStartMenu() //Start
    {
        //_audioManager.StopMusic();
        SceneManager.LoadScene("1.TutorialScene");
    }

    public void QuitStartMenu()
    {
    }
    public void ExitGame() //Quit
    {
        Application.Quit();
    }

}
