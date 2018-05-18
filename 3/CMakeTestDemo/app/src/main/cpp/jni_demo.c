//
// Created by lei on 2017/11/10.
//
#include <jni.h>
JNIEXPORT jint JNICALL
Java_com_demo_cmaketestdemo_JNI_getInt
        (JNIEnv *env, jobject jobj){
    return 3;
}
