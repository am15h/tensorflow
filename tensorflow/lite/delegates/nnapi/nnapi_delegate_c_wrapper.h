//
// Created by amish on 24/03/20.
//
#include "tensorflow/lite/c/common.h"

#ifndef LITE_NNAPI_DELEGATE_C_WRAPPER_H
#define LITE_NNAPI_DELEGATE_C_WRAPPER_H

#ifdef SWIG
#define TFL_CAPI_EXPORT
#else
#if defined(_WIN32)
#ifdef TFL_COMPILE_LIBRARY
#define TFL_CAPI_EXPORT __declspec(dllexport)
#else
#define TFL_CAPI_EXPORT __declspec(dllimport)
#endif  // TFL_COMPILE_LIBRARY
#else
#define TFL_CAPI_EXPORT __attribute__((visibility("default")))
#endif  // _WIN32
#endif  // SWIG

#ifdef __cplusplus
extern "C" {
#endif

TFL_CAPI_EXPORT TfLiteDelegate *TfLiteStatefulNnApiDelegateCreate();
TFL_CAPI_EXPORT void TfLiteStatefulNnApiDelegateDelete(TfLiteDelegate* delegate);

#ifdef __cplusplus
}
#endif

#endif //LITE_NNAPI_DELEGATE_C_WRAPPER_H
