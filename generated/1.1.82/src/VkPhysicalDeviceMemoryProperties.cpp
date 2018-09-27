/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkPhysicalDeviceMemoryProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceMemoryProperties::constructor;

_VkPhysicalDeviceMemoryProperties::_VkPhysicalDeviceMemoryProperties() {
  
}

_VkPhysicalDeviceMemoryProperties::~_VkPhysicalDeviceMemoryProperties() {
  //printf("VkPhysicalDeviceMemoryProperties deconstructed!!\n");
}

void _VkPhysicalDeviceMemoryProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceMemoryProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceMemoryProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("memoryTypeCount").ToLocalChecked(), GetmemoryTypeCount, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryTypes").ToLocalChecked(), GetmemoryTypes, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryHeapCount").ToLocalChecked(), GetmemoryHeapCount, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryHeaps").ToLocalChecked(), GetmemoryHeaps, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceMemoryProperties").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPhysicalDeviceMemoryProperties::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceMemoryProperties* self = new _VkPhysicalDeviceMemoryProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceMemoryProperties constructor cannot be invoked without 'new'");
  }
};

// memoryTypeCount
NAN_GETTER(_VkPhysicalDeviceMemoryProperties::GetmemoryTypeCount) {
  _VkPhysicalDeviceMemoryProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMemoryProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.memoryTypeCount));
}// memoryTypes
NAN_GETTER(_VkPhysicalDeviceMemoryProperties::GetmemoryTypes) {
  _VkPhysicalDeviceMemoryProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMemoryProperties>(info.This());
  if (self->memoryTypes.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->memoryTypes));
  }
}// memoryHeapCount
NAN_GETTER(_VkPhysicalDeviceMemoryProperties::GetmemoryHeapCount) {
  _VkPhysicalDeviceMemoryProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMemoryProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.memoryHeapCount));
}// memoryHeaps
NAN_GETTER(_VkPhysicalDeviceMemoryProperties::GetmemoryHeaps) {
  _VkPhysicalDeviceMemoryProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMemoryProperties>(info.This());
  if (self->memoryHeaps.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->memoryHeaps));
  }
}