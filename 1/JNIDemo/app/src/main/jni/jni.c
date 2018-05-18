//
// Created by lei on 2017/11/9.
//
#include <stdio.h>
#include <com_demo_jnidemo_JNI.h>

//新增处
#include <test_get_int.h>


Java_com_demo_jnidemo_JNI_getInt

(JNIEnv *env, jobject jobj){
  //  return 3;
  //修改处
     return test();
}

//test_sum中的自定义函数
int test(){
    return 1;
}