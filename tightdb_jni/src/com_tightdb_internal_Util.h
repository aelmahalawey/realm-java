/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_internal_Util */

#ifndef _Included_com_tightdb_internal_Util
#define _Included_com_tightdb_internal_Util
#ifdef __cplusplus
extern "C" {
#endif
#undef com_tightdb_internal_Util_REQUIRED_JNI_VERSION
#define com_tightdb_internal_Util_REQUIRED_JNI_VERSION 19i64
/*
 * Class:     com_tightdb_internal_Util
 * Method:    nativeGetMemUsage
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_internal_Util_nativeGetMemUsage
  (JNIEnv *, jclass);

/*
 * Class:     com_tightdb_internal_Util
 * Method:    nativeGetVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_internal_Util_nativeGetVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_tightdb_internal_Util
 * Method:    nativeSetDebugLevel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_internal_Util_nativeSetDebugLevel
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_tightdb_internal_Util
 * Method:    nativeTestcase
 * Signature: (IZJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_internal_Util_nativeTestcase
  (JNIEnv *, jclass, jint, jboolean, jlong);

#ifdef __cplusplus
}
#endif
#endif