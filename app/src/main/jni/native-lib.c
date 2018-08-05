#include <jni.h>
#include "native-lib.h"

JNIEXPORT jstring JNICALL
Java_com_example_lynnlee_ndkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "LynnLee");
}