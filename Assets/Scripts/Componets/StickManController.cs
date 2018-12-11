using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sc : MonoBehaviour {


    // Use this for initialization
    void Start()
    {
        Animation animation = GetComponent<Animation>();//动画控制器
        animation.Play("Idle");//上来直接播放idle动画

    }

    // Update is called once per frame
    void Update()
    {

    }


    void OnGUI()
    {
        Animation animation = GetComponent<Animation>();//动画控制器
        if (GUI.Button(new Rect(0, 0, 100, 30), "Walking"))
        {
            animation.Play("Walking");
        }
        if (GUI.Button(new Rect(100, 0, 100, 30), "Running"))
        {
            animation.Play("Running");
        }
        if (GUI.Button(new Rect(200, 0, 100, 30), "攻击"))
        {
            animation.Play("attack");
            animation.PlayQueued("idle");//播放完attack之后再播放idle
        }


    }
}
