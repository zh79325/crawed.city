using System;
using System.Collections.Generic;
using UnityEngine.AI;

namespace UnityEngine
{
    public abstract class AbstractBot : MonoBehaviour
    {
        public int Health { get; private set; }
        public string BotId { get; private set; }
        public bool IsLeader { get; set; }
        public AbstractBot Leader { get; set; }
        public Dictionary<string, AbstractBot> Group { get; set; }


        public NavMeshAgent MAngent { get; set; }
        private bool running;
        private Animator _animator;
        const float MaxSize = GameController.MaxSize;
        protected float maxPos_x = MaxSize;
        protected float maxPos_y = MaxSize;
        protected float minPos_x = -MaxSize;
        protected float minPos_y = -MaxSize;

        private float walkSpeed = 2.0f;
        private float runSpeed = 6.0f;
        private float ratio = 0.3f;

        private Vector3 _currentDirection = Vector3.zero;

        public AbstractBot()
        {
            Health = 0;
        }

        public void Follow(AbstractBot leader)
        {
            MoveTo(leader.transform.position);
        }
        
        protected float GetSpeed()
        {
            float speed = walkSpeed;
            if (running)
            {
                speed = runSpeed;
            }

            return speed * GetRatio();
        }

        public void ChangeWalkStatus(bool walking)
        {
            this.running = !walking;
            _animator.SetBool("walking", walking);
        }

        public void ChangeRunStatus(bool running)
        {
            if (_animator == null)
            {
                return;
            }
            this.running = running;
            _animator.SetBool("running", running);
        }
 

      

        void OnCollisionEnter(Collision collision)
        {
            if (!this.IsLeader)
            {
                return;
            }

            GameObject o = collision.gameObject;
            if (!PotatoTags.BOT.Equals(o.tag))
            {
                return;
            }

            MonoBehaviour b = o.GetComponent<MonoBehaviour>();
            AbstractBot bot = (AbstractBot) b;

            if (bot.Leader == this)
            {
                return;
            }

            bot.UpdateColor(this.GetMainColor());

            if (bot.Leader != null)
            {
                bot.Leader.RemoveMember(bot);
            }
          
            bool ok=this.AddMember(bot);
            if (ok)
            {
                bot.ChangeRunStatus(true);
            }
//            print("collision==>" + o + ":" + b.GetType().Name);
        }

        public bool AddMember(AbstractBot bot)
        {
            if (bot.BotId == null)
            {
                return false;
            }
            if (Group == null)
            {
                Group = new Dictionary<string, AbstractBot>();
            }

//            bot.MAngent.destination = this.transform.position;
            bot.Leader = this;
            Group.Add(bot.BotId, bot);
            return true;
        }

        public void RemoveMember(AbstractBot bot)
        {
            if (Group == null)
            {
                Group = new Dictionary<string, AbstractBot>();
            }

            bot.Leader = null;
            Group.Remove(bot.BotId);
        }

       protected void MoveTo(Vector3 dest)
        {
//            var normalized = dest.normalized;
//            float angle = Vector3.Angle(normalized, _currentDirection);
//            if (_currentDirection == Vector3.zero || Mathf.Abs(angle) > 5)
//            {
//                var target = transform.position + normalized * GetSpeed()* 100;
//                transform.LookAt(target);
//                _currentDirection = normalized;
//            }

//            Vector3 dest = transform.position + normalized * speed * r * Time.deltaTime;
//            transform.position += normalized * speed * r * Time.deltaTime;
            transform.LookAt(dest);
            MAngent.speed = GetSpeed();
            MAngent.SetDestination(dest);
        }

        private float GetRatio()
        {
            return ratio;
        }

        protected void UpdateColor(Color c)
        {
            Renderer[] renders = GetComponentsInChildren<Renderer>();
            foreach (var render in renders)
            {
                foreach (var material in render.materials)
                {
                    material.color = c;
                }
            }
        }

        public void Start()
        {
            BotId = PotatoUtil.RandomString(10);
            Color color = this.GetMainColor();
            UpdateColor(color);
            _animator = GetComponent<Animator>();
            MAngent = GetComponent<NavMeshAgent>();
            tag = PotatoTags.BOT;
        }


        public abstract Color GetMainColor();
    }
}