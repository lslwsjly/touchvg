/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#ifdef __ANDROID__
#define SWIG_JAVA_NO_DETACH_CURRENT_THREAD
#define SWIG_JAVA_ATTACH_CURRENT_THREAD_AS_DAEMON
#endif


#include <DemoCmds.h>
#include <mgcoreview.h>


struct TmpJOBJ {
    JNIEnv* env;
    jobject* jo;
    template <class T>
    TmpJOBJ(JNIEnv* e, T* v) : env(e), jo((jobject*)v) { }
    TmpJOBJ(JNIEnv* e, jobject& v) : env(e), jo(&v) { }
    ~TmpJOBJ() { if (*jo) { env->DeleteLocalRef(*jo); *jo = 0; } }
};
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* /*ajvm*/, void* /*reserved*/) {
    return JNI_VERSION_1_6;
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_delete_1Floats(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(mgvector< float > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_democmds_core_democmdsJNI_new_1Floats_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  mgvector< float > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (mgvector< float > *)new mgvector< float >(arg1);
  *(mgvector< float > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_democmds_core_democmdsJNI_new_1Floats_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  mgvector< float > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (mgvector< float > *)new mgvector< float >();
  *(mgvector< float > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_Floats_1setSize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< float > **)&jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->setSize(arg2);
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_Floats_1count(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< float > **)&jarg1; 
  result = (int)((mgvector< float > const *)arg1)->count();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jfloat JNICALL Java_democmds_core_democmdsJNI_Floats_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jfloat jresult = 0 ;
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int arg2 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< float > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (float)((mgvector< float > const *)arg1)->get(arg2);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_Floats_1set_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jfloat jarg3) {
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int arg2 ;
  float arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< float > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (float)jarg3; 
  (arg1)->set(arg2,arg3);
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_Floats_1set_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jfloat jarg3, jfloat jarg4) {
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int arg2 ;
  float arg3 ;
  float arg4 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< float > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  (arg1)->set(arg2,arg3,arg4);
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_delete_1Chars(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(mgvector< char > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_democmds_core_democmdsJNI_new_1Chars_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  mgvector< char > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (mgvector< char > *)new mgvector< char >(arg1);
  *(mgvector< char > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_democmds_core_democmdsJNI_new_1Chars_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  mgvector< char > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (mgvector< char > *)new mgvector< char >();
  *(mgvector< char > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_Chars_1setSize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< char > **)&jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->setSize(arg2);
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_Chars_1count(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< char > **)&jarg1; 
  result = (int)((mgvector< char > const *)arg1)->count();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jchar JNICALL Java_democmds_core_democmdsJNI_Chars_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jchar jresult = 0 ;
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int arg2 ;
  char result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< char > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (char)((mgvector< char > const *)arg1)->get(arg2);
  jresult = (jchar)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_Chars_1set_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jchar jarg3) {
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int arg2 ;
  char arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< char > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (char)jarg3; 
  (arg1)->set(arg2,arg3);
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_Chars_1set_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jchar jarg3, jchar jarg4) {
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int arg2 ;
  char arg3 ;
  char arg4 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(mgvector< char > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (char)jarg3; 
  arg4 = (char)jarg4; 
  (arg1)->set(arg2,arg3,arg4);
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_DemoCmdsGate_1registerCmds(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  long arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (long)jarg1; 
  result = (int)DemoCmdsGate::registerCmds(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_DemoCmdsGate_1getDimensions(JNIEnv *jenv, jclass jcls, jint jarg1, jlong jarg2, jobject jarg2_, jlong jarg3, jobject jarg3_) {
  jint jresult = 0 ;
  long arg1 ;
  mgvector< float > *arg2 = 0 ;
  mgvector< char > *arg3 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  (void)jarg3_;
  arg1 = (long)jarg1; 
  arg2 = *(mgvector< float > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "mgvector< float > & reference is null");
    return 0;
  } 
  arg3 = *(mgvector< char > **)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "mgvector< char > & reference is null");
    return 0;
  } 
  result = (int)DemoCmdsGate::getDimensions(arg1,*arg2,*arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_democmds_core_democmdsJNI_new_1DemoCmdsGate(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  DemoCmdsGate *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (DemoCmdsGate *)new DemoCmdsGate();
  *(DemoCmdsGate **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_delete_1DemoCmdsGate(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  DemoCmdsGate *arg1 = (DemoCmdsGate *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(DemoCmdsGate **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_delete_1MgCoreView(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(MgCoreView **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1fromHandle(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  long arg1 ;
  MgCoreView *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (long)jarg1; 
  result = (MgCoreView *)MgCoreView::fromHandle(arg1);
  *(MgCoreView **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1toHandle(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (long)(arg1)->toHandle();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1viewAdapter(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  MgView *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (MgView *)(arg1)->viewAdapter();
  *(MgView **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1viewAdapterHandle(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (long)(arg1)->viewAdapterHandle();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1docHandle(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (long)(arg1)->docHandle();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1shapesHandle(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (long)(arg1)->shapesHandle();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1isPressDragging(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (bool)(arg1)->isPressDragging();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getCommand(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (char *)((MgCoreView const *)arg1)->getCommand();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1setCommand_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = 0;
  if (jarg3) {
    arg3 = (char *)jenv->GetStringUTFChars(jarg3, 0);
    if (!arg3) return 0;
  }
  result = (bool)(arg1)->setCommand((char const *)arg2,(char const *)arg3);
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  if (arg3) jenv->ReleaseStringUTFChars(jarg3, (const char *)arg3);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1setCommand_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  result = (bool)(arg1)->setCommand((char const *)arg2);
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1doContextAction(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->doContextAction(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1clearCachedData(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  (arg1)->clearCachedData();
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1addShapesForTest(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (int)(arg1)->addShapesForTest();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getShapeCount(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (int)(arg1)->getShapeCount();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getChangeCount(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (int)(arg1)->getChangeCount();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getDrawCount(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (int)((MgCoreView const *)arg1)->getDrawCount();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getSelectedShapeCount(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (int)(arg1)->getSelectedShapeCount();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getSelectedShapeType(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (int)(arg1)->getSelectedShapeType();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getSelectedShapeID(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (int)(arg1)->getSelectedShapeID();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1loadFromFile_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jboolean jarg3) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = jarg3 ? true : false; 
  result = (bool)(arg1)->loadFromFile((char const *)arg2,arg3);
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1loadFromFile_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  result = (bool)(arg1)->loadFromFile((char const *)arg2);
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1saveToFile_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jboolean jarg3) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = jarg3 ? true : false; 
  result = (bool)(arg1)->saveToFile((char const *)arg2,arg3);
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1saveToFile_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  result = (bool)(arg1)->saveToFile((char const *)arg2);
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getContent(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (char *)(arg1)->getContent();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1freeContent(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  (arg1)->freeContent();
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1setContent(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  result = (bool)(arg1)->setContent((char const *)arg2);
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1exportSVG(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  result = (bool)(arg1)->exportSVG((char const *)arg2);
  jresult = (jboolean)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1zoomToExtent(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  result = (bool)(arg1)->zoomToExtent();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1zoomToModel(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2, jfloat jarg3, jfloat jarg4, jfloat jarg5) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = (float)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  result = (bool)(arg1)->zoomToModel(arg2,arg3,arg4,arg5);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jfloat JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1calcPenWidth(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  jfloat jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  float arg2 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = (float)jarg2; 
  result = (float)(arg1)->calcPenWidth(arg2);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getContext(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jlong jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  bool arg2 ;
  GiContext *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (GiContext *) &(arg1)->getContext(arg2);
  *(GiContext **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1setContext_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jint jarg3, jint jarg4) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  GiContext *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = *(GiContext **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "GiContext const & reference is null");
    return ;
  } 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  (arg1)->setContext((GiContext const &)*arg2,arg3,arg4);
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1setContext_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->setContext(arg2);
}


SWIGEXPORT void JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1setContextEditing(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  (arg1)->setContextEditing(arg2);
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1addImageShape_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jfloat jarg3, jfloat jarg4) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  float arg3 ;
  float arg4 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  result = (int)(arg1)->addImageShape((char const *)arg2,arg3,arg4);
  jresult = (jint)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1addImageShape_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jfloat jarg3, jfloat jarg4, jfloat jarg5, jfloat jarg6) {
  jint jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  float arg6 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  arg6 = (float)jarg6; 
  result = (int)(arg1)->addImageShape((char const *)arg2,arg3,arg4,arg5,arg6);
  jresult = (jint)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getBoundingBox_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  mgvector< float > *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = *(mgvector< float > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "mgvector< float > & reference is null");
    return 0;
  } 
  result = (bool)(arg1)->getBoundingBox(*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_democmds_core_democmdsJNI_MgCoreView_1getBoundingBox_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jint jarg3) {
  jboolean jresult = 0 ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  mgvector< float > *arg2 = 0 ;
  int arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(MgCoreView **)&jarg1; 
  arg2 = *(mgvector< float > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "mgvector< float > & reference is null");
    return 0;
  } 
  arg3 = (int)jarg3; 
  result = (bool)(arg1)->getBoundingBox(*arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

