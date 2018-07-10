// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client.djinni

#pragma once

#include "client.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeClient final : ::djinni::JniInterface<::client::Client, NativeClient> {
public:
    using CppType = std::shared_ptr<::client::Client>;
    using CppOptType = std::shared_ptr<::client::Client>;
    using JniType = jobject;

    using Boxed = NativeClient;

    ~NativeClient();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeClient>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeClient>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeClient();
    friend ::djinni::JniClass<NativeClient>;
    friend ::djinni::JniInterface<::client::Client, NativeClient>;

};

}  // namespace djinni_generated