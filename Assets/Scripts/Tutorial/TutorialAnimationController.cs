using UnityEngine;

public class TutorialAnimationController : MonoBehaviour
{
    private Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space)) // ���÷� �����̽� �ٸ� ������ �ִϸ��̼� �����
        {
            animator.SetTrigger("RestartAnimation");
        }
    }
}