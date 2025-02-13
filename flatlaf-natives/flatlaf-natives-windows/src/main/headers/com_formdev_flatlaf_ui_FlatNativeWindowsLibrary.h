/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_formdev_flatlaf_ui_FlatNativeWindowsLibrary */

#ifndef _Included_com_formdev_flatlaf_ui_FlatNativeWindowsLibrary
#define _Included_com_formdev_flatlaf_ui_FlatNativeWindowsLibrary
#ifdef __cplusplus
extern "C" {
#endif
#undef com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_DWMWCP_DEFAULT
#define com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_DWMWCP_DEFAULT 0L
#undef com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_DWMWCP_DONOTROUND
#define com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_DWMWCP_DONOTROUND 1L
#undef com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_DWMWCP_ROUND
#define com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_DWMWCP_ROUND 2L
#undef com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_DWMWCP_ROUNDSMALL
#define com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_DWMWCP_ROUNDSMALL 3L
/*
 * Class:     com_formdev_flatlaf_ui_FlatNativeWindowsLibrary
 * Method:    getOSBuildNumberImpl
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_getOSBuildNumberImpl
  (JNIEnv *, jclass);

/*
 * Class:     com_formdev_flatlaf_ui_FlatNativeWindowsLibrary
 * Method:    getHWND
 * Signature: (Ljava/awt/Window;)J
 */
JNIEXPORT jlong JNICALL Java_com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_getHWND
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_formdev_flatlaf_ui_FlatNativeWindowsLibrary
 * Method:    setWindowCornerPreference
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_setWindowCornerPreference
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_formdev_flatlaf_ui_FlatNativeWindowsLibrary
 * Method:    setWindowBorderColor
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_setWindowBorderColor
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_formdev_flatlaf_ui_FlatNativeWindowsLibrary
 * Method:    setContainInScreen
 * Signature: (Ljava/awt/Window;Z)V
 */
JNIEXPORT void JNICALL Java_com_formdev_flatlaf_ui_FlatNativeWindowsLibrary_setContainInScreen
  (JNIEnv *, jclass, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif
