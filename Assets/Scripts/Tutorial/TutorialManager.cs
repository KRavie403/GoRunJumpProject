using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TutorialManager : Singleton<TutorialManager>
{
    public void ClickSkip()
    {
        SceneManager.LoadScene("2.StagesScene");
    }
}
