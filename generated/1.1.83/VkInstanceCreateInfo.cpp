#include "utils.h"
#include "index.h"
#include "VkInstanceCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkInstanceCreateInfo::constructor;

_VkInstanceCreateInfo::_VkInstanceCreateInfo() {
  instance = (VkInstanceCreateInfo*) malloc(sizeof(VkInstanceCreateInfo));
  instance->pApplicationInfo = nullptr;
  instance->ppEnabledLayerNames = nullptr;
  instance->ppEnabledExtensionNames = nullptr;
}

_VkInstanceCreateInfo::~_VkInstanceCreateInfo() { }

void _VkInstanceCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkInstanceCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkInstanceCreateInfo").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pApplicationInfo").ToLocalChecked(), GetpApplicationInfo, SetpApplicationInfo, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledLayerCount").ToLocalChecked(), GetenabledLayerCount, SetenabledLayerCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledLayerNames").ToLocalChecked(), GetppEnabledLayerNames, SetppEnabledLayerNames, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledExtensionCount").ToLocalChecked(), GetenabledExtensionCount, SetenabledExtensionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledExtensionNames").ToLocalChecked(), GetppEnabledExtensionNames, SetppEnabledExtensionNames, ctor);
  
  Nan::Set(target, Nan::New("VkInstanceCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkInstanceCreateInfo::New) {
  _VkInstanceCreateInfo* self = new _VkInstanceCreateInfo();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// sType
NAN_GETTER(_VkInstanceCreateInfo::GetsType) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->sType));
}
NAN_SETTER(_VkInstanceCreateInfo::SetsType) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  self->instance->sType = static_cast<VkStructureType>(value->Uint32Value());
}// pApplicationInfo
NAN_GETTER(_VkInstanceCreateInfo::GetpApplicationInfo) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  if (instance->pApplicationInfo != nullptr) {
    info.GetReturnValue().Set(self->pApplicationInfo->handle());
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkInstanceCreateInfo::SetpApplicationInfo) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  _VkApplicationInfo* obj = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(value->ToObject());
  self->pApplicationInfo = obj;
  instance->pApplicationInfo = obj->instance;
}// enabledLayerCount
NAN_GETTER(_VkInstanceCreateInfo::GetenabledLayerCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->enabledLayerCount));
}
NAN_SETTER(_VkInstanceCreateInfo::SetenabledLayerCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  self->instance->enabledLayerCount = static_cast<uint32_t>(value->NumberValue());
}// ppEnabledLayerNames
NAN_GETTER(_VkInstanceCreateInfo::GetppEnabledLayerNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  if (instance->ppEnabledLayerNames != nullptr) {
    info.GetReturnValue().Set(Nan::New(self->ppEnabledLayerNames));
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkInstanceCreateInfo::SetppEnabledLayerNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  
    // js
    {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->ppEnabledLayerNames = obj;
    }
  
  // vulkan
  {
    instance->ppEnabledLayerNames = createArrayOfV8Strings(value);
  }
}// enabledExtensionCount
NAN_GETTER(_VkInstanceCreateInfo::GetenabledExtensionCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->enabledExtensionCount));
}
NAN_SETTER(_VkInstanceCreateInfo::SetenabledExtensionCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  self->instance->enabledExtensionCount = static_cast<uint32_t>(value->NumberValue());
}// ppEnabledExtensionNames
NAN_GETTER(_VkInstanceCreateInfo::GetppEnabledExtensionNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  if (instance->ppEnabledExtensionNames != nullptr) {
    info.GetReturnValue().Set(Nan::New(self->ppEnabledExtensionNames));
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkInstanceCreateInfo::SetppEnabledExtensionNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  VkInstanceCreateInfo *instance = self->instance;
  
    // js
    {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->ppEnabledExtensionNames = obj;
    }
  
  // vulkan
  {
    instance->ppEnabledExtensionNames = createArrayOfV8Strings(value);
  }
}