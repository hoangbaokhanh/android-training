#pragma once
#include <jni.h>
#ifdef  __cplusplus
extern "C" 
{
#endif
    JNIEXPORT jstring JNICALL
    Java_com_khoai_demo_JNIBridge_stringFromJNI(
            JNIEnv *env,
            jobject /* this */);
#ifdef  __cplusplus
}
#endif