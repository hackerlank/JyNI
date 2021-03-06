/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JyNI_JyNI */

#ifndef _Included_JyNI_JyNI
#define _Included_JyNI_JyNI
#ifdef __cplusplus
extern "C" {
#endif
#undef JyNI_JyNI_NATIVE_INT_METHOD_NOT_IMPLEMENTED
#define JyNI_JyNI_NATIVE_INT_METHOD_NOT_IMPLEMENTED -2L
#undef JyNI_JyNI_RTLD_LAZY
#define JyNI_JyNI_RTLD_LAZY 1L
#undef JyNI_JyNI_RTLD_NOW
#define JyNI_JyNI_RTLD_NOW 2L
#undef JyNI_JyNI_RTLD_BINDING_MASK
#define JyNI_JyNI_RTLD_BINDING_MASK 3L
#undef JyNI_JyNI_RTLD_NOLOAD
#define JyNI_JyNI_RTLD_NOLOAD 4L
#undef JyNI_JyNI_RTLD_DEEPBIND
#define JyNI_JyNI_RTLD_DEEPBIND 8L
#undef JyNI_JyNI_RTLD_GLOBAL
#define JyNI_JyNI_RTLD_GLOBAL 256L
#undef JyNI_JyNI_RTLD_LOCAL
#define JyNI_JyNI_RTLD_LOCAL 0L
#undef JyNI_JyNI_RTLD_NODELETE
#define JyNI_JyNI_RTLD_NODELETE 4096L
#undef JyNI_JyNI_RTLD_JyNI_DEFAULT
#define JyNI_JyNI_RTLD_JyNI_DEFAULT 257L
#undef JyNI_JyNI_Py_LT
#define JyNI_JyNI_Py_LT 0L
#undef JyNI_JyNI_Py_LE
#define JyNI_JyNI_Py_LE 1L
#undef JyNI_JyNI_Py_EQ
#define JyNI_JyNI_Py_EQ 2L
#undef JyNI_JyNI_Py_NE
#define JyNI_JyNI_Py_NE 3L
#undef JyNI_JyNI_Py_GT
#define JyNI_JyNI_Py_GT 4L
#undef JyNI_JyNI_Py_GE
#define JyNI_JyNI_Py_GE 5L
#undef JyNI_JyNI_JYNI_GC_CONFIRMED_FLAG
#define JyNI_JyNI_JYNI_GC_CONFIRMED_FLAG 1L
#undef JyNI_JyNI_JYNI_GC_RESURRECTION_FLAG
#define JyNI_JyNI_JYNI_GC_RESURRECTION_FLAG 2L
#undef JyNI_JyNI_JYNI_GC_LAST_CONFIRMATION_FLAG
#define JyNI_JyNI_JYNI_GC_LAST_CONFIRMATION_FLAG 4L
/*
 * Class:     JyNI_JyNI
 * Method:    initJyNI
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_initJyNI
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JyNI_JyNI
 * Method:    clearPyCPeer
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_clearPyCPeer
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    loadModule
 * Signature: (Ljava/lang/String;Ljava/lang/String;J)Lorg/python/core/PyModule;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_loadModule
  (JNIEnv *, jclass, jstring, jstring, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    callPyCPeer
 * Signature: (JLorg/python/core/PyObject;Lorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_callPyCPeer
  (JNIEnv *, jclass, jlong, jobject, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    getAttrString
 * Signature: (JLjava/lang/String;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_getAttrString
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    setAttrString
 * Signature: (JLjava/lang/String;Lorg/python/core/PyObject;J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_setAttrString
  (JNIEnv *, jclass, jlong, jstring, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    repr
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_repr
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    PyObjectAsString
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JyNI_JyNI_PyObjectAsString
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    PyObjectAsPyString
 * Signature: (JJ)Lorg/python/core/PyString;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_PyObjectAsPyString
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    lookupFromHandle
 * Signature: (J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_lookupFromHandle
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    currentNativeRefCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_currentNativeRefCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    nativeIncref
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_nativeIncref
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    nativeDecref
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_nativeDecref
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    getNativeTypeName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JyNI_JyNI_getNativeTypeName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    getItem
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_getItem
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    setItem
 * Signature: (JLorg/python/core/PyObject;Lorg/python/core/PyObject;J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_setItem
  (JNIEnv *, jclass, jlong, jobject, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    delItem
 * Signature: (JLorg/python/core/PyObject;J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_delItem
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    PyObjectLength
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_PyObjectLength
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    descr_get
 * Signature: (JLorg/python/core/PyObject;Lorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_descr_1get
  (JNIEnv *, jclass, jlong, jobject, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    descr_set
 * Signature: (JLorg/python/core/PyObject;Lorg/python/core/PyObject;J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_descr_1set
  (JNIEnv *, jclass, jlong, jobject, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyObject_Compare
 * Signature: (JLorg/python/core/PyObject;J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_JyNI_1PyObject_1Compare
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyObject_RichCompare
 * Signature: (JLorg/python/core/PyObject;IJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyObject_1RichCompare
  (JNIEnv *, jclass, jlong, jobject, jint, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyObject_GetIter
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyObject_1GetIter
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyIter_Next
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyIter_1Next
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    setNativeRecursionLimit
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_setNativeRecursionLimit
  (JNIEnv *, jclass, jint);

/*
 * Class:     JyNI_JyNI
 * Method:    setNativeCallDepth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_setNativeCallDepth
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     JyNI_JyNI
 * Method:    initNativeThreadState
 * Signature: (LJyNI/JyTState;Lorg/python/core/ThreadState;)J
 */
JNIEXPORT jlong JNICALL Java_JyNI_JyNI_initNativeThreadState
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     JyNI_JyNI
 * Method:    clearNativeThreadState
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_clearNativeThreadState
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNIDebugMessage
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_JyNIDebugMessage
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     JyNI_JyNI
 * Method:    JyList_get
 * Signature: (JI)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyList_1get
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     JyNI_JyNI
 * Method:    JyList_size
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_JyList_1size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyList_set
 * Signature: (JILorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyList_1set
  (JNIEnv *, jclass, jlong, jint, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyList_add
 * Signature: (JILorg/python/core/PyObject;J)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_JyList_1add
  (JNIEnv *, jclass, jlong, jint, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyList_remove
 * Signature: (JI)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyList_1remove
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     JyNI_JyNI
 * Method:    JySet_putSize
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_JySet_1putSize
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     JyNI_JyNI
 * Method:    PyCFunction_getSelf
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_PyCFunction_1getSelf
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    PyCFunction_getModule
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_PyCFunction_1getModule
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_CMethodDef_bind
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1CMethodDef_1bind
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Add
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Add
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Subtract
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Subtract
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Multiply
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Multiply
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Divide
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Divide
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Remainder
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Remainder
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Divmod
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Divmod
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Power
 * Signature: (JLorg/python/core/PyObject;Lorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Power
  (JNIEnv *, jclass, jlong, jobject, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Negative
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Negative
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Positive
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Positive
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Absolute
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Absolute
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_NonZero
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1NonZero
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Invert
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Invert
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Lshift
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Lshift
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Rshift
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Rshift
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_And
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1And
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Xor
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Xor
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Or
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Or
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Coerce
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Coerce
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Int
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Int
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Long
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Long
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Float
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Float
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Oct
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Oct
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Hex
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Hex
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceAdd
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceAdd
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceSubtract
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceSubtract
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceMultiply
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceMultiply
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceDivide
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceDivide
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceRemainder
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceRemainder
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlacePower
 * Signature: (JLorg/python/core/PyObject;Lorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlacePower
  (JNIEnv *, jclass, jlong, jobject, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceLshift
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceLshift
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceRshift
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceRshift
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceAnd
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceAnd
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceXor
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceXor
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceOr
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceOr
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_FloorDivide
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1FloorDivide
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_TrueDivide
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1TrueDivide
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceFloorDivide
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceFloorDivide
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_InPlaceTrueDivide
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1InPlaceTrueDivide
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyNumber_Index
 * Signature: (JJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PyNumber_1Index
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_Length
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1Length
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_Concat
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1Concat
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_Repeat
 * Signature: (JIJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1Repeat
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_GetItem
 * Signature: (JIJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1GetItem
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_GetSlice
 * Signature: (JIIJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1GetSlice
  (JNIEnv *, jclass, jlong, jint, jint, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_SetItem
 * Signature: (JILorg/python/core/PyObject;J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1SetItem
  (JNIEnv *, jclass, jlong, jint, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_SetSlice
 * Signature: (JIILorg/python/core/PyObject;J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1SetSlice
  (JNIEnv *, jclass, jlong, jint, jint, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_Contains
 * Signature: (JLorg/python/core/PyObject;J)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1Contains
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_InPlaceConcat
 * Signature: (JLorg/python/core/PyObject;J)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1InPlaceConcat
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PySequence_InPlaceRepeat
 * Signature: (JIJ)Lorg/python/core/PyObject;
 */
JNIEXPORT jobject JNICALL Java_JyNI_JyNI_JyNI_1PySequence_1InPlaceRepeat
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyNI_PyMapping_Length
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_JyNI_JyNI_JyNI_1PyMapping_1Length
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyRefMonitor_setMemDebugFlags
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_JyRefMonitor_1setMemDebugFlags
  (JNIEnv *, jclass, jint);

/*
 * Class:     JyNI_JyNI
 * Method:    JyGC_clearNativeReferences
 * Signature: ([JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_JyNI_JyNI_JyGC_1clearNativeReferences
  (JNIEnv *, jclass, jlongArray, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    JyGC_restoreCStubBackend
 * Signature: (JLorg/python/core/PyObject;LJyNI/gc/JyGCHead;)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_JyGC_1restoreCStubBackend
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     JyNI_JyNI
 * Method:    JyGC_validateGCHead
 * Signature: (J[J)Z
 */
JNIEXPORT jboolean JNICALL Java_JyNI_JyNI_JyGC_1validateGCHead
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     JyNI_JyNI
 * Method:    JyGC_nativeTraverse
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_JyNI_JyNI_JyGC_1nativeTraverse
  (JNIEnv *, jclass, jlong);

/*
 * Class:     JyNI_JyNI
 * Method:    releaseWeakReferent
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_JyNI_JyNI_releaseWeakReferent
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
