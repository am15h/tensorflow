//
// Created by amish on 24/03/20.
//

#include "nnapi_delegate_c_wrapper.h"
#include "nnapi_delegate.h"
#include "tensorflow/lite/c/common.h"

TfLiteDelegate *TfLiteStatefulNnApiDelegateCreate(){
    tflite::StatefulNnApiDelegate *object;
    object = new tflite::StatefulNnApiDelegate();
    return object;
}

void TfLiteStatefulNnApiDelegateDelete(TfLiteDelegate* delegate){
    delete delegate;
}
