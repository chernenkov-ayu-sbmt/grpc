/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/type/v3/range.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_TYPE_V3_RANGE_PROTO_UPB_H_
#define XDS_TYPE_V3_RANGE_PROTO_UPB_H_

#include "upb/collections/array_internal.h"
#include "upb/collections/map_gencode_util.h"
#include "upb/message/accessors.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "upb/wire/decode.h"
#include "upb/wire/decode_fast.h"
#include "upb/wire/encode.h"

// Must be last. 
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct xds_type_v3_Int64Range xds_type_v3_Int64Range;
typedef struct xds_type_v3_Int32Range xds_type_v3_Int32Range;
typedef struct xds_type_v3_DoubleRange xds_type_v3_DoubleRange;
extern const upb_MiniTable xds_type_v3_Int64Range_msg_init;
extern const upb_MiniTable xds_type_v3_Int32Range_msg_init;
extern const upb_MiniTable xds_type_v3_DoubleRange_msg_init;



/* xds.type.v3.Int64Range */

UPB_INLINE xds_type_v3_Int64Range* xds_type_v3_Int64Range_new(upb_Arena* arena) {
  return (xds_type_v3_Int64Range*)_upb_Message_New(&xds_type_v3_Int64Range_msg_init, arena);
}
UPB_INLINE xds_type_v3_Int64Range* xds_type_v3_Int64Range_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_type_v3_Int64Range* ret = xds_type_v3_Int64Range_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_v3_Int64Range_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_type_v3_Int64Range* xds_type_v3_Int64Range_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_type_v3_Int64Range* ret = xds_type_v3_Int64Range_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_v3_Int64Range_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_type_v3_Int64Range_serialize(const xds_type_v3_Int64Range* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_v3_Int64Range_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_type_v3_Int64Range_serialize_ex(const xds_type_v3_Int64Range* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_v3_Int64Range_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void xds_type_v3_Int64Range_clear_start(xds_type_v3_Int64Range* msg) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 3, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE int64_t xds_type_v3_Int64Range_start(const xds_type_v3_Int64Range* msg) {
  int64_t default_val = (int64_t)0ll;
  int64_t ret;
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 3, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void xds_type_v3_Int64Range_clear_end(xds_type_v3_Int64Range* msg) {
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 3, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE int64_t xds_type_v3_Int64Range_end(const xds_type_v3_Int64Range* msg) {
  int64_t default_val = (int64_t)0ll;
  int64_t ret;
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 3, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}

UPB_INLINE void xds_type_v3_Int64Range_set_start(xds_type_v3_Int64Range *msg, int64_t value) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 3, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void xds_type_v3_Int64Range_set_end(xds_type_v3_Int64Range *msg, int64_t value) {
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 3, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}

/* xds.type.v3.Int32Range */

UPB_INLINE xds_type_v3_Int32Range* xds_type_v3_Int32Range_new(upb_Arena* arena) {
  return (xds_type_v3_Int32Range*)_upb_Message_New(&xds_type_v3_Int32Range_msg_init, arena);
}
UPB_INLINE xds_type_v3_Int32Range* xds_type_v3_Int32Range_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_type_v3_Int32Range* ret = xds_type_v3_Int32Range_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_v3_Int32Range_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_type_v3_Int32Range* xds_type_v3_Int32Range_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_type_v3_Int32Range* ret = xds_type_v3_Int32Range_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_v3_Int32Range_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_type_v3_Int32Range_serialize(const xds_type_v3_Int32Range* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_v3_Int32Range_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_type_v3_Int32Range_serialize_ex(const xds_type_v3_Int32Range* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_v3_Int32Range_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void xds_type_v3_Int32Range_clear_start(xds_type_v3_Int32Range* msg) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE int32_t xds_type_v3_Int32Range_start(const xds_type_v3_Int32Range* msg) {
  int32_t default_val = (int32_t)0;
  int32_t ret;
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void xds_type_v3_Int32Range_clear_end(xds_type_v3_Int32Range* msg) {
  const upb_MiniTableField field = {2, 4, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE int32_t xds_type_v3_Int32Range_end(const xds_type_v3_Int32Range* msg) {
  int32_t default_val = (int32_t)0;
  int32_t ret;
  const upb_MiniTableField field = {2, 4, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}

UPB_INLINE void xds_type_v3_Int32Range_set_start(xds_type_v3_Int32Range *msg, int32_t value) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void xds_type_v3_Int32Range_set_end(xds_type_v3_Int32Range *msg, int32_t value) {
  const upb_MiniTableField field = {2, 4, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}

/* xds.type.v3.DoubleRange */

UPB_INLINE xds_type_v3_DoubleRange* xds_type_v3_DoubleRange_new(upb_Arena* arena) {
  return (xds_type_v3_DoubleRange*)_upb_Message_New(&xds_type_v3_DoubleRange_msg_init, arena);
}
UPB_INLINE xds_type_v3_DoubleRange* xds_type_v3_DoubleRange_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_type_v3_DoubleRange* ret = xds_type_v3_DoubleRange_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_v3_DoubleRange_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_type_v3_DoubleRange* xds_type_v3_DoubleRange_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_type_v3_DoubleRange* ret = xds_type_v3_DoubleRange_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_v3_DoubleRange_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_type_v3_DoubleRange_serialize(const xds_type_v3_DoubleRange* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_v3_DoubleRange_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_type_v3_DoubleRange_serialize_ex(const xds_type_v3_DoubleRange* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_v3_DoubleRange_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void xds_type_v3_DoubleRange_clear_start(xds_type_v3_DoubleRange* msg) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 1, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE double xds_type_v3_DoubleRange_start(const xds_type_v3_DoubleRange* msg) {
  double default_val = 0;
  double ret;
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 1, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void xds_type_v3_DoubleRange_clear_end(xds_type_v3_DoubleRange* msg) {
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 1, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE double xds_type_v3_DoubleRange_end(const xds_type_v3_DoubleRange* msg) {
  double default_val = 0;
  double ret;
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 1, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}

UPB_INLINE void xds_type_v3_DoubleRange_set_start(xds_type_v3_DoubleRange *msg, double value) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 1, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void xds_type_v3_DoubleRange_set_end(xds_type_v3_DoubleRange *msg, double value) {
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 1, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}

extern const upb_MiniTableFile xds_type_v3_range_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* XDS_TYPE_V3_RANGE_PROTO_UPB_H_ */