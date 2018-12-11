using System;
using System.Collections;
using System.Collections.Generic;
using Application;
using UnityEngine;

public class PlayerScript : CommonBotScript
{
    private Animator animator;
    Transform _transform;
    float speed = 1.2f;
    Position screenPos = new Position();
    Position _playerPos = new Position();
    Vector3 direction = Vector3.zero;

    // Use this for initialization
    void Start()
    {
        _transform = GetComponent<Transform>();
        animator = gameObject.GetComponent<Animator>();
        
        this.UpdateColor(new Color(123/255.0f,104/255.0f,238/255.0f));

        //rend.material.color=Color.white;

        //GetComponent<Animation>().Play("yIdle");
    }

    Vector3 velocity = Vector3.zero; //速度


    // Update is called once per frame
    void Update()
    {
        //按下鼠标右键时
        if (Input.GetMouseButton(0))
        {
            //获取屏幕坐标
            Vector3 mScreenPos = Input.mousePosition;

            //定义射线
            Ray mRay = Camera.main.ScreenPointToRay(mScreenPos);
            RaycastHit mHit;
            if (Physics.Raycast(mRay, out mHit) && mHit.collider.tag == "Plane")
            {
                Vector3 d = getDirectionmScreenPos(mScreenPos, mHit.point);
                if (d != Vector3.zero)
                {
                    float a = Vector3.Angle(direction, d);
                    if (a > 1 || direction == Vector3.zero)
                    {
                        direction = d;
                        //print("change direct =>" + d + "  angle=>" + a);
                        animator.SetBool("running", true);
                    }
                }
            }
        }

        if (direction == Vector3.zero)
        {
            return;
        }

        moveTo(direction, transform);


        //松开鼠标右键时
        if (Input.GetMouseButtonUp(0))
        {
            screenPos.HasP0 = false;
            screenPos.HasP1 = false;
        }
    }

    private Vector3 getDirectionmScreenPos(Vector3 screenP, Vector3 plyerP)
    {
        Vector3 d;
        if (screenPos.HasP0)
        {
            d = screenP - screenPos.P0;
            float dis = Vector3.Distance(screenP, screenPos.P0);
            if (dis < 10)
            {
                return Vector3.zero;
            }

            //print("from screen "+ screenPos.P0 + " to "+ screenP+" dis=> "+dis);
            if (d != Vector3.zero)
            {
                screenPos.P0 = screenP;
                return new Vector3(d.x, 0, d.y);
            }
        }

        screenPos.P0 = screenP;
        //print("from user " + _transform.position + " to " + plyerP);
        return Vector3.zero;
    }

    private void moveTo(Vector3 direction, Transform transform)
    {
        Vector3 newPos = transform.position + (direction).normalized * speed * Time.deltaTime;
        transform.LookAt(newPos);
        transform.position += (direction).normalized * speed * Time.deltaTime;
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
            System.Console.WriteLine("=====Running=====");
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
}