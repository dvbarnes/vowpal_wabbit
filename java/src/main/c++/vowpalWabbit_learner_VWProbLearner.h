/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vowpalWabbit_learner_VWProbLearner */

#ifndef _Included_vowpalWabbit_learner_VWProbLearner
#define _Included_vowpalWabbit_learner_VWProbLearner
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     vowpalWabbit_learner_VWProbLearner
 * Method:    predict
 * Signature: (Ljava/lang/String;ZJ)F
 */
JNIEXPORT jfloat JNICALL Java_vowpalWabbit_learner_VWProbLearner_predict
  (JNIEnv *, jobject, jstring, jboolean, jlong);

/*
 * Class:     vowpalWabbit_learner_VWProbLearner
 * Method:    predictMultiline
 * Signature: ([Ljava/lang/String;ZJ)F
 */
JNIEXPORT jfloat JNICALL Java_vowpalWabbit_learner_VWProbLearner_predictMultiline
  (JNIEnv *, jobject, jobjectArray, jboolean, jlong);

#ifdef __cplusplus
}
#endif
#endif