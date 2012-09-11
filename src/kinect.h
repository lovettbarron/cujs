#include <v8.h>
#include <node.h>
#include <opencv.h>

class cujs : public node::ObjectWrap { {
	public:
		struct blob;
		vector<blob> blobs;

		void init();
		bool isAlive();
		bool isFrameNew();
		vector<blobs> getDetected()
		vector<unsigned char*> getRawArray();
		blob getShape();
		void close();
	private:
		bool isAlive;
		bool isNewFrame;
		int width;
		int height;
		float getNormalized(int * value, int * valueMax);
};


{
	NODE_SET_METHOD(target, "init", init);
	NODE_SET_METHOD(target, "isAlive", isAlive);
	NODE_SET_METHOD(target, "isFrameNew", isFrameNew);  
	NODE_SET_METHOD(target, "getDetected", getDetected);
	NODE_SET_METHOD(target, "getRawArray", getRawArray);
	NODE_SET_METHOD(target, "getShape", getShape);
	NODE_SET_METHOD(target, "close", close);