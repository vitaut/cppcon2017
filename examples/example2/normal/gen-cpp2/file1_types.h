/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include "file12_types.h"
#include "file19_types.h"
#include "file20_types.h"
#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace example { namespace thrift1 {

class Struct0;
class Struct1;
class Struct2;

class Struct0 : private apache::thrift::detail::st::ComparisonOperators<Struct0> {
 public:

  Struct0() :
      field2(0),
      field4(0),
      field6(0),
      field7(0),
      field10(0),
      field13(0),
      field14(0),
      field15(0) {}
  // FragileConstructor for use in initialization lists only

  Struct0(apache::thrift::FragileConstructor, std::string field1__arg, int8_t field2__arg, std::set<double> field3__arg, float field4__arg, std::string field5__arg, int32_t field6__arg, int16_t field7__arg, std::set<std::string> field8__arg, std::string field9__arg, bool field10__arg, std::string field11__arg,  ::example::thrift12::Struct27 field12__arg, int8_t field13__arg, int32_t field14__arg, int64_t field15__arg,  ::example::thrift12::Struct17 field16__arg, std::map<bool, double> field17__arg) :
      field1(std::move(field1__arg)),
      field2(std::move(field2__arg)),
      field3(std::move(field3__arg)),
      field4(std::move(field4__arg)),
      field5(std::move(field5__arg)),
      field6(std::move(field6__arg)),
      field7(std::move(field7__arg)),
      field8(std::move(field8__arg)),
      field9(std::move(field9__arg)),
      field10(std::move(field10__arg)),
      field11(std::move(field11__arg)),
      field12(std::move(field12__arg)),
      field13(std::move(field13__arg)),
      field14(std::move(field14__arg)),
      field15(std::move(field15__arg)),
      field16(std::move(field16__arg)),
      field17(std::move(field17__arg)) {
    __isset.field1 = true;
    __isset.field2 = true;
    __isset.field3 = true;
    __isset.field4 = true;
    __isset.field5 = true;
    __isset.field6 = true;
    __isset.field7 = true;
    __isset.field8 = true;
    __isset.field9 = true;
    __isset.field10 = true;
    __isset.field11 = true;
    __isset.field12 = true;
    __isset.field13 = true;
    __isset.field14 = true;
    __isset.field15 = true;
    __isset.field16 = true;
    __isset.field17 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field1 = arg.move();
    __isset.field1 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field2 = arg.move();
    __isset.field2 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field3 = arg.move();
    __isset.field3 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field4 = arg.move();
    __isset.field4 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field5 = arg.move();
    __isset.field5 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<6, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field6 = arg.move();
    __isset.field6 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<7, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field7 = arg.move();
    __isset.field7 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<8, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field8 = arg.move();
    __isset.field8 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<9, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field9 = arg.move();
    __isset.field9 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<10, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field10 = arg.move();
    __isset.field10 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<11, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field11 = arg.move();
    __isset.field11 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<12, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field12 = arg.move();
    __isset.field12 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<13, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field13 = arg.move();
    __isset.field13 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<14, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field14 = arg.move();
    __isset.field14 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<15, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field15 = arg.move();
    __isset.field15 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<16, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field16 = arg.move();
    __isset.field16 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct0(::apache::thrift::detail::argument_wrapper<17, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct0(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field17 = arg.move();
    __isset.field17 = true;
  }

  Struct0(Struct0&&) = default;

  Struct0(const Struct0&) = default;

  Struct0& operator=(Struct0&&) = default;

  Struct0& operator=(const Struct0&) = default;
  void __clear();

  virtual ~Struct0() {}

  std::string field1;
  int8_t field2;
  std::set<double> field3;
  float field4;
  std::string field5;
  int32_t field6;
  int16_t field7;
  std::set<std::string> field8;
  std::string field9;
  bool field10;
  std::string field11;
   ::example::thrift12::Struct27 field12;
  int8_t field13;
  int32_t field14;
  int64_t field15;
   ::example::thrift12::Struct17 field16;
  std::map<bool, double> field17;

  struct __isset {
    void __clear() {
      field1 = false;
      field2 = false;
      field3 = false;
      field4 = false;
      field5 = false;
      field6 = false;
      field7 = false;
      field8 = false;
      field9 = false;
      field10 = false;
      field11 = false;
      field12 = false;
      field13 = false;
      field14 = false;
      field15 = false;
      field16 = false;
      field17 = false;
    }

    bool field1 = false;
    bool field2 = false;
    bool field3 = false;
    bool field4 = false;
    bool field5 = false;
    bool field6 = false;
    bool field7 = false;
    bool field8 = false;
    bool field9 = false;
    bool field10 = false;
    bool field11 = false;
    bool field12 = false;
    bool field13 = false;
    bool field14 = false;
    bool field15 = false;
    bool field16 = false;
    bool field17 = false;
  } __isset;
  bool operator==(const Struct0& rhs) const;

  bool operator < (const Struct0& rhs) const {
    if (!(field1 == rhs.field1)) {
      return field1 < rhs.field1;
    }
    if (!(field2 == rhs.field2)) {
      return field2 < rhs.field2;
    }
    if (!(field3 == rhs.field3)) {
      return field3 < rhs.field3;
    }
    if (!(field4 == rhs.field4)) {
      return field4 < rhs.field4;
    }
    if (!(field5 == rhs.field5)) {
      return field5 < rhs.field5;
    }
    if (!(field6 == rhs.field6)) {
      return field6 < rhs.field6;
    }
    if (!(field7 == rhs.field7)) {
      return field7 < rhs.field7;
    }
    if (!(field8 == rhs.field8)) {
      return field8 < rhs.field8;
    }
    if (!(field9 == rhs.field9)) {
      return field9 < rhs.field9;
    }
    if (!(field10 == rhs.field10)) {
      return field10 < rhs.field10;
    }
    if (!(field11 == rhs.field11)) {
      return field11 < rhs.field11;
    }
    if (!(field12 == rhs.field12)) {
      return field12 < rhs.field12;
    }
    if (!(field13 == rhs.field13)) {
      return field13 < rhs.field13;
    }
    if (!(field14 == rhs.field14)) {
      return field14 < rhs.field14;
    }
    if (!(field15 == rhs.field15)) {
      return field15 < rhs.field15;
    }
    if (!(field16 == rhs.field16)) {
      return field16 < rhs.field16;
    }
    if (!(field17 == rhs.field17)) {
      return field17 < rhs.field17;
    }
    (void)rhs;
    return false;
  }

  const std::string& get_field1() const& {
    return field1;
  }

  std::string get_field1() && {
    return std::move(field1);
  }

  template <typename T_Struct0_field1_struct_setter>
  std::string& set_field1(T_Struct0_field1_struct_setter&& field1_) {
    field1 = std::forward<T_Struct0_field1_struct_setter>(field1_);
    __isset.field1 = true;
    return field1;
  }

  int8_t get_field2() const {
    return field2;
  }

  int8_t& set_field2(int8_t field2_) {
    field2 = field2_;
    __isset.field2 = true;
    return field2;
  }
  const std::set<double>& get_field3() const&;
  std::set<double> get_field3() &&;

  template <typename T_Struct0_field3_struct_setter>
  std::set<double>& set_field3(T_Struct0_field3_struct_setter&& field3_) {
    field3 = std::forward<T_Struct0_field3_struct_setter>(field3_);
    __isset.field3 = true;
    return field3;
  }

  float get_field4() const {
    return field4;
  }

  float& set_field4(float field4_) {
    field4 = field4_;
    __isset.field4 = true;
    return field4;
  }

  const std::string& get_field5() const& {
    return field5;
  }

  std::string get_field5() && {
    return std::move(field5);
  }

  template <typename T_Struct0_field5_struct_setter>
  std::string& set_field5(T_Struct0_field5_struct_setter&& field5_) {
    field5 = std::forward<T_Struct0_field5_struct_setter>(field5_);
    __isset.field5 = true;
    return field5;
  }

  int32_t get_field6() const {
    return field6;
  }

  int32_t& set_field6(int32_t field6_) {
    field6 = field6_;
    __isset.field6 = true;
    return field6;
  }

  int16_t get_field7() const {
    return field7;
  }

  int16_t& set_field7(int16_t field7_) {
    field7 = field7_;
    __isset.field7 = true;
    return field7;
  }
  const std::set<std::string>& get_field8() const&;
  std::set<std::string> get_field8() &&;

  template <typename T_Struct0_field8_struct_setter>
  std::set<std::string>& set_field8(T_Struct0_field8_struct_setter&& field8_) {
    field8 = std::forward<T_Struct0_field8_struct_setter>(field8_);
    __isset.field8 = true;
    return field8;
  }

  const std::string& get_field9() const& {
    return field9;
  }

  std::string get_field9() && {
    return std::move(field9);
  }

  template <typename T_Struct0_field9_struct_setter>
  std::string& set_field9(T_Struct0_field9_struct_setter&& field9_) {
    field9 = std::forward<T_Struct0_field9_struct_setter>(field9_);
    __isset.field9 = true;
    return field9;
  }

  bool get_field10() const {
    return field10;
  }

  bool& set_field10(bool field10_) {
    field10 = field10_;
    __isset.field10 = true;
    return field10;
  }

  const std::string& get_field11() const& {
    return field11;
  }

  std::string get_field11() && {
    return std::move(field11);
  }

  template <typename T_Struct0_field11_struct_setter>
  std::string& set_field11(T_Struct0_field11_struct_setter&& field11_) {
    field11 = std::forward<T_Struct0_field11_struct_setter>(field11_);
    __isset.field11 = true;
    return field11;
  }
  const  ::example::thrift12::Struct27& get_field12() const&;
   ::example::thrift12::Struct27 get_field12() &&;

  template <typename T_Struct0_field12_struct_setter>
   ::example::thrift12::Struct27& set_field12(T_Struct0_field12_struct_setter&& field12_) {
    field12 = std::forward<T_Struct0_field12_struct_setter>(field12_);
    __isset.field12 = true;
    return field12;
  }

  int8_t get_field13() const {
    return field13;
  }

  int8_t& set_field13(int8_t field13_) {
    field13 = field13_;
    __isset.field13 = true;
    return field13;
  }

  int32_t get_field14() const {
    return field14;
  }

  int32_t& set_field14(int32_t field14_) {
    field14 = field14_;
    __isset.field14 = true;
    return field14;
  }

  int64_t get_field15() const {
    return field15;
  }

  int64_t& set_field15(int64_t field15_) {
    field15 = field15_;
    __isset.field15 = true;
    return field15;
  }
  const  ::example::thrift12::Struct17& get_field16() const&;
   ::example::thrift12::Struct17 get_field16() &&;

  template <typename T_Struct0_field16_struct_setter>
   ::example::thrift12::Struct17& set_field16(T_Struct0_field16_struct_setter&& field16_) {
    field16 = std::forward<T_Struct0_field16_struct_setter>(field16_);
    __isset.field16 = true;
    return field16;
  }
  const std::map<bool, double>& get_field17() const&;
  std::map<bool, double> get_field17() &&;

  template <typename T_Struct0_field17_struct_setter>
  std::map<bool, double>& set_field17(T_Struct0_field17_struct_setter&& field17_) {
    field17 = std::forward<T_Struct0_field17_struct_setter>(field17_);
    __isset.field17 = true;
    return field17;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(Struct0& a, Struct0& b);
extern template uint32_t Struct0::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Struct0::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Struct0::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Struct0::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Struct0::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Struct0::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Struct0::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Struct0::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // example::thrift1
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::example::thrift1::Struct0>::clear( ::example::thrift1::Struct0* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::example::thrift1::Struct0>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct0>::write(Protocol* proto,  ::example::thrift1::Struct0 const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct0>::read(Protocol* proto,  ::example::thrift1::Struct0* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct0>::serializedSize(Protocol const* proto,  ::example::thrift1::Struct0 const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct0>::serializedSizeZC(Protocol const* proto,  ::example::thrift1::Struct0 const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace example { namespace thrift1 {

class Struct1 : private apache::thrift::detail::st::ComparisonOperators<Struct1> {
 public:

  Struct1() {}
  // FragileConstructor for use in initialization lists only

  Struct1(apache::thrift::FragileConstructor) {}

  Struct1(Struct1&&) = default;

  Struct1(const Struct1&) = default;

  Struct1& operator=(Struct1&&) = default;

  Struct1& operator=(const Struct1&) = default;
  void __clear();

  virtual ~Struct1() {}

  bool operator==(const Struct1& /* rhs */) const;

  bool operator < (const Struct1& rhs) const {
    (void)rhs;
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(Struct1& a, Struct1& b);
extern template uint32_t Struct1::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Struct1::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Struct1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Struct1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Struct1::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Struct1::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Struct1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Struct1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // example::thrift1
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::example::thrift1::Struct1>::clear( ::example::thrift1::Struct1* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::example::thrift1::Struct1>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct1>::write(Protocol* proto,  ::example::thrift1::Struct1 const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct1>::read(Protocol* proto,  ::example::thrift1::Struct1* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct1>::serializedSize(Protocol const* proto,  ::example::thrift1::Struct1 const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct1>::serializedSizeZC(Protocol const* proto,  ::example::thrift1::Struct1 const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace example { namespace thrift1 {

class Struct2 : private apache::thrift::detail::st::ComparisonOperators<Struct2> {
 public:

  Struct2() :
      field4(0),
      field5(0) {}
  // FragileConstructor for use in initialization lists only

  Struct2(apache::thrift::FragileConstructor, std::vector<int8_t> field1__arg, std::map<int16_t, int16_t> field2__arg, std::string field3__arg, int32_t field4__arg, int16_t field5__arg) :
      field1(std::move(field1__arg)),
      field2(std::move(field2__arg)),
      field3(std::move(field3__arg)),
      field4(std::move(field4__arg)),
      field5(std::move(field5__arg)) {
    __isset.field1 = true;
    __isset.field2 = true;
    __isset.field3 = true;
    __isset.field4 = true;
    __isset.field5 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct2(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct2(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field1 = arg.move();
    __isset.field1 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct2(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct2(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field2 = arg.move();
    __isset.field2 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct2(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct2(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field3 = arg.move();
    __isset.field3 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct2(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct2(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field4 = arg.move();
    __isset.field4 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Struct2(::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Struct2(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field5 = arg.move();
    __isset.field5 = true;
  }

  Struct2(Struct2&&) = default;

  Struct2(const Struct2&) = default;

  Struct2& operator=(Struct2&&) = default;

  Struct2& operator=(const Struct2&) = default;
  void __clear();

  virtual ~Struct2() {}

  std::vector<int8_t> field1;
  std::map<int16_t, int16_t> field2;
  std::string field3;
  int32_t field4;
  int16_t field5;

  struct __isset {
    void __clear() {
      field1 = false;
      field2 = false;
      field3 = false;
      field4 = false;
      field5 = false;
    }

    bool field1 = false;
    bool field2 = false;
    bool field3 = false;
    bool field4 = false;
    bool field5 = false;
  } __isset;
  bool operator==(const Struct2& rhs) const;

  bool operator < (const Struct2& rhs) const {
    if (!(field1 == rhs.field1)) {
      return field1 < rhs.field1;
    }
    if (!(field2 == rhs.field2)) {
      return field2 < rhs.field2;
    }
    if (!(field3 == rhs.field3)) {
      return field3 < rhs.field3;
    }
    if (!(field4 == rhs.field4)) {
      return field4 < rhs.field4;
    }
    if (!(field5 == rhs.field5)) {
      return field5 < rhs.field5;
    }
    (void)rhs;
    return false;
  }
  const std::vector<int8_t>& get_field1() const&;
  std::vector<int8_t> get_field1() &&;

  template <typename T_Struct2_field1_struct_setter>
  std::vector<int8_t>& set_field1(T_Struct2_field1_struct_setter&& field1_) {
    field1 = std::forward<T_Struct2_field1_struct_setter>(field1_);
    __isset.field1 = true;
    return field1;
  }
  const std::map<int16_t, int16_t>& get_field2() const&;
  std::map<int16_t, int16_t> get_field2() &&;

  template <typename T_Struct2_field2_struct_setter>
  std::map<int16_t, int16_t>& set_field2(T_Struct2_field2_struct_setter&& field2_) {
    field2 = std::forward<T_Struct2_field2_struct_setter>(field2_);
    __isset.field2 = true;
    return field2;
  }

  const std::string& get_field3() const& {
    return field3;
  }

  std::string get_field3() && {
    return std::move(field3);
  }

  template <typename T_Struct2_field3_struct_setter>
  std::string& set_field3(T_Struct2_field3_struct_setter&& field3_) {
    field3 = std::forward<T_Struct2_field3_struct_setter>(field3_);
    __isset.field3 = true;
    return field3;
  }

  int32_t get_field4() const {
    return field4;
  }

  int32_t& set_field4(int32_t field4_) {
    field4 = field4_;
    __isset.field4 = true;
    return field4;
  }

  int16_t get_field5() const {
    return field5;
  }

  int16_t& set_field5(int16_t field5_) {
    field5 = field5_;
    __isset.field5 = true;
    return field5;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(Struct2& a, Struct2& b);
extern template uint32_t Struct2::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Struct2::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Struct2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Struct2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Struct2::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Struct2::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Struct2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Struct2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // example::thrift1
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::example::thrift1::Struct2>::clear( ::example::thrift1::Struct2* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::example::thrift1::Struct2>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct2>::write(Protocol* proto,  ::example::thrift1::Struct2 const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct2>::read(Protocol* proto,  ::example::thrift1::Struct2* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct2>::serializedSize(Protocol const* proto,  ::example::thrift1::Struct2 const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::example::thrift1::Struct2>::serializedSizeZC(Protocol const* proto,  ::example::thrift1::Struct2 const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace example { namespace thrift1 {

}} // example::thrift1