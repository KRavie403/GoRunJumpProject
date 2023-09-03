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
        if (Input.GetKeyDown(KeyCode.Space)) // 예시로 스페이스 바를 누르면 애니메이션 재시작
        {
            animator.SetTrigger("RestartAnimation");
        }
    }
}