/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class twilight_bgfx_VertexDecl */

#ifndef _Included_twilight_bgfx_VertexDecl
#define _Included_twilight_bgfx_VertexDecl
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    ndestroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_twilight_bgfx_VertexDecl_ndestroy
  (JNIEnv *, jobject);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    nbegin
 * Signature: (Ll33tlabs/twilight/bgfx/RendererType;)J
 */
JNIEXPORT jlong JNICALL Java_twilight_bgfx_VertexDecl_nbegin
  (JNIEnv *, jobject, jobject);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    nend
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_twilight_bgfx_VertexDecl_nend
  (JNIEnv *, jobject);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    nAdd
 * Signature: (Ll33tlabs/twilight/bgfx/Attrib;SLl33tlabs/twilight/bgfx/AttribType;ZZ)V
 */
JNIEXPORT void JNICALL Java_twilight_bgfx_VertexDecl_nAdd
  (JNIEnv *, jobject, jint, jshort, jint, jboolean, jboolean);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    nSkip
 * Signature: (S)V
 */
JNIEXPORT void JNICALL Java_twilight_bgfx_VertexDecl_nSkip
  (JNIEnv *, jobject, jshort);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    nDecode
 * Signature: (Ll33tlabs/twilight/bgfx/Attrib;SLl33tlabs/twilight/bgfx/AttribType;ZZ)V
 */
JNIEXPORT void JNICALL Java_twilight_bgfx_VertexDecl_nDecode
  (JNIEnv *, jobject, jobject, jshort, jobject, jboolean, jboolean);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    nHas
 * Signature: (Ll33tlabs/twilight/bgfx/Attrib;)Z
 */
JNIEXPORT jboolean JNICALL Java_twilight_bgfx_VertexDecl_nHas
  (JNIEnv *, jobject, jobject);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    ngetOffset
 * Signature: (Ll33tlabs/twilight/bgfx/Attrib;)I
 */
JNIEXPORT jint JNICALL Java_twilight_bgfx_VertexDecl_ngetOffset
  (JNIEnv *, jobject, jobject);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    ngetStride
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_twilight_bgfx_VertexDecl_ngetStride
  (JNIEnv *, jobject);

/*
 * Class:     twilight_bgfx_VertexDecl
 * Method:    ngetStride
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_twilight_bgfx_VertexDecl_ngetSize
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
