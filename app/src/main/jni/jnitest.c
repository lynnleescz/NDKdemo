//
// Created by LynnLee on 2018/8/5.
//
#include "jnitest.h"

JNIEXPORT jstring JNICALL Java_com_example_lynnlee_ndkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject obj)
{
    return (*env)->NewStringUTF(env, "LynnLee");
}
