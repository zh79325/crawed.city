using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public  const float MaxSize = 10f;
    public GameObject enemySpawn; // 存放陨石prefab
    public int enemyCount; // 每一波陨石的个数

    
    // Use this for initialization
    void Start()
    {
        {
           
            //MeshRenderer targetRender = enemySpawn.GetComponent<MeshRenderer>();
            //targetRender.material = material;
            for (int i = 0; i < enemyCount; i++)
            {
                Vector3 spawnPosition = new Vector3(Random.Range(-MaxSize, MaxSize), 0, Random.Range(-MaxSize, MaxSize));
                Quaternion spawnRotation = Quaternion.identity;

                GameObject newObj = Instantiate(enemySpawn, spawnPosition, spawnRotation);

                Transform transform = newObj.GetComponent<Transform>();

                Vector3 lookAt = new Vector3(Random.Range(-6, 6), 0, Random.Range(-12, 12));
                transform.LookAt(lookAt);
            }
        }
    }

   

    // Update is called once per frame
    void Update()
    {
    }
}