/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkBufferImageCopy.h"

Nan::Persistent<v8::FunctionTemplate> _VkBufferImageCopy::constructor;

_VkBufferImageCopy::_VkBufferImageCopy() {
  
}

_VkBufferImageCopy::~_VkBufferImageCopy() {
  //printf("VkBufferImageCopy deconstructed!!\n");
}

void _VkBufferImageCopy::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBufferImageCopy::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBufferImageCopy").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("bufferOffset").ToLocalChecked(), GetbufferOffset, SetbufferOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("bufferRowLength").ToLocalChecked(), GetbufferRowLength, SetbufferRowLength, ctor);
  SetPrototypeAccessor(proto, Nan::New("bufferImageHeight").ToLocalChecked(), GetbufferImageHeight, SetbufferImageHeight, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageSubresource").ToLocalChecked(), GetimageSubresource, SetimageSubresource, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageOffset").ToLocalChecked(), GetimageOffset, SetimageOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageExtent").ToLocalChecked(), GetimageExtent, SetimageExtent, ctor);
  Nan::Set(target, Nan::New("VkBufferImageCopy").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBufferImageCopy::New) {
  if (info.IsConstructCall()) {
    _VkBufferImageCopy* self = new _VkBufferImageCopy();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("bufferOffset").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("bufferRowLength").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("bufferImageHeight").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("imageSubresource").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("imageOffset").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("imageExtent").ToLocalChecked();
      if (obj->Has(sAccess0)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess0);
        info.This()->Set(sAccess0, arg);
      }
      if (obj->Has(sAccess1)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess1);
        info.This()->Set(sAccess1, arg);
      }
      if (obj->Has(sAccess2)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess2);
        info.This()->Set(sAccess2, arg);
      }
      if (obj->Has(sAccess3)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess3);
        info.This()->Set(sAccess3, arg);
      }
      if (obj->Has(sAccess4)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess4);
        info.This()->Set(sAccess4, arg);
      }
      if (obj->Has(sAccess5)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess5);
        info.This()->Set(sAccess5, arg);
      }
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBufferImageCopy constructor cannot be invoked without 'new'");
  }
};

// bufferOffset
NAN_GETTER(_VkBufferImageCopy::GetbufferOffset) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.bufferOffset));
}NAN_SETTER(_VkBufferImageCopy::SetbufferOffset) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  self->instance.bufferOffset = static_cast<uint64_t>(value->NumberValue());
}// bufferRowLength
NAN_GETTER(_VkBufferImageCopy::GetbufferRowLength) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.bufferRowLength));
}NAN_SETTER(_VkBufferImageCopy::SetbufferRowLength) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  self->instance.bufferRowLength = static_cast<uint32_t>(value->NumberValue());
}// bufferImageHeight
NAN_GETTER(_VkBufferImageCopy::GetbufferImageHeight) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.bufferImageHeight));
}NAN_SETTER(_VkBufferImageCopy::SetbufferImageHeight) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  self->instance.bufferImageHeight = static_cast<uint32_t>(value->NumberValue());
}// imageSubresource
NAN_GETTER(_VkBufferImageCopy::GetimageSubresource) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  if (self->imageSubresource.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->imageSubresource);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBufferImageCopy::SetimageSubresource) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->imageSubresource = obj;
  } else {
    //self->imageSubresource = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkImageSubresourceLayers* obj = Nan::ObjectWrap::Unwrap<_VkImageSubresourceLayers>(value->ToObject());
    self->instance.imageSubresource = obj->instance;
  } else {
    memset(&self->instance.imageSubresource, 0, sizeof(VkImageSubresourceLayers));
  }
}// imageOffset
NAN_GETTER(_VkBufferImageCopy::GetimageOffset) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  if (self->imageOffset.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->imageOffset);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBufferImageCopy::SetimageOffset) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->imageOffset = obj;
  } else {
    //self->imageOffset = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkOffset3D* obj = Nan::ObjectWrap::Unwrap<_VkOffset3D>(value->ToObject());
    self->instance.imageOffset = obj->instance;
  } else {
    memset(&self->instance.imageOffset, 0, sizeof(VkOffset3D));
  }
}// imageExtent
NAN_GETTER(_VkBufferImageCopy::GetimageExtent) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  if (self->imageExtent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->imageExtent);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBufferImageCopy::SetimageExtent) {
  _VkBufferImageCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferImageCopy>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->imageExtent = obj;
  } else {
    //self->imageExtent = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkExtent3D* obj = Nan::ObjectWrap::Unwrap<_VkExtent3D>(value->ToObject());
    self->instance.imageExtent = obj->instance;
  } else {
    memset(&self->instance.imageExtent, 0, sizeof(VkExtent3D));
  }
}