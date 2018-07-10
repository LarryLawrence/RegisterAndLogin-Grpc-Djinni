// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client.djinni

#include "client.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class TDAClient;

namespace djinni_generated {

class Client
{
public:
    using CppType = std::shared_ptr<::client::Client>;
    using CppOptType = std::shared_ptr<::client::Client>;
    using ObjcType = TDAClient*;

    using Boxed = Client;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

