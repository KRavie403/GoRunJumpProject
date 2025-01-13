using System.Collections;
using UnityEngine;
using Cinemachine;

public class CinematicSequence : MonoBehaviour
{
    [System.Serializable]
    public class CameraSettings
    {
        public CinemachineVirtualCamera camera;
        public float duration; // �ش� ī�޶��� ��ȯ �ð�
    }

    public CameraSettings[] cameraSettings;
    private int currentCameraIndex = 0;
    private float timeSinceLastSwitch = 0f;

    private void Start()
    {
        SwitchToCamera(currentCameraIndex);
        timeSinceLastSwitch = Time.time;
    }

    private void Update()
    {
        if (currentCameraIndex < cameraSettings.Length)
        {
            // �ش� ī�޶��� ��ȯ �ð��� ����ϸ� ���� ī�޶�� ��ȯ�մϴ�.
            if (Time.time - timeSinceLastSwitch >= cameraSettings[currentCameraIndex].duration)
            {
                timeSinceLastSwitch = Time.time;
                currentCameraIndex++;
                SwitchToCamera(currentCameraIndex);
            }
        }
        else
        {
            EndSequence();
        }
    }

    private void SwitchToCamera(int index)
    {
        if (index < cameraSettings.Length)
        {
            CinemachineVirtualCamera newCamera = cameraSettings[index].camera;

            // ���� ���� ī�޶� ��Ȱ��ȭ �� ���ο� ���� ī�޶� Ȱ��ȭ
            for (int i = 0; i < cameraSettings.Length; i++)
            {
                cameraSettings[i].camera.gameObject.SetActive(i == index);
            }
        }
    }

    private void EndSequence()
    {
#if UNITY_EDITOR || DEBUG
        Debug.Log("Cinematic sequence completed.");
#endif
    }
}
