#include <jni.h>
#include <string>
#include <android/log.h>

#define ALOG  __android_log_print

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_user_anative_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    std::string hello = "1 5 Hello from C++";

    __android_log_print(ANDROID_LOG_INFO,"xxxxx 1111","xxxxx 2222");

    ALOG(ANDROID_LOG_INFO,"xxxxx 3333","xxxxx 44444");


    return env->NewStringUTF(hello.c_str());
}
