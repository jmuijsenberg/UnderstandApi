package understandsample.namespacea;

import understandsample.namespaceb.*;

public abstract class MyBaseClass {
    private boolean member1;
    protected int member2;
    public float member3;
    public static boolean member4;
    public MyEnum member5;

    private boolean Method1() {
        return member1;
    }

    protected abstract void Method2();

    public float Method3() {
        return member3;
    }

    public static boolean Method4() {
        return member4;
    }
}

