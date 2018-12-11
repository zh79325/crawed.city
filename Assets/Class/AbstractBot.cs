namespace UnityEngine
{
    public abstract class AbstractBot : MonoBehaviour
    {
        private Animator _animator;
        protected float maxPos_x = 50;
        protected float maxPos_y = 50;
        protected float minPos_x = -50;
        protected float minPos_y = -50;
        
        private float walkSpeed = 2.0f;
        private float runSpeed = 6.0f;
        private float ratio = 0.2f;

        private Vector3 _currentDirection = Vector3.zero;

        public void ChangeWalkStatus(bool walking)
        {
            _animator.SetBool("walking",walking);
        }

        public void ChangeRunStatus(bool running)
        {
            _animator.SetBool("running",running);
        }
        protected void WalkTo(Vector3 direction)
        {
            MoveTo(direction, walkSpeed);
        }

        protected void RunTo(Vector3 direction)
        {
            MoveTo(direction, runSpeed);
        }

        void MoveTo(Vector3 direction, float speed)
        {
            var normalized = direction.normalized;
            float r = GetRatio();
            float angle = Vector3.Angle(normalized, _currentDirection);
            print("face angle  ===>"+angle);
            if (_currentDirection==Vector3.zero||Mathf.Abs(angle) >5)
            {
                var target=transform.position+normalized * speed * r * 100;
                transform.LookAt(target);
                _currentDirection = normalized;
            }
            transform.position += normalized * speed * r * Time.deltaTime;
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
            Color color = this.GetMainColor();
            UpdateColor(color);
            _animator = GetComponent<Animator>();
        }
        
        

        public abstract Color GetMainColor();
    }
}