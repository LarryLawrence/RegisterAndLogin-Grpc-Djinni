// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client.djinni

#import "TDAUser+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto User::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::I32::toCpp(obj.id),
            ::djinni::String::toCpp(obj.username),
            ::djinni::String::toCpp(obj.password),
            ::djinni::I32::toCpp(obj.auth),
            ::djinni::String::toCpp(obj.deviceid)};
}

auto User::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[TDAUser alloc] initWithId:(::djinni::I32::fromCpp(cpp.id))
                              username:(::djinni::String::fromCpp(cpp.username))
                              password:(::djinni::String::fromCpp(cpp.password))
                                  auth:(::djinni::I32::fromCpp(cpp.auth))
                              deviceid:(::djinni::String::fromCpp(cpp.deviceid))];
}

}  // namespace djinni_generated