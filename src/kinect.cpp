#include <kinect.h>

using namespace node;
using namespace v8;
using namespace opencv;

// Persistent Handle<Value> init(int * deviceID) {
//   return String::New("Kinect successfully connected");
// }

// Persistent Handle<Value> init() {
// 	init();
// 	return String::New("Device started")
// }

cujs::cujs() {

}

~cujs::cujs() { }


void cujs::init(v8::Handle<v8::Object> deviceID) {

}

Handle<Value> isAlive() {
    HandleScope scope;
    return scope.Close(isAlive);
}


void RegisterModule(Handle<Object> target)
{
	NODE_SET_METHOD(target, "init", init);
	NODE_SET_METHOD(target, "isAlive", isAlive);
	NODE_SET_METHOD(target, "isFrameNew", isFrameNew);  
	NODE_SET_METHOD(target, "getDetected", getDetected);
	NODE_SET_METHOD(target, "getRawArray", getRawArray);
	NODE_SET_METHOD(target, "getShape", getShape);
	NODE_SET_METHOD(target, "close", close);
}

NODE_MODULE(cujs, RegisterModule);