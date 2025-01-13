using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class TutorialPlayerMovement : MonoBehaviour
{
    [SerializeField] private bl_Joystick _joystick;

    [SerializeField] private AnimatorController _animatorController;

    private float _moveSpeed = 15f;
    private float _rotateSpeed = 10f;
    private float _jumpForce = 50f;
    private float _customGravity = 1f;
    private float _rotationSpeed = 50f;

    private Rigidbody _rigidbody;

    private Vector3 _moveVector;

    private bool isFalling = false; 
    private bool isJumping = false;

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _rigidbody.useGravity = false;
    }

    private void Update()
    {
        Move();
        if (Input.GetKeyDown(KeyCode.Space) && !isJumping)
        {
            Jump();
        }
        if (isAttached)
        {
            // 부모 오브젝트를 회전시키는 코드
            transform.parent.Rotate(Vector3.up * _rotationSpeed * Time.deltaTime, Space.World);
        }
    }


    private void Move()
    {
        _moveVector = Vector3.zero;

        // 조이스틱 입력
        _moveVector.x = _joystick.Horizontal * _moveSpeed * 0.2f * Time.deltaTime;
        _moveVector.z = _joystick.Vertical * _moveSpeed * 0.2f * Time.deltaTime;

        isFalling = _rigidbody.velocity.y < -1f;

        if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
        {
            Vector3 direction = Vector3.RotateTowards(transform.forward, _moveVector, _rotateSpeed * Time.deltaTime, 0.0f);
            transform.rotation = Quaternion.LookRotation(direction);


            if (transform.position.y > 1.6f && isFalling)
            {
                _animatorController.PlayFall1();
            }
            else if (transform.position.z > 248f && transform.position.z < 287)
            {
                _animatorController.PlaySlide();
            }
            else
            {
                _animatorController.PlayRun();
                //AudioManager.Instance.PlaySFX("Run ");
            }
        }



        else if (_joystick.Horizontal == 0 && _joystick.Vertical == 0)
        {

            if (transform.position.y > 1.6f && isFalling)
            {
                _animatorController.PlayFall1();
            }
            else if (transform.position.z > 248f && transform.position.z < 287)
            {
                _animatorController.PlaySlide();
            }
            else
            {
                _animatorController.PlayIdle();
            }
        }

        // 키보드 입력 추가
        if (Input.GetKey(KeyCode.W))
        {
            _moveVector.z += _moveSpeed * Time.deltaTime;
        }
        if (Input.GetKey(KeyCode.S))
        {
            _moveVector.z -= _moveSpeed * Time.deltaTime;
        }
        if (Input.GetKey(KeyCode.A))
        {
            _moveVector.x -= _moveSpeed * Time.deltaTime;
        }
        if (Input.GetKey(KeyCode.D))
        {
            _moveVector.x += _moveSpeed * Time.deltaTime;
        }

        isFalling = _rigidbody.velocity.y < -1f;

        if (_joystick.Horizontal != 0 || _joystick.Vertical != 0 || _moveVector.magnitude > 0)
        {
            Vector3 direction = Vector3.RotateTowards(transform.forward, _moveVector, _rotateSpeed * Time.deltaTime, 0.0f);
            transform.rotation = Quaternion.LookRotation(direction);


            if (transform.position.y > 1.6f && isFalling)
            {
                _animatorController.PlayFall1();
            }
            else if (transform.position.z > 248f && transform.position.z < 287)
            {
                _animatorController.PlaySlide();
            }
            else
            {
                _animatorController.PlayRun();
                //AudioManager.Instance.PlaySFX("Run ");
            }
        }
        else if (_joystick.Horizontal == 0 && _joystick.Vertical == 0 && _moveVector.magnitude == 0)
        {
            if (transform.position.y > 1.6f && isFalling)
            {
                _animatorController.PlayFall1();
            }
            else if (transform.position.z > 248f && transform.position.z < 287)
            {
                _animatorController.PlaySlide();
            }
            else
            {
                _animatorController.PlayIdle();
            }
        }


        _rigidbody.MovePosition(_rigidbody.position + _moveVector);
        _rigidbody.AddForce(Vector3.down * _customGravity * _rigidbody.mass);
    }

    public void Jump()
    {

        if (!isJumping)
        {
            _animatorController.PlayJump();
            _rigidbody.AddForce(Vector3.up * _jumpForce, ForceMode.Impulse);
            isJumping = true;
            AudioManager.Instance.PlaySFX("Jump");
        }
    }

    private void OnCollisionEnter(Collision collision)
    {

        Debug.Log("Collided with: " + collision.gameObject.name + ", Layer: " + LayerMask.LayerToName(collision.gameObject.layer));
        if (collision.gameObject.layer == LayerMask.NameToLayer("Ground") ||
            collision.gameObject.layer == LayerMask.NameToLayer("EndPoint"))
        {
            isJumping = false;
        }
    }

    private bool isAttached = false;
}
