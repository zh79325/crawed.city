using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CommonBotScript : AbstractBot {
    float stopTime;//暂停时间
    float moveTime;//移动时间
    float vel_x, vel_y, vel_z;//速度
    /// <summary>
    /// 最大、最小飞行界限
    /// </summary>

    float timeCounter1=0;//移动的计时器
    float timeCounter2=0;//暂停的计时器

    private Color mainColor = Color.white;
    
    void Start()
    {
        base.Start();
        
        Change();
    }
    
    
    // Update is called once per frame
    void Update()
    {

        if (this.Leader != null)
        {


            Follow(Leader);
           
//            float distanceWanted = 0.3f;
//            Vector3 leaderPos = Leader.transform.position;
//            Vector3 diff = transform.position - leaderPos;
//            diff.y = 0.0f; // ignore Y (as requested in question)
//            transform.position = leaderPos + diff.normalized * distanceWanted;
//            transform.position = Vector3.Lerp(transform.position, this.Leader.transform.position, Time.time);
            return;
        }
        timeCounter1 += Time.deltaTime;
        //如果移动的计时器小于移动时间，则进行移动，否则暂停计时器累加，当暂停计时器大于暂停时间时，重置
        if (timeCounter1 < moveTime)
        {
            var direct = new Vector3(vel_x, 0.1f, vel_y) * GetSpeed();
            direct.y = 0.1f;
            var y0 = transform.position.y;
           var target =direct + transform.position;
            target.y = y0;
            print(direct+"=>"+target);
            MoveTo(target);
        }
        else
        {
            ChangeWalkStatus(false);
            timeCounter2 += Time.deltaTime;
            if (timeCounter2 > stopTime)
            {
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
        ChangeWalkStatus(true);
        stopTime = Random.Range(1.0f, 5.0f);
        moveTime = Random.Range(10.0f, 20.0f);
        
        vel_x = Random.Range(1.0f, 3.0f)-2;
        vel_y = Random.Range(1.0f, 3.0f)-2;
       
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


    public override Color GetMainColor()
    {
        return mainColor;
    }
}
