// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "../../handwritten-src/cpp/optional.hpp"
#include <cstdint>
#include <string>

namespace testsuite {

enum class constant_enum;
struct ConstantRecord;

/** Interface containing constants */
class ConstantsInterface {
public:
    virtual ~ConstantsInterface() {}

    static constexpr bool BOOL_CONSTANT = true;

    static constexpr int8_t I8_CONSTANT = 1;

    static constexpr int16_t I16_CONSTANT = 2;

    /** i32_constant has documentation. */
    static constexpr int32_t I32_CONSTANT = 3;

    /**
     * i64_constant has long documentation.
     * (Second line of multi-line documentation.
     *   Indented third line of multi-line documentation.)
     */
    static constexpr int64_t I64_CONSTANT = 4;

    static constexpr float F32_CONSTANT = 5.0f;

    static constexpr double F64_CONSTANT = 5.0;

    static constant_enum const CONST_ENUM;

    static std::experimental::optional<bool> const OPT_BOOL_CONSTANT;

    static std::experimental::optional<int8_t> const OPT_I8_CONSTANT;

    /** opt_i16_constant has documentation. */
    static std::experimental::optional<int16_t> const OPT_I16_CONSTANT;

    static std::experimental::optional<int32_t> const OPT_I32_CONSTANT;

    static std::experimental::optional<int64_t> const OPT_I64_CONSTANT;

    /**
     * opt_f32_constant has long documentation.
     * (Second line of multi-line documentation.
     *   Indented third line of multi-line documentation.)
     */
    static std::experimental::optional<float> const OPT_F32_CONSTANT;

    static std::experimental::optional<double> const OPT_F64_CONSTANT;

    static std::string const STRING_CONSTANT;

    static std::experimental::optional<std::string> const OPT_STRING_CONSTANT;

    static ConstantRecord const OBJECT_CONSTANT;

    /**
     * No support for null optional constants
     * No support for optional constant records
     * No support for constant binary, list, set, map
     */
    virtual void dummy() = 0;
};

}  // namespace testsuite