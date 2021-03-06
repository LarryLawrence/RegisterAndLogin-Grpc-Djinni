// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client.djinni

#pragma once

#include "djinni_support.hpp"
#include "user.hpp"

namespace djinni_generated {

class NativeUser final {
public:
    using CppType = ::client::User;
    using JniType = jobject;

    using Boxed = NativeUser;

    ~NativeUser();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeUser();
    friend ::djinni::JniClass<NativeUser>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/chang/client/User") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V") };
    const jfieldID field_mId { ::djinni::jniGetFieldID(clazz.get(), "mId", "I") };
    const jfieldID field_mUsername { ::djinni::jniGetFieldID(clazz.get(), "mUsername", "Ljava/lang/String;") };
    const jfieldID field_mPassword { ::djinni::jniGetFieldID(clazz.get(), "mPassword", "Ljava/lang/String;") };
    const jfieldID field_mAuth { ::djinni::jniGetFieldID(clazz.get(), "mAuth", "Ljava/lang/String;") };
    const jfieldID field_mDeviceid { ::djinni::jniGetFieldID(clazz.get(), "mDeviceid", "Ljava/lang/String;") };
};

}  // namespace djinni_generated
