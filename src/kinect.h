#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <v8.h>
#include <node.h>
#include "libfreenect.h"
#include <opencv.h>
#include <jsoncpp.h>

class cujs : public node::ObjectWrap { {
	public:
		cujs();
		~cujs();

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
		Json::Value response;
};