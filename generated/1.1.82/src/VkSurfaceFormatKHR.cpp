/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkSurfaceFormatKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSurfaceFormatKHR::constructor;

_VkSurfaceFormatKHR::_VkSurfaceFormatKHR() {
  
}

_VkSurfaceFormatKHR::~_VkSurfaceFormatKHR() {
  //printf("VkSurfaceFormatKHR deconstructed!!\n");
}

void _VkSurfaceFormatKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSurfaceFormatKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSurfaceFormatKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("format").ToLocalChecked(), Getformat, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("colorSpace").ToLocalChecked(), GetcolorSpace, nullptr, ctor);
  Nan::Set(target, Nan::New("VkSurfaceFormatKHR").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSurfaceFormatKHR::New) {
  if (info.IsConstructCall()) {
    _VkSurfaceFormatKHR* self = new _VkSurfaceFormatKHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSurfaceFormatKHR constructor cannot be invoked without 'new'");
  }
};

// format
NAN_GETTER(_VkSurfaceFormatKHR::Getformat) {
  _VkSurfaceFormatKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceFormatKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.format));
}// colorSpace
NAN_GETTER(_VkSurfaceFormatKHR::GetcolorSpace) {
  _VkSurfaceFormatKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceFormatKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.colorSpace));
}