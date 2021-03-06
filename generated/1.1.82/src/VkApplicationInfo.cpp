/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkApplicationInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkApplicationInfo::constructor;

_VkApplicationInfo::_VkApplicationInfo() {
  instance.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
}

_VkApplicationInfo::~_VkApplicationInfo() {
  //printf("VkApplicationInfo deconstructed!!\n");
}

void _VkApplicationInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkApplicationInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkApplicationInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pApplicationName").ToLocalChecked(), GetpApplicationName, SetpApplicationName, ctor);
  SetPrototypeAccessor(proto, Nan::New("applicationVersion").ToLocalChecked(), GetapplicationVersion, SetapplicationVersion, ctor);
  SetPrototypeAccessor(proto, Nan::New("pEngineName").ToLocalChecked(), GetpEngineName, SetpEngineName, ctor);
  SetPrototypeAccessor(proto, Nan::New("engineVersion").ToLocalChecked(), GetengineVersion, SetengineVersion, ctor);
  SetPrototypeAccessor(proto, Nan::New("apiVersion").ToLocalChecked(), GetapiVersion, SetapiVersion, ctor);
  Nan::Set(target, Nan::New("VkApplicationInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkApplicationInfo::New) {
  if (info.IsConstructCall()) {
    _VkApplicationInfo* self = new _VkApplicationInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("pApplicationName").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("applicationVersion").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pEngineName").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("engineVersion").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("apiVersion").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkApplicationInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkApplicationInfo::GetsType) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkApplicationInfo::SetsType) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// pApplicationName
NAN_GETTER(_VkApplicationInfo::GetpApplicationName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (self->pApplicationName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pApplicationName);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkApplicationInfo::SetpApplicationName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pApplicationName = str;
    self->instance.pApplicationName = copyV8String(value);
  } else {
    self->instance.pApplicationName = nullptr;
  }
}// applicationVersion
NAN_GETTER(_VkApplicationInfo::GetapplicationVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.applicationVersion));
}NAN_SETTER(_VkApplicationInfo::SetapplicationVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  self->instance.applicationVersion = static_cast<uint32_t>(value->NumberValue());
}// pEngineName
NAN_GETTER(_VkApplicationInfo::GetpEngineName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (self->pEngineName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pEngineName);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkApplicationInfo::SetpEngineName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pEngineName = str;
    self->instance.pEngineName = copyV8String(value);
  } else {
    self->instance.pEngineName = nullptr;
  }
}// engineVersion
NAN_GETTER(_VkApplicationInfo::GetengineVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.engineVersion));
}NAN_SETTER(_VkApplicationInfo::SetengineVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  self->instance.engineVersion = static_cast<uint32_t>(value->NumberValue());
}// apiVersion
NAN_GETTER(_VkApplicationInfo::GetapiVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.apiVersion));
}NAN_SETTER(_VkApplicationInfo::SetapiVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  self->instance.apiVersion = static_cast<uint32_t>(value->NumberValue());
}