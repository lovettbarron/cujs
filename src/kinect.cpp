#include <kinect.h>

using namespace node;
using namespace v8;
using namespace opencv;

static Handle<Value> init(const Arguments& args) {
  return String::New("Kinect successfully connected");
}

extern "C" void init(Handle<Object> target)
{
	NODE_SET_METHOD(target, "init", init);
	NODE_SET_METHOD(target, "isAlive", isAlive);
	NODE_SET_METHOD(target, "isFrameNew", isFrameNew);  
	NODE_SET_METHOD(target, "getDetected", getDetected);
	NODE_SET_METHOD(target, "getRawArray", getRawArray);
	NODE_SET_METHOD(target, "getShape", getShape);
	NODE_SET_METHOD(target, "close", close);
}