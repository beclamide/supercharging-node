#include <node.h>
#include <v8.h>

int32_t fibonacci(int32_t num) {
    if (num <= 1) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}

void mainFunc(const v8::FunctionCallbackInfo<v8::Value>& args) {
    int32_t num = fibonacci(args[0]->IntegerValue());
    args.GetReturnValue().Set(num);
}

void init(v8::Local<v8::Object> exports) {
  NODE_SET_METHOD(exports, "mainFunc", mainFunc);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, init)