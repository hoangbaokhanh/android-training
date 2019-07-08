#include <gameJNI.h>
#include <string>
#ifdef  __cplusplus
extern "C" 
{
#endif
    JNIEXPORT jstring JNICALL
    Java_com_khoai_demo_JNIBridge_stringFromJNI(
            JNIEnv *env,
            jobject /* this */) {
        std::string hello = "Hello from C++";
        return env->NewStringUTF(hello.c_str());
    }
#ifdef  __cplusplus
}
#endif