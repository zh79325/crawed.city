using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CommonBotScript : MonoBehaviour {

    float stopTime;//暂停时间
    float moveTime;//移动时间
    float vel_x, vel_y, vel_z;//速度
    /// <summary>
    /// 最大、最小飞行界限
    /// </summary>
    float maxPos_x = 50;
    float maxPos_y = 50;
    float minPos_x = -50;
    float minPos_y = -50;
    float timeCounter1=0;//移动的计时器
    float timeCounter2=0;//暂停的计时器
    Animator animator;
    void Start()
    {
        animator = GetComponent<Animator>();
        Change();
        animator.SetBool("walking", true);
        UpdateColor(Color.white);
    }
    // Update is called once per frame
    void Update()
    {
      
        timeCounter1 += Time.deltaTime;
        //如果移动的计时器小于移动时间，则进行移动，否则暂停计时器累加，当暂停计时器大于暂停时间时，重置
        if (timeCounter1 < moveTime)
        {
            var current = transform.position;
            var target = new Vector3(current.x + vel_x, 0, current.z + vel_y);
            transform.LookAt(target);

            transform.position = target;
            //print("move to" + target.ToString());
        }
        else
        {
            animator.SetBool("walking", false);
            timeCounter2 += Time.deltaTime;
            if (timeCounter2 > stopTime)
            {
                animator.SetBool("walking", true);
                Change();
                timeCounter1 = 0;
                timeCounter2 = 0;
            }
        }
        Check();
    }
    //对参数赋值
    void Change()
    {
        float ratio = 0.005f;
        stopTime = Random.Range(1.0f, 5.0f);
        moveTime = Random.Range(10.0f, 20.0f);
        vel_x = Random.Range(1.0f, 2.0f)* ratio;
        vel_y = Random.Range(1.0f, 2.0f)* ratio;
       
    }
    //判断是否达到边界，达到边界则将速度改为负的
    void Check()
    {
        //如果到达预设的界限位置值，调换速度方向并让它当前的坐标位置等于这个临界边的位置值
        if (transform.localPosition.x > maxPos_x)
        {
            vel_x = -vel_x;
            //transform.localPosition = new Vector3(maxPos_x, 0,transform.localPosition.y);
        }
        if (transform.localPosition.x < minPos_x)
        {
            vel_x = -vel_x;
            //transform.localPosition = new Vector3(minPos_x,0, transform.localPosition.y);
        }
        if (transform.localPosition.z > maxPos_y)
        {
            vel_y = -vel_y;
            //transform.localPosition = new Vector3(transform.localPosition.x,0, maxPos_y);
        }
        if (transform.localPosition.z < minPos_y)
        {
            vel_y = -vel_y;
            //transform.localPosition = new Vector3(transform.localPosition.x,0, minPos_y);
        }
    }

   protected void UpdateColor(Color c)
    {
        Renderer[]renders=  GetComponentsInChildren<Renderer>();
        foreach (var render in renders)
        {
            foreach (var material in render.materials)
            {
                material.color = c;
            }
        }
    }
}
