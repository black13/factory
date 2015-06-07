// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: factory.proto

#ifndef PROTOBUF_factory_2eproto__INCLUDED
#define PROTOBUF_factory_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace factory {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_factory_2eproto();
void protobuf_AssignDesc_factory_2eproto();
void protobuf_ShutdownFile_factory_2eproto();

class child1;
class child2;
class child3;
class doc;

// ===================================================================

class child1 : public ::google::protobuf::Message {
 public:
  child1();
  virtual ~child1();

  child1(const child1& from);

  inline child1& operator=(const child1& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const child1& default_instance();

  void Swap(child1* other);

  // implements Message ----------------------------------------------

  child1* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const child1& from);
  void MergeFrom(const child1& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:factory.child1)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  friend void  protobuf_AddDesc_factory_2eproto();
  friend void protobuf_AssignDesc_factory_2eproto();
  friend void protobuf_ShutdownFile_factory_2eproto();

  void InitAsDefaultInstance();
  static child1* default_instance_;
};
// -------------------------------------------------------------------

class child2 : public ::google::protobuf::Message {
 public:
  child2();
  virtual ~child2();

  child2(const child2& from);

  inline child2& operator=(const child2& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const child2& default_instance();

  void Swap(child2* other);

  // implements Message ----------------------------------------------

  child2* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const child2& from);
  void MergeFrom(const child2& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:factory.child2)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  friend void  protobuf_AddDesc_factory_2eproto();
  friend void protobuf_AssignDesc_factory_2eproto();
  friend void protobuf_ShutdownFile_factory_2eproto();

  void InitAsDefaultInstance();
  static child2* default_instance_;
};
// -------------------------------------------------------------------

class child3 : public ::google::protobuf::Message {
 public:
  child3();
  virtual ~child3();

  child3(const child3& from);

  inline child3& operator=(const child3& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const child3& default_instance();

  void Swap(child3* other);

  // implements Message ----------------------------------------------

  child3* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const child3& from);
  void MergeFrom(const child3& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:factory.child3)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  friend void  protobuf_AddDesc_factory_2eproto();
  friend void protobuf_AssignDesc_factory_2eproto();
  friend void protobuf_ShutdownFile_factory_2eproto();

  void InitAsDefaultInstance();
  static child3* default_instance_;
};
// -------------------------------------------------------------------

class doc : public ::google::protobuf::Message {
 public:
  doc();
  virtual ~doc();

  doc(const doc& from);

  inline doc& operator=(const doc& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const doc& default_instance();

  void Swap(doc* other);

  // implements Message ----------------------------------------------

  doc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const doc& from);
  void MergeFrom(const doc& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .factory.child1 children1 = 1;
  inline int children1_size() const;
  inline void clear_children1();
  static const int kChildren1FieldNumber = 1;
  inline const ::factory::child1& children1(int index) const;
  inline ::factory::child1* mutable_children1(int index);
  inline ::factory::child1* add_children1();
  inline const ::google::protobuf::RepeatedPtrField< ::factory::child1 >&
      children1() const;
  inline ::google::protobuf::RepeatedPtrField< ::factory::child1 >*
      mutable_children1();

  // repeated .factory.child2 children2 = 2;
  inline int children2_size() const;
  inline void clear_children2();
  static const int kChildren2FieldNumber = 2;
  inline const ::factory::child2& children2(int index) const;
  inline ::factory::child2* mutable_children2(int index);
  inline ::factory::child2* add_children2();
  inline const ::google::protobuf::RepeatedPtrField< ::factory::child2 >&
      children2() const;
  inline ::google::protobuf::RepeatedPtrField< ::factory::child2 >*
      mutable_children2();

  // repeated .factory.child3 children3 = 3;
  inline int children3_size() const;
  inline void clear_children3();
  static const int kChildren3FieldNumber = 3;
  inline const ::factory::child3& children3(int index) const;
  inline ::factory::child3* mutable_children3(int index);
  inline ::factory::child3* add_children3();
  inline const ::google::protobuf::RepeatedPtrField< ::factory::child3 >&
      children3() const;
  inline ::google::protobuf::RepeatedPtrField< ::factory::child3 >*
      mutable_children3();

  // @@protoc_insertion_point(class_scope:factory.doc)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::factory::child1 > children1_;
  ::google::protobuf::RepeatedPtrField< ::factory::child2 > children2_;
  ::google::protobuf::RepeatedPtrField< ::factory::child3 > children3_;
  friend void  protobuf_AddDesc_factory_2eproto();
  friend void protobuf_AssignDesc_factory_2eproto();
  friend void protobuf_ShutdownFile_factory_2eproto();

  void InitAsDefaultInstance();
  static doc* default_instance_;
};
// ===================================================================


// ===================================================================

// child1

// required string name = 1;
inline bool child1::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void child1::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void child1::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void child1::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& child1::name() const {
  // @@protoc_insertion_point(field_get:factory.child1.name)
  return *name_;
}
inline void child1::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:factory.child1.name)
}
inline void child1::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:factory.child1.name)
}
inline void child1::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:factory.child1.name)
}
inline ::std::string* child1::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:factory.child1.name)
  return name_;
}
inline ::std::string* child1::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void child1::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:factory.child1.name)
}

// -------------------------------------------------------------------

// child2

// required string name = 1;
inline bool child2::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void child2::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void child2::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void child2::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& child2::name() const {
  // @@protoc_insertion_point(field_get:factory.child2.name)
  return *name_;
}
inline void child2::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:factory.child2.name)
}
inline void child2::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:factory.child2.name)
}
inline void child2::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:factory.child2.name)
}
inline ::std::string* child2::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:factory.child2.name)
  return name_;
}
inline ::std::string* child2::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void child2::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:factory.child2.name)
}

// -------------------------------------------------------------------

// child3

// required string name = 1;
inline bool child3::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void child3::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void child3::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void child3::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& child3::name() const {
  // @@protoc_insertion_point(field_get:factory.child3.name)
  return *name_;
}
inline void child3::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:factory.child3.name)
}
inline void child3::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:factory.child3.name)
}
inline void child3::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:factory.child3.name)
}
inline ::std::string* child3::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:factory.child3.name)
  return name_;
}
inline ::std::string* child3::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void child3::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:factory.child3.name)
}

// -------------------------------------------------------------------

// doc

// repeated .factory.child1 children1 = 1;
inline int doc::children1_size() const {
  return children1_.size();
}
inline void doc::clear_children1() {
  children1_.Clear();
}
inline const ::factory::child1& doc::children1(int index) const {
  // @@protoc_insertion_point(field_get:factory.doc.children1)
  return children1_.Get(index);
}
inline ::factory::child1* doc::mutable_children1(int index) {
  // @@protoc_insertion_point(field_mutable:factory.doc.children1)
  return children1_.Mutable(index);
}
inline ::factory::child1* doc::add_children1() {
  // @@protoc_insertion_point(field_add:factory.doc.children1)
  return children1_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::factory::child1 >&
doc::children1() const {
  // @@protoc_insertion_point(field_list:factory.doc.children1)
  return children1_;
}
inline ::google::protobuf::RepeatedPtrField< ::factory::child1 >*
doc::mutable_children1() {
  // @@protoc_insertion_point(field_mutable_list:factory.doc.children1)
  return &children1_;
}

// repeated .factory.child2 children2 = 2;
inline int doc::children2_size() const {
  return children2_.size();
}
inline void doc::clear_children2() {
  children2_.Clear();
}
inline const ::factory::child2& doc::children2(int index) const {
  // @@protoc_insertion_point(field_get:factory.doc.children2)
  return children2_.Get(index);
}
inline ::factory::child2* doc::mutable_children2(int index) {
  // @@protoc_insertion_point(field_mutable:factory.doc.children2)
  return children2_.Mutable(index);
}
inline ::factory::child2* doc::add_children2() {
  // @@protoc_insertion_point(field_add:factory.doc.children2)
  return children2_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::factory::child2 >&
doc::children2() const {
  // @@protoc_insertion_point(field_list:factory.doc.children2)
  return children2_;
}
inline ::google::protobuf::RepeatedPtrField< ::factory::child2 >*
doc::mutable_children2() {
  // @@protoc_insertion_point(field_mutable_list:factory.doc.children2)
  return &children2_;
}

// repeated .factory.child3 children3 = 3;
inline int doc::children3_size() const {
  return children3_.size();
}
inline void doc::clear_children3() {
  children3_.Clear();
}
inline const ::factory::child3& doc::children3(int index) const {
  // @@protoc_insertion_point(field_get:factory.doc.children3)
  return children3_.Get(index);
}
inline ::factory::child3* doc::mutable_children3(int index) {
  // @@protoc_insertion_point(field_mutable:factory.doc.children3)
  return children3_.Mutable(index);
}
inline ::factory::child3* doc::add_children3() {
  // @@protoc_insertion_point(field_add:factory.doc.children3)
  return children3_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::factory::child3 >&
doc::children3() const {
  // @@protoc_insertion_point(field_list:factory.doc.children3)
  return children3_;
}
inline ::google::protobuf::RepeatedPtrField< ::factory::child3 >*
doc::mutable_children3() {
  // @@protoc_insertion_point(field_mutable_list:factory.doc.children3)
  return &children3_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace factory

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_factory_2eproto__INCLUDED
