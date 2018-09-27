/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkGraphicsPipelineCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkGraphicsPipelineCreateInfo::constructor;

_VkGraphicsPipelineCreateInfo::_VkGraphicsPipelineCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
}

_VkGraphicsPipelineCreateInfo::~_VkGraphicsPipelineCreateInfo() {
  //printf("VkGraphicsPipelineCreateInfo deconstructed!!\n");
}

void _VkGraphicsPipelineCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkGraphicsPipelineCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkGraphicsPipelineCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("stageCount").ToLocalChecked(), GetstageCount, SetstageCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pStages").ToLocalChecked(), GetpStages, SetpStages, ctor);
  SetPrototypeAccessor(proto, Nan::New("pVertexInputState").ToLocalChecked(), GetpVertexInputState, SetpVertexInputState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pInputAssemblyState").ToLocalChecked(), GetpInputAssemblyState, SetpInputAssemblyState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pTessellationState").ToLocalChecked(), GetpTessellationState, SetpTessellationState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pViewportState").ToLocalChecked(), GetpViewportState, SetpViewportState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pRasterizationState").ToLocalChecked(), GetpRasterizationState, SetpRasterizationState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pMultisampleState").ToLocalChecked(), GetpMultisampleState, SetpMultisampleState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDepthStencilState").ToLocalChecked(), GetpDepthStencilState, SetpDepthStencilState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pColorBlendState").ToLocalChecked(), GetpColorBlendState, SetpColorBlendState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDynamicState").ToLocalChecked(), GetpDynamicState, SetpDynamicState, ctor);
  SetPrototypeAccessor(proto, Nan::New("layout").ToLocalChecked(), Getlayout, Setlayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("renderPass").ToLocalChecked(), GetrenderPass, SetrenderPass, ctor);
  SetPrototypeAccessor(proto, Nan::New("subpass").ToLocalChecked(), Getsubpass, Setsubpass, ctor);
  SetPrototypeAccessor(proto, Nan::New("basePipelineHandle").ToLocalChecked(), GetbasePipelineHandle, SetbasePipelineHandle, ctor);
  SetPrototypeAccessor(proto, Nan::New("basePipelineIndex").ToLocalChecked(), GetbasePipelineIndex, SetbasePipelineIndex, ctor);
  Nan::Set(target, Nan::New("VkGraphicsPipelineCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkGraphicsPipelineCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkGraphicsPipelineCreateInfo* self = new _VkGraphicsPipelineCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("stageCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pStages").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pVertexInputState").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pInputAssemblyState").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pTessellationState").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pViewportState").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pRasterizationState").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("pMultisampleState").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("pDepthStencilState").ToLocalChecked();
      v8::Local<v8::String> sAccess12 = Nan::New("pColorBlendState").ToLocalChecked();
      v8::Local<v8::String> sAccess13 = Nan::New("pDynamicState").ToLocalChecked();
      v8::Local<v8::String> sAccess14 = Nan::New("layout").ToLocalChecked();
      v8::Local<v8::String> sAccess15 = Nan::New("renderPass").ToLocalChecked();
      v8::Local<v8::String> sAccess16 = Nan::New("subpass").ToLocalChecked();
      v8::Local<v8::String> sAccess17 = Nan::New("basePipelineHandle").ToLocalChecked();
      v8::Local<v8::String> sAccess18 = Nan::New("basePipelineIndex").ToLocalChecked();
      if (obj->Has(sAccess0)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess0);
        info.This()->Set(sAccess0, arg);
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
      if (obj->Has(sAccess6)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess6);
        info.This()->Set(sAccess6, arg);
      }
      if (obj->Has(sAccess7)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess7);
        info.This()->Set(sAccess7, arg);
      }
      if (obj->Has(sAccess8)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess8);
        info.This()->Set(sAccess8, arg);
      }
      if (obj->Has(sAccess9)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess9);
        info.This()->Set(sAccess9, arg);
      }
      if (obj->Has(sAccess10)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess10);
        info.This()->Set(sAccess10, arg);
      }
      if (obj->Has(sAccess11)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess11);
        info.This()->Set(sAccess11, arg);
      }
      if (obj->Has(sAccess12)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess12);
        info.This()->Set(sAccess12, arg);
      }
      if (obj->Has(sAccess13)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess13);
        info.This()->Set(sAccess13, arg);
      }
      if (obj->Has(sAccess14)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess14);
        info.This()->Set(sAccess14, arg);
      }
      if (obj->Has(sAccess15)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess15);
        info.This()->Set(sAccess15, arg);
      }
      if (obj->Has(sAccess16)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess16);
        info.This()->Set(sAccess16, arg);
      }
      if (obj->Has(sAccess17)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess17);
        info.This()->Set(sAccess17, arg);
      }
      if (obj->Has(sAccess18)) {
       v8::Local<v8::Value> arg = obj->Get(sAccess18);
        info.This()->Set(sAccess18, arg);
      }
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkGraphicsPipelineCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetsType) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetsType) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// flags
NAN_GETTER(_VkGraphicsPipelineCreateInfo::Getflags) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::Setflags) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  self->instance.flags = static_cast<VkPipelineCreateFlags>((int32_t)value->NumberValue());
}// stageCount
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetstageCount) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stageCount));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetstageCount) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  self->instance.stageCount = static_cast<uint32_t>(value->NumberValue());
}// pStages
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpStages) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pStages.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pStages);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpStages) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pStages = obj;
    } else {
      if (!self->pStages.IsEmpty()) self->pStages.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pStages = copyArrayOfV8Objects<VkPipelineShaderStageCreateInfo, _VkPipelineShaderStageCreateInfo>(value);
  } else {
    self->instance.pStages = nullptr;
  }
}// pVertexInputState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpVertexInputState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pVertexInputState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pVertexInputState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpVertexInputState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pVertexInputState = obj;
  } else {
    //self->pVertexInputState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineVertexInputStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(value->ToObject());
    self->instance.pVertexInputState = &obj->instance;
  } else {
    self->instance.pVertexInputState = nullptr;
  }
}// pInputAssemblyState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpInputAssemblyState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pInputAssemblyState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pInputAssemblyState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpInputAssemblyState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pInputAssemblyState = obj;
  } else {
    //self->pInputAssemblyState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineInputAssemblyStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(value->ToObject());
    self->instance.pInputAssemblyState = &obj->instance;
  } else {
    self->instance.pInputAssemblyState = nullptr;
  }
}// pTessellationState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpTessellationState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pTessellationState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pTessellationState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpTessellationState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pTessellationState = obj;
  } else {
    //self->pTessellationState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineTessellationStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineTessellationStateCreateInfo>(value->ToObject());
    self->instance.pTessellationState = &obj->instance;
  } else {
    self->instance.pTessellationState = nullptr;
  }
}// pViewportState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpViewportState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pViewportState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pViewportState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpViewportState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pViewportState = obj;
  } else {
    //self->pViewportState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineViewportStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(value->ToObject());
    self->instance.pViewportState = &obj->instance;
  } else {
    self->instance.pViewportState = nullptr;
  }
}// pRasterizationState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpRasterizationState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pRasterizationState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pRasterizationState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpRasterizationState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pRasterizationState = obj;
  } else {
    //self->pRasterizationState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineRasterizationStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(value->ToObject());
    self->instance.pRasterizationState = &obj->instance;
  } else {
    self->instance.pRasterizationState = nullptr;
  }
}// pMultisampleState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpMultisampleState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pMultisampleState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pMultisampleState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpMultisampleState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pMultisampleState = obj;
  } else {
    //self->pMultisampleState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineMultisampleStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineMultisampleStateCreateInfo>(value->ToObject());
    self->instance.pMultisampleState = &obj->instance;
  } else {
    self->instance.pMultisampleState = nullptr;
  }
}// pDepthStencilState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpDepthStencilState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pDepthStencilState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDepthStencilState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpDepthStencilState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pDepthStencilState = obj;
  } else {
    //self->pDepthStencilState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineDepthStencilStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(value->ToObject());
    self->instance.pDepthStencilState = &obj->instance;
  } else {
    self->instance.pDepthStencilState = nullptr;
  }
}// pColorBlendState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpColorBlendState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pColorBlendState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pColorBlendState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpColorBlendState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pColorBlendState = obj;
  } else {
    //self->pColorBlendState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineColorBlendStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(value->ToObject());
    self->instance.pColorBlendState = &obj->instance;
  } else {
    self->instance.pColorBlendState = nullptr;
  }
}// pDynamicState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpDynamicState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pDynamicState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDynamicState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpDynamicState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pDynamicState = obj;
  } else {
    //self->pDynamicState = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineDynamicStateCreateInfo* obj = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(value->ToObject());
    self->instance.pDynamicState = &obj->instance;
  } else {
    self->instance.pDynamicState = nullptr;
  }
}// layout
NAN_GETTER(_VkGraphicsPipelineCreateInfo::Getlayout) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->layout.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->layout);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::Setlayout) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->layout = obj;
  } else {
    //self->layout = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipelineLayout* obj = Nan::ObjectWrap::Unwrap<_VkPipelineLayout>(value->ToObject());
    self->instance.layout = obj->instance;
  } else {
    self->instance.layout = VK_NULL_HANDLE;
  }
}// renderPass
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetrenderPass) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->renderPass.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->renderPass);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetrenderPass) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->renderPass = obj;
  } else {
    //self->renderPass = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkRenderPass* obj = Nan::ObjectWrap::Unwrap<_VkRenderPass>(value->ToObject());
    self->instance.renderPass = obj->instance;
  } else {
    self->instance.renderPass = VK_NULL_HANDLE;
  }
}// subpass
NAN_GETTER(_VkGraphicsPipelineCreateInfo::Getsubpass) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subpass));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::Setsubpass) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  self->instance.subpass = static_cast<uint32_t>(value->NumberValue());
}// basePipelineHandle
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetbasePipelineHandle) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->basePipelineHandle.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->basePipelineHandle);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetbasePipelineHandle) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->basePipelineHandle = obj;
  } else {
    //self->basePipelineHandle = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkPipeline* obj = Nan::ObjectWrap::Unwrap<_VkPipeline>(value->ToObject());
    self->instance.basePipelineHandle = obj->instance;
  } else {
    self->instance.basePipelineHandle = VK_NULL_HANDLE;
  }
}// basePipelineIndex
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetbasePipelineIndex) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.basePipelineIndex));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetbasePipelineIndex) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  self->instance.basePipelineIndex = static_cast<int32_t>(value->NumberValue());
}