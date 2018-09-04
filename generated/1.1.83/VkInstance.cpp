#include "utils.h"
#include "VkInstance.h"

Nan::Persistent<v8::FunctionTemplate> _VkInstance::constructor;

_VkInstance::_VkInstance() {
  instance = (VkInstance*) malloc(sizeof(VkInstance));
}

_VkInstance::~_VkInstance() { }

void _VkInstance::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkInstance::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkInstance").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkInstance").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkInstance::New) {
  _VkInstance* self = new _VkInstance();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};