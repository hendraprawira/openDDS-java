#include "MessengerJC.h"
#include "idl2jni_runtime.h"

/* Generated by /home/prawirah/OpenDDS-3.25/bin/idl2jni running on input file Messenger.idl */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: Messenger */



/* Begin STRUCT: Message */

void copyToCxx (JNIEnv *jni, Messenger::Message &target, jobject source)
{
  jclass clazz = jni->GetObjectClass (source);
  {
    jfieldID fid = jni->GetFieldID (clazz, "from", "Ljava/lang/String;");
    jobject obj = jni->GetObjectField (source, fid);
    copyToCxx (jni, target.from, obj);
    jni->DeleteLocalRef (obj);
  }
  {
    jfieldID fid = jni->GetFieldID (clazz, "subject", "Ljava/lang/String;");
    jobject obj = jni->GetObjectField (source, fid);
    copyToCxx (jni, target.subject, obj);
    jni->DeleteLocalRef (obj);
  }
  {
    jfieldID fid = jni->GetFieldID (clazz, "subject_id", "I");
    target.subject_id = jni->GetIntField (source, fid);
  }
  {
    jfieldID fid = jni->GetFieldID (clazz, "text", "Ljava/lang/String;");
    jobject obj = jni->GetObjectField (source, fid);
    copyToCxx (jni, target.text, obj);
    jni->DeleteLocalRef (obj);
  }
  {
    jfieldID fid = jni->GetFieldID (clazz, "count", "I");
    target.count = jni->GetIntField (source, fid);
  }
  jni->DeleteLocalRef (clazz);
}

void copyToJava (JNIEnv *jni, jobject &target, const Messenger::Message &source, bool createNewObject)
{
  jclass clazz;
  if (createNewObject)
    {
      clazz = findClass (jni, "Messenger/Message");
      jmethodID ctor = jni->GetMethodID (clazz, "<init>", "()V");
      target = jni->NewObject (clazz, ctor);
    }
  else
    {
      clazz = jni->GetObjectClass (target);
    }
  {
    jfieldID fid = jni->GetFieldID (clazz, "from", "Ljava/lang/String;");
    jobject obj = createNewObject ? 0 : jni->GetObjectField (target, fid);
    copyToJava (jni, obj, source.from, createNewObject);
    jni->SetObjectField (target, fid, obj);
    jni->DeleteLocalRef (obj);
  }
  {
    jfieldID fid = jni->GetFieldID (clazz, "subject", "Ljava/lang/String;");
    jobject obj = createNewObject ? 0 : jni->GetObjectField (target, fid);
    copyToJava (jni, obj, source.subject, createNewObject);
    jni->SetObjectField (target, fid, obj);
    jni->DeleteLocalRef (obj);
  }
  {
    jfieldID fid = jni->GetFieldID (clazz, "subject_id", "I");
    jni->SetIntField (target, fid, source.subject_id);
  }
  {
    jfieldID fid = jni->GetFieldID (clazz, "text", "Ljava/lang/String;");
    jobject obj = createNewObject ? 0 : jni->GetObjectField (target, fid);
    copyToJava (jni, obj, source.text, createNewObject);
    jni->SetObjectField (target, fid, obj);
    jni->DeleteLocalRef (obj);
  }
  {
    jfieldID fid = jni->GetFieldID (clazz, "count", "I");
    jni->SetIntField (target, fid, source.count);
  }
  jni->DeleteLocalRef (clazz);
}


/* End STRUCT: Message */

/* End MODULE: Messenger */
