// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client.djinni

#pragma once

#include "djinni_support.hpp"
#include "reply.hpp"

namespace djinni_generated {

class NativeReply final {
public:
    using CppType = ::client::Reply;
    using JniType = jobject;

    using Boxed = NativeReply;

    ~NativeReply();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeReply();
    friend ::djinni::JniClass<NativeReply>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/mycompany/client/Reply") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/lang/String;ZLjava/lang/String;)V") };
    const jfieldID field_mResultcode { ::djinni::jniGetFieldID(clazz.get(), "mResultcode", "I") };
    const jfieldID field_mResultmsg { ::djinni::jniGetFieldID(clazz.get(), "mResultmsg", "Ljava/lang/String;") };
    const jfieldID field_mIsauthvalid { ::djinni::jniGetFieldID(clazz.get(), "mIsauthvalid", "Z") };
    const jfieldID field_mAuth { ::djinni::jniGetFieldID(clazz.get(), "mAuth", "Ljava/lang/String;") };
};

}  // namespace djinni_generated