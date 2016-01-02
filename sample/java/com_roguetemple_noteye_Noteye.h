/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_roguetemple_noteye_Noteye */

#ifndef _Included_com_roguetemple_noteye_Noteye
#define _Included_com_roguetemple_noteye_Noteye
#ifdef __cplusplus
extern "C" {
#endif
#undef com_roguetemple_noteye_Noteye_DBASE
#define com_roguetemple_noteye_Noteye_DBASE 3072L
#undef com_roguetemple_noteye_Noteye_DWAIT
#define com_roguetemple_noteye_Noteye_DWAIT 3080L
#undef com_roguetemple_noteye_Noteye_KEY_F0
#define com_roguetemple_noteye_Noteye_KEY_F0 256L
#undef com_roguetemple_noteye_Noteye_NOTEYEERR
#define com_roguetemple_noteye_Noteye_NOTEYEERR -256L
/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_init
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    halt
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_halt
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    args
 * Signature: (I[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_args
  (JNIEnv *, jclass, jint, jobjectArray);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    run
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_run
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    finishinternal
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_finishinternal
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    uifinish
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_uifinish
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    move
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_move
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    addch
 * Signature: (C)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_addch
  (JNIEnv *, jclass, jchar);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    addstr
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_addstr
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    mvaddch
 * Signature: (IIC)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_mvaddch
  (JNIEnv *, jclass, jint, jint, jchar);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    mvaddstr
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_mvaddstr
  (JNIEnv *, jclass, jint, jint, jstring);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    setTextAttr
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_setTextAttr
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    setTextAttr32
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_setTextAttr32
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    noteye_curs_set
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_noteye_1curs_1set
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    noteye_curs_setx
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_noteye_1curs_1setx
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    getticks
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_getticks
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    getch
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_getch
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    getchev
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_getchev
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    ev_type
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_ev_1type
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    ev_key
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_ev_1key
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    ev_scancode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_ev_1scancode
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    ev_mods
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_ev_1mods
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    refresh
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_refresh
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    noteye_halfdelay
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_noteye_1halfdelay
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    noteye_halfdelayms
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_noteye_1halfdelayms
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    noteye_cbreak
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_noteye_1cbreak
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    globalstr
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_globalstr
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    argcount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_argcount
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    argint
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_roguetemple_noteye_Noteye_argint
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    argnum
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_com_roguetemple_noteye_Noteye_argnum
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    argstr
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_roguetemple_noteye_Noteye_argstr
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    retint
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_retint
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    retbool
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_retbool
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    retstr
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_retstr
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_new
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1new
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_closesub
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1closesub
  (JNIEnv *, jclass);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_setInt
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1setInt
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_setStr
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1setStr
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_setBool
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1setBool
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_opensub
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1opensub
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_setIntAtInt
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1setIntAtInt
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_setStrAtInt
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1setStrAtInt
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_setBoolAtInt
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1setBoolAtInt
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_roguetemple_noteye_Noteye
 * Method:    table_opensubAtInt
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_roguetemple_noteye_Noteye_table_1opensubAtInt
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
