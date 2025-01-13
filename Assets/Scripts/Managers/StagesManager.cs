using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StagesManager : MonoBehaviour
{
    public void ClickTutorial()
    {
        SceneManager.LoadScene("1.TutorialScene");
    }
    public void ClickChallenge()
    {
        SceneManager.LoadScene("5.ChallengeScene");
    }
    public void ClickStage1()
    {
        SceneManager.LoadScene("3.Stage1Scene");
    }
    public void ClickStage2()
    {
        SceneManager.LoadScene("4.Stage2Scene");
    }
    public void ClickBack()
    {
        SceneManager.LoadScene("0.TitleScene");
    }
}
