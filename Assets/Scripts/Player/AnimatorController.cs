using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Animator))]

public class AnimatorController : MonoBehaviour
{
    private Animator _animator;

    private void Awake()
    {
        _animator = GetComponent<Animator>();
    }

    public void PlayIdle()
    {
        _animator.SetBool("IsSliding", false);
        _animator.SetBool("IsRunning", false);
        _animator.SetBool("IsAir", false);
    }

    public void PlayFall1()
    {
        _animator.SetBool("IsAir", true);
    }
    
    public void PlayFall2()
    {
        _animator.SetBool("StillFalling", true);
    }

    public void PlayFall3()
    {
        _animator.SetBool("IsFalling", true);
    }

    public void PlayRespawn()
    {
        _animator.SetBool("IsAir", false);
        _animator.SetBool("IsSliding", false);
        _animator.SetBool("IsFalling", false);
        _animator.SetBool("StillFalling", false);
        _animator.SetTrigger("Respawn");
    }

    public void PlayRun()
    {
        _animator.SetBool("IsAir", false);
        _animator.SetBool("IsSliding", false);
        _animator.SetBool("IsRunning", true);
    }

    public void PlayJump()
    {
        _animator.SetBool("IsAir", true);
        _animator.SetTrigger("Jump");
    }

    public void PlaySlide()
    {
        _animator.SetBool("IsAir", false);
        _animator.SetBool("IsRunning", false);
        _animator.SetBool("IsSliding", true);
    }

    public void PlaySuccess()
    {
        _animator.SetTrigger("Success");
    }
}
