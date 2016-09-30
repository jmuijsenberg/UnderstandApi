using System;
using UnderstandSample.NamespaceB;

namespace UnderstandSample.NamespaceA
{
    public abstract class MyBaseClass
    {
        private bool member1;
        protected int member2;
        public float member3;
        public static bool member4;
        public MyEnum member5;

        private bool Method1() { return member1; }
        protected abstract void Method2();
        public float Method3() { return member3; }
        public static bool Method4() { return member4; }
    }
}
