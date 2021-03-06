/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkClearDepthStencilValue.h"

Nan::Persistent<v8::FunctionTemplate> _VkClearDepthStencilValue::constructor;

_VkClearDepthStencilValue::_VkClearDepthStencilValue() {
  
}

_VkClearDepthStencilValue::~_VkClearDepthStencilValue() {
  //printf("VkClearDepthStencilValue deconstructed!!\n");
}

void _VkClearDepthStencilValue::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkClearDepthStencilValue::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkClearDepthStencilValue").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("depth").ToLocalChecked(), Getdepth, Setdepth, ctor);
  SetPrototypeAccessor(proto, Nan::New("stencil").ToLocalChecked(), Getstencil, Setstencil, ctor);
  Nan::Set(target, Nan::New("VkClearDepthStencilValue").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkClearDepthStencilValue::New) {
  if (info.IsConstructCall()) {
    _VkClearDepthStencilValue* self = new _VkClearDepthStencilValue();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("depth").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("stencil").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkClearDepthStencilValue constructor cannot be invoked without 'new'");
  }
};

// depth
NAN_GETTER(_VkClearDepthStencilValue::Getdepth) {
  _VkClearDepthStencilValue *self = Nan::ObjectWrap::Unwrap<_VkClearDepthStencilValue>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depth));
}NAN_SETTER(_VkClearDepthStencilValue::Setdepth) {
  _VkClearDepthStencilValue *self = Nan::ObjectWrap::Unwrap<_VkClearDepthStencilValue>(info.This());
  self->instance.depth = static_cast<float>(value->NumberValue());
}// stencil
NAN_GETTER(_VkClearDepthStencilValue::Getstencil) {
  _VkClearDepthStencilValue *self = Nan::ObjectWrap::Unwrap<_VkClearDepthStencilValue>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stencil));
}NAN_SETTER(_VkClearDepthStencilValue::Setstencil) {
  _VkClearDepthStencilValue *self = Nan::ObjectWrap::Unwrap<_VkClearDepthStencilValue>(info.This());
  self->instance.stencil = static_cast<uint32_t>(value->NumberValue());
}