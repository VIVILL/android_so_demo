package com.demo.jnidemo;

/**
 * Created by lei on 2017/11/9.
 */

public class JNI {
    static {
        System.loadLibrary("jni_demo");
    }
    public native int getInt();//随便定义一个函数。
}
