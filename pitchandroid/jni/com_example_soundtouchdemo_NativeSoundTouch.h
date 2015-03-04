/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_soundtouchdemo_NativeSoundTouch */

#ifndef _Included_com_example_soundtouchdemo_NativeSoundTouch
#define _Included_com_example_soundtouchdemo_NativeSoundTouch
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_soundtouchdemo_NativeSoundTouch
 * Method:    soundTouchCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_example_soundtouchdemo_NativeSoundTouch_soundTouchCreate(
		JNIEnv *, jobject);

/*
 * Class:     com_example_soundtouchdemo_NativeSoundTouch
 * Method:    soundTouchDestory
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_soundtouchdemo_NativeSoundTouch_soundTouchDestory
(JNIEnv *, jobject);

/*
 * Class:     com_example_soundtouchdemo_NativeSoundTouch
 * Method:    soundTouchgethVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_soundtouchdemo_NativeSoundTouch_soundTouchgethVersion(
		JNIEnv *, jobject);

/*
 * Class:     com_example_soundtouchdemo_NativeSoundTouch
 * Method:    setPitchSemiTones
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_com_example_soundtouchdemo_NativeSoundTouch_setPitchSemiTones
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_example_soundtouchdemo_NativeSoundTouch
 * Method:    setTempoChange
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_example_soundtouchdemo_NativeSoundTouch_setTempoChange
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_example_soundtouchdemo_NativeSoundTouch
 * Method:    shiftingPitch
 * Signature: ([BII)V
 */
JNIEXPORT void JNICALL Java_com_example_soundtouchdemo_NativeSoundTouch_shiftingPitch
(JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     com_example_soundtouchdemo_NativeSoundTouch
 * Method:    receiveSamples
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_example_soundtouchdemo_NativeSoundTouch_receiveSamples
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_example_soundtouchdemo_NativeSoundTouch
 * Method:    soundTouchFlushLastSamples
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_soundtouchdemo_NativeSoundTouch_soundTouchFlushLastSamples
  (JNIEnv *, jobject);



#ifdef __cplusplus
}
#endif
#endif
