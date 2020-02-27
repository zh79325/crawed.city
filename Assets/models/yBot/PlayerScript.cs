using System;
using System.Collections;
using System.Collections.Generic;
using Application;
using UnityEngine;

public class PlayerScript : AbstractBot
{
    public PlayerScript()
    {
        IsLeader = true;
    }

    Vector3 _direction = Vector3.zero;
    Vector3 _lastScreemPosition = Vector3.negativeInfinity;
    private bool running = false;
    private bool hasLastPos = false;

    private Color mainColor = new Color(0.57f, 0.38f, 0.93f);

    // Use this for initialization
    void Start()
    {
        base.Start();
        AddMember(this);
    }


    // Update is called once per frame
    void Update()
    {
        //按下鼠标右键时
        if (Input.GetMouseButton(0))
        {
            //获取屏幕坐标
            Vector3 mScreenPos = Input.mousePosition;
            Vector3 d = GetDirectionScreenPos(mScreenPos);
            if (d != Vector3.zero)
            {
                _direction = d;
                if (!running)
                {
                    running = true;
                    ChangeRunStatus(true);
                }
            }
        }

        if (_direction == Vector3.zero)
        {
            return;
        }
        
        var target =transform.position+ _direction.normalized * GetSpeed();
//        print("move to direct => " +_direction.normalized);
        target.y = 0;
        MoveTo(target);


        //松开鼠标右键时
        if (Input.GetMouseButtonUp(0))
        {
//            pressing = false;
        }
    }

    private Vector3 GetDirectionScreenPos(Vector3 screenP)
    {
        if (!hasLastPos)
        {
            hasLastPos = true;
            _lastScreemPosition = screenP;
            return Vector3.zero;
        }

        float dis = Vector3.Distance(screenP, _lastScreemPosition);

        if (dis < 10)
        {
            return Vector3.zero;
        }

        Vector3 d = screenP - _lastScreemPosition;
        Vector3 newDirection = new Vector3(d.x, 0.1f, d.y);

        if (_direction == Vector3.zero)
        {
            return newDirection;
        }

        float ang = Vector3.Angle(newDirection, _direction);
        if (ang < 3)
        {
            return Vector3.zero;
        }

        _lastScreemPosition = screenP;
        return newDirection;
    }


    void OnGUI2()
    {
        Animation animation = GetComponent<Animation>(); //动画控制器
        if (GUI.Button(new Rect(0, 0, 100, 30), "Walking"))
        {
            Animator animator = GetComponent<Animator>();
            animator.SetBool("walking", true);
        }

        if (GUI.Button(new Rect(100, 0, 100, 30), "Running"))
        {
//            System.Console.WriteLine("=====Running=====");
            animation.Play("yRunning");
            animation.PlayQueued("yIdle"); //播放完attack之后再播放idle
        }

        if (GUI.Button(new Rect(200, 0, 100, 30), "攻击"))
        {
            animation.Play("yRunning");
            animation.PlayQueued("yFlying Kick");
            animation.PlayQueued("yIdle"); //播放完attack之后再播放idle
        }
    }

    public override Color GetMainColor()
    {
        return mainColor;
    }
}