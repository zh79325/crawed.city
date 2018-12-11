using System;
using UnityEngine;

namespace Application
{
    public class Position
    {
        private Vector3 p0;
        bool hasP0;
        private Vector3 p1;
        bool hasP1;
       
        public Position()
        {
        }

        public Vector3 P0
        {
            get
            {
                return p0;
            }

            set
            {
                p0 = value;
                hasP0 = true;
            }
        }

        public bool HasP0
        {
            get
            {
                return hasP0;
            }

            set
            {
                hasP0 = value;
            }
        }

        public Vector3 P1
        {
            get
            {
                return p1;
            }

            set
            {
                p1 = value;
                hasP1 = true;
            }
        }

        public bool HasP1
        {
            get
            {
                return hasP1;
            }

            set
            {
                hasP1 = value;
            }
        }

     
    }
}
