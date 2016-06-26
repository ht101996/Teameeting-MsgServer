// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: entity_msg_type.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30001
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum EMsgType

/// the msg content type
typedef GPB_ENUM(EMsgType) {
  /// Value used if any message's field encounters a value that is not defined
  /// by this enum. The message will also have C functions to get/set the rawValue
  /// of the field.
  EMsgType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  EMsgType_Ttxt = 0,
  EMsgType_Tfil = 1,
  EMsgType_Tpic = 2,
  EMsgType_Taud = 3,
  EMsgType_Tvid = 4,
};

GPBEnumDescriptor *EMsgType_EnumDescriptor(void);

/// Checks to see if the given value is defined by the enum or was not known at
/// the time this source was generated.
BOOL EMsgType_IsValidValue(int32_t value);

#pragma mark - Enum EMsgTag

/// the msg tag
typedef GPB_ENUM(EMsgTag) {
  /// Value used if any message's field encounters a value that is not defined
  /// by this enum. The message will also have C functions to get/set the rawValue
  /// of the field.
  EMsgTag_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  EMsgTag_Tenter = 0,
  EMsgTag_Tleave = 1,
  EMsgTag_Tchat = 2,
  EMsgTag_Tnotify = 3,

  /// server sync seqn
  EMsgTag_Tssseqn = 4,

  /// server sync data
  EMsgTag_Tssdata = 5,
};

GPBEnumDescriptor *EMsgTag_EnumDescriptor(void);

/// Checks to see if the given value is defined by the enum or was not known at
/// the time this source was generated.
BOOL EMsgTag_IsValidValue(int32_t value);

#pragma mark - Enum EMsgHead

/// the msg get tag
typedef GPB_ENUM(EMsgHead) {
  /// Value used if any message's field encounters a value that is not defined
  /// by this enum. The message will also have C functions to get/set the rawValue
  /// of the field.
  EMsgHead_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  EMsgHead_Hsnd = 0,
  EMsgHead_Hget = 1,
};

GPBEnumDescriptor *EMsgHead_EnumDescriptor(void);

/// Checks to see if the given value is defined by the enum or was not known at
/// the time this source was generated.
BOOL EMsgHead_IsValidValue(int32_t value);

#pragma mark - EntityMsgTypeRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface EntityMsgTypeRoot : GPBRootObject
@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
