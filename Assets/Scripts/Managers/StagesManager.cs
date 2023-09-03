using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StagesManager : MonoBehaviour
{
    public void ClickTutorial()
    {
        SceneManager.LoadScene("TutorialScene");
    }
    public void ClickChallenge()
    {
        SceneManager.LoadScene("ChallengeScene");
    }
    public void ClickStage1()
    {
        SceneManager.LoadScene("Stage1Scene");
    }
    public void ClickStage2()
    {
        SceneManager.LoadScene("Stage2Scene");
    }
    public void ClickBack()
    {
        SceneManager.LoadScene("TitleScene");
    }
}
