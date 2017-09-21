/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "file1_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace example { namespace thrift1 {

template <class Protocol_>
uint32_t Struct0::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->field1);
          this->__isset.field1 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->field2);
          this->__isset.field2 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_SET) {
          this->field3 = std::set<double>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readSetBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekSet(); ++_i_r) {
              double _elem;
              xfer += iprot->readDouble(_elem);
              this->field3.insert(std::move(_elem));
            }
          }
          else {
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              double _elem;
              xfer += iprot->readDouble(_elem);
              this->field3.insert(std::move(_elem));
            }
          }
          xfer += iprot->readSetEnd();
          this->__isset.field3 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 4:
      {
        if (_ftype == apache::thrift::protocol::T_FLOAT) {
          xfer += iprot->readFloat(this->field4);
          this->__isset.field4 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 5:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->field5);
          this->__isset.field5 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 6:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->field6);
          this->__isset.field6 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 7:
      {
        if (_ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->field7);
          this->__isset.field7 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 8:
      {
        if (_ftype == apache::thrift::protocol::T_SET) {
          this->field8 = std::set<std::string>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readSetBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekSet(); ++_i_r) {
              std::string _elem;
              xfer += iprot->readString(_elem);
              this->field8.insert(std::move(_elem));
            }
          }
          else {
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              std::string _elem;
              xfer += iprot->readString(_elem);
              this->field8.insert(std::move(_elem));
            }
          }
          xfer += iprot->readSetEnd();
          this->__isset.field8 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 9:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->field9);
          this->__isset.field9 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 10:
      {
        if (_ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->field10);
          this->__isset.field10 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 11:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->field11);
          this->__isset.field11 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 12:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct27>::read(iprot, &this->field12);
          this->__isset.field12 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 13:
      {
        if (_ftype == apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->field13);
          this->__isset.field13 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 14:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->field14);
          this->__isset.field14 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 15:
      {
        if (_ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->field15);
          this->__isset.field15 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 16:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct17>::read(iprot, &this->field16);
          this->__isset.field16 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 17:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          this->field17 = std::map<bool, double>();
          uint32_t _size_rk_rv;
          apache::thrift::protocol::TType _ktype_rk_rv;
          apache::thrift::protocol::TType _vtype_rk_rv;
          xfer += iprot->readMapBegin(_ktype_rk_rv, _vtype_rk_rv, _size_rk_rv);
          uint32_t _i_rk_rv;
          if (_size_rk_rv == std::numeric_limits<uint32_t>::max()) {
            for (_i_rk_rv = 0; iprot->peekMap(); ++_i_rk_rv) {
              auto const _key_index_rk_rv = [&] {
                bool _key;
                xfer += iprot->readBool(_key);
                return _key;
              }
              ();
              double& _val = this->field17[std::move(_key_index_rk_rv)];
              xfer += iprot->readDouble(_val);
            }
          }
          else {
            auto const _kreader_rk_rv = [&xfer, &iprot](auto& _key) {
              xfer += iprot->readBool(_key);
            }
            ;
            auto const _vreader_rk_rv = [&xfer, &iprot](auto& _val) {
              xfer += iprot->readDouble(_val);
            }
            ;
            ::apache::thrift::deserialize_known_length_map(this->field17, _size_rk_rv, _kreader_rk_rv, _vreader_rk_rv);
          }
          xfer += iprot->readMapEnd();
          this->__isset.field17 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Struct0::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Struct0");
  xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeBinary(this->field1);
  xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_BYTE, 2);
  xfer += prot_->serializedSizeByte(this->field2);
  xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_SET, 3);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_DOUBLE, this->field3.size());
  for (auto _iter_r = this->field3.begin(); _iter_r != this->field3.end(); ++_iter_r) {
    xfer += prot_->serializedSizeDouble((*_iter_r));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_FLOAT, 4);
  xfer += prot_->serializedSizeFloat(this->field4);
  xfer += prot_->serializedFieldSize("field5", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->serializedSizeString(this->field5);
  xfer += prot_->serializedFieldSize("field6", apache::thrift::protocol::T_I32, 6);
  xfer += prot_->serializedSizeI32(this->field6);
  xfer += prot_->serializedFieldSize("field7", apache::thrift::protocol::T_I16, 7);
  xfer += prot_->serializedSizeI16(this->field7);
  xfer += prot_->serializedFieldSize("field8", apache::thrift::protocol::T_SET, 8);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRING, this->field8.size());
  for (auto _iter_r = this->field8.begin(); _iter_r != this->field8.end(); ++_iter_r) {
    xfer += prot_->serializedSizeString((*_iter_r));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("field9", apache::thrift::protocol::T_STRING, 9);
  xfer += prot_->serializedSizeString(this->field9);
  xfer += prot_->serializedFieldSize("field10", apache::thrift::protocol::T_BOOL, 10);
  xfer += prot_->serializedSizeBool(this->field10);
  xfer += prot_->serializedFieldSize("field11", apache::thrift::protocol::T_STRING, 11);
  xfer += prot_->serializedSizeString(this->field11);
  xfer += prot_->serializedFieldSize("field12", apache::thrift::protocol::T_STRUCT, 12);
  xfer += ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct27>::serializedSize(prot_, &this->field12);
  xfer += prot_->serializedFieldSize("field13", apache::thrift::protocol::T_BYTE, 13);
  xfer += prot_->serializedSizeByte(this->field13);
  xfer += prot_->serializedFieldSize("field14", apache::thrift::protocol::T_I32, 14);
  xfer += prot_->serializedSizeI32(this->field14);
  xfer += prot_->serializedFieldSize("field15", apache::thrift::protocol::T_I64, 15);
  xfer += prot_->serializedSizeI64(this->field15);
  xfer += prot_->serializedFieldSize("field16", apache::thrift::protocol::T_STRUCT, 16);
  xfer += ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct17>::serializedSize(prot_, &this->field16);
  xfer += prot_->serializedFieldSize("field17", apache::thrift::protocol::T_MAP, 17);
  xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_BOOL, apache::thrift::protocol::T_DOUBLE, this->field17.size());
  for (auto _iter_rk_rv = this->field17.begin(); _iter_rk_rv != this->field17.end(); ++_iter_rk_rv) {
    xfer += prot_->serializedSizeBool(_iter_rk_rv->first);
    xfer += prot_->serializedSizeDouble(_iter_rk_rv->second);
  }
  xfer += prot_->serializedSizeMapEnd();
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Struct0::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Struct0");
  xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeZCBinary(this->field1);
  xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_BYTE, 2);
  xfer += prot_->serializedSizeByte(this->field2);
  xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_SET, 3);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_DOUBLE, this->field3.size());
  for (auto _iter_r = this->field3.begin(); _iter_r != this->field3.end(); ++_iter_r) {
    xfer += prot_->serializedSizeDouble((*_iter_r));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_FLOAT, 4);
  xfer += prot_->serializedSizeFloat(this->field4);
  xfer += prot_->serializedFieldSize("field5", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->serializedSizeString(this->field5);
  xfer += prot_->serializedFieldSize("field6", apache::thrift::protocol::T_I32, 6);
  xfer += prot_->serializedSizeI32(this->field6);
  xfer += prot_->serializedFieldSize("field7", apache::thrift::protocol::T_I16, 7);
  xfer += prot_->serializedSizeI16(this->field7);
  xfer += prot_->serializedFieldSize("field8", apache::thrift::protocol::T_SET, 8);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRING, this->field8.size());
  for (auto _iter_r = this->field8.begin(); _iter_r != this->field8.end(); ++_iter_r) {
    xfer += prot_->serializedSizeString((*_iter_r));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("field9", apache::thrift::protocol::T_STRING, 9);
  xfer += prot_->serializedSizeString(this->field9);
  xfer += prot_->serializedFieldSize("field10", apache::thrift::protocol::T_BOOL, 10);
  xfer += prot_->serializedSizeBool(this->field10);
  xfer += prot_->serializedFieldSize("field11", apache::thrift::protocol::T_STRING, 11);
  xfer += prot_->serializedSizeString(this->field11);
  xfer += prot_->serializedFieldSize("field12", apache::thrift::protocol::T_STRUCT, 12);
  xfer += ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct27>::serializedSizeZC(prot_, &this->field12);
  xfer += prot_->serializedFieldSize("field13", apache::thrift::protocol::T_BYTE, 13);
  xfer += prot_->serializedSizeByte(this->field13);
  xfer += prot_->serializedFieldSize("field14", apache::thrift::protocol::T_I32, 14);
  xfer += prot_->serializedSizeI32(this->field14);
  xfer += prot_->serializedFieldSize("field15", apache::thrift::protocol::T_I64, 15);
  xfer += prot_->serializedSizeI64(this->field15);
  xfer += prot_->serializedFieldSize("field16", apache::thrift::protocol::T_STRUCT, 16);
  xfer += ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct17>::serializedSizeZC(prot_, &this->field16);
  xfer += prot_->serializedFieldSize("field17", apache::thrift::protocol::T_MAP, 17);
  xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_BOOL, apache::thrift::protocol::T_DOUBLE, this->field17.size());
  for (auto _iter_rk_rv = this->field17.begin(); _iter_rk_rv != this->field17.end(); ++_iter_rk_rv) {
    xfer += prot_->serializedSizeBool(_iter_rk_rv->first);
    xfer += prot_->serializedSizeDouble(_iter_rk_rv->second);
  }
  xfer += prot_->serializedSizeMapEnd();
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Struct0::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Struct0");
  xfer += prot_->writeFieldBegin("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeBinary(this->field1);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field2", apache::thrift::protocol::T_BYTE, 2);
  xfer += prot_->writeByte(this->field2);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field3", apache::thrift::protocol::T_SET, 3);
  xfer += prot_->writeSetBegin(apache::thrift::protocol::T_DOUBLE, this->field3.size());
  for (auto _iter_r = this->field3.begin(); _iter_r != this->field3.end(); ++_iter_r) {
    xfer += prot_->writeDouble((*_iter_r));
  }
  xfer += prot_->writeSetEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field4", apache::thrift::protocol::T_FLOAT, 4);
  xfer += prot_->writeFloat(this->field4);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field5", apache::thrift::protocol::T_STRING, 5);
  xfer += prot_->writeString(this->field5);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field6", apache::thrift::protocol::T_I32, 6);
  xfer += prot_->writeI32(this->field6);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field7", apache::thrift::protocol::T_I16, 7);
  xfer += prot_->writeI16(this->field7);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field8", apache::thrift::protocol::T_SET, 8);
  xfer += prot_->writeSetBegin(apache::thrift::protocol::T_STRING, this->field8.size());
  for (auto _iter_r = this->field8.begin(); _iter_r != this->field8.end(); ++_iter_r) {
    xfer += prot_->writeString((*_iter_r));
  }
  xfer += prot_->writeSetEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field9", apache::thrift::protocol::T_STRING, 9);
  xfer += prot_->writeString(this->field9);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field10", apache::thrift::protocol::T_BOOL, 10);
  xfer += prot_->writeBool(this->field10);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field11", apache::thrift::protocol::T_STRING, 11);
  xfer += prot_->writeString(this->field11);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field12", apache::thrift::protocol::T_STRUCT, 12);
  xfer += ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct27>::write(prot_, &this->field12);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field13", apache::thrift::protocol::T_BYTE, 13);
  xfer += prot_->writeByte(this->field13);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field14", apache::thrift::protocol::T_I32, 14);
  xfer += prot_->writeI32(this->field14);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field15", apache::thrift::protocol::T_I64, 15);
  xfer += prot_->writeI64(this->field15);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field16", apache::thrift::protocol::T_STRUCT, 16);
  xfer += ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct17>::write(prot_, &this->field16);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field17", apache::thrift::protocol::T_MAP, 17);
  xfer += prot_->writeMapBegin(apache::thrift::protocol::T_BOOL, apache::thrift::protocol::T_DOUBLE, this->field17.size());
  for (auto _iter_rk_rv = this->field17.begin(); _iter_rk_rv != this->field17.end(); ++_iter_rk_rv) {
    xfer += prot_->writeBool(_iter_rk_rv->first);
    xfer += prot_->writeDouble(_iter_rk_rv->second);
  }
  xfer += prot_->writeMapEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // example::thrift1
namespace apache { namespace thrift {

}} // apache::thrift
namespace example { namespace thrift1 {

template <class Protocol_>
uint32_t Struct1::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Struct1::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Struct1");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Struct1::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Struct1");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Struct1::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Struct1");
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // example::thrift1
namespace apache { namespace thrift {

}} // apache::thrift
namespace example { namespace thrift1 {

template <class Protocol_>
uint32_t Struct2::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->field1 = std::vector<int8_t>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readListBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekList(); ++_i_r) {
              this->field1.resize(_i_r + 1);
              xfer += iprot->readByte(this->field1[_i_r]);
            }
          }
          else {
            this->field1.resize(_size_r);
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              xfer += iprot->readByte(this->field1[_i_r]);
            }
          }
          xfer += iprot->readListEnd();
          this->__isset.field1 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          this->field2 = std::map<int16_t, int16_t>();
          uint32_t _size_rk_rv;
          apache::thrift::protocol::TType _ktype_rk_rv;
          apache::thrift::protocol::TType _vtype_rk_rv;
          xfer += iprot->readMapBegin(_ktype_rk_rv, _vtype_rk_rv, _size_rk_rv);
          uint32_t _i_rk_rv;
          if (_size_rk_rv == std::numeric_limits<uint32_t>::max()) {
            for (_i_rk_rv = 0; iprot->peekMap(); ++_i_rk_rv) {
              auto const _key_index_rk_rv = [&] {
                int16_t _key;
                xfer += iprot->readI16(_key);
                return _key;
              }
              ();
              int16_t& _val = this->field2[std::move(_key_index_rk_rv)];
              xfer += iprot->readI16(_val);
            }
          }
          else {
            auto const _kreader_rk_rv = [&xfer, &iprot](auto& _key) {
              xfer += iprot->readI16(_key);
            }
            ;
            auto const _vreader_rk_rv = [&xfer, &iprot](auto& _val) {
              xfer += iprot->readI16(_val);
            }
            ;
            ::apache::thrift::deserialize_known_length_map(this->field2, _size_rk_rv, _kreader_rk_rv, _vreader_rk_rv);
          }
          xfer += iprot->readMapEnd();
          this->__isset.field2 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->field3);
          this->__isset.field3 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 4:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->field4);
          this->__isset.field4 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 5:
      {
        if (_ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->field5);
          this->__isset.field5 = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Struct2::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Struct2");
  xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_LIST, 1);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_BYTE, this->field1.size());
  for (auto _iter_r = this->field1.begin(); _iter_r != this->field1.end(); ++_iter_r) {
    xfer += prot_->serializedSizeByte((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_MAP, 2);
  xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_I16, this->field2.size());
  for (auto _iter_rk_rv = this->field2.begin(); _iter_rk_rv != this->field2.end(); ++_iter_rk_rv) {
    xfer += prot_->serializedSizeI16(_iter_rk_rv->first);
    xfer += prot_->serializedSizeI16(_iter_rk_rv->second);
  }
  xfer += prot_->serializedSizeMapEnd();
  xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->serializedSizeString(this->field3);
  xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->serializedSizeI32(this->field4);
  xfer += prot_->serializedFieldSize("field5", apache::thrift::protocol::T_I16, 5);
  xfer += prot_->serializedSizeI16(this->field5);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Struct2::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Struct2");
  xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_LIST, 1);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_BYTE, this->field1.size());
  for (auto _iter_r = this->field1.begin(); _iter_r != this->field1.end(); ++_iter_r) {
    xfer += prot_->serializedSizeByte((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_MAP, 2);
  xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_I16, this->field2.size());
  for (auto _iter_rk_rv = this->field2.begin(); _iter_rk_rv != this->field2.end(); ++_iter_rk_rv) {
    xfer += prot_->serializedSizeI16(_iter_rk_rv->first);
    xfer += prot_->serializedSizeI16(_iter_rk_rv->second);
  }
  xfer += prot_->serializedSizeMapEnd();
  xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->serializedSizeString(this->field3);
  xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->serializedSizeI32(this->field4);
  xfer += prot_->serializedFieldSize("field5", apache::thrift::protocol::T_I16, 5);
  xfer += prot_->serializedSizeI16(this->field5);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Struct2::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Struct2");
  xfer += prot_->writeFieldBegin("field1", apache::thrift::protocol::T_LIST, 1);
  xfer += prot_->writeListBegin(apache::thrift::protocol::T_BYTE, this->field1.size());
  for (auto _iter_r = this->field1.begin(); _iter_r != this->field1.end(); ++_iter_r) {
    xfer += prot_->writeByte((*_iter_r));
  }
  xfer += prot_->writeListEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field2", apache::thrift::protocol::T_MAP, 2);
  xfer += prot_->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_I16, this->field2.size());
  for (auto _iter_rk_rv = this->field2.begin(); _iter_rk_rv != this->field2.end(); ++_iter_rk_rv) {
    xfer += prot_->writeI16(_iter_rk_rv->first);
    xfer += prot_->writeI16(_iter_rk_rv->second);
  }
  xfer += prot_->writeMapEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field3", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->writeString(this->field3);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field4", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->writeI32(this->field4);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("field5", apache::thrift::protocol::T_I16, 5);
  xfer += prot_->writeI16(this->field5);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // example::thrift1
namespace apache { namespace thrift {

}} // apache::thrift
namespace example { namespace thrift1 {

}} // example::thrift1