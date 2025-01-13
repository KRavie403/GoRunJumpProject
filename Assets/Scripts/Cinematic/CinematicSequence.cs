using System.Collections;
using UnityEngine;
using Cinemachine;

public class CinematicSequence : MonoBehaviour
{
    [System.Serializable]
    public class CameraSettings
    {
        public CinemachineVirtualCamera camera;
        public float duration; // 해당 카메라의 전환 시간
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
            // 해당 카메라의 전환 시간이 경과하면 다음 카메라로 전환합니다.
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

            // 현재 가상 카메라 비활성화 및 새로운 가상 카메라 활성화
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
