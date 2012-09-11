# cu.js
cu.js (see you) is a library for kinect and webcam to track blobs and center of mass.


```
v0.0.1 Just setting up the project, nothing works yet.
```

## Methods
### cujs.init()
### cujs.init(deviceid)
Starts tracking. Device is auto detected, default to kinect. Overload device ID.

### cujs.isAlive()
Returns true/false depending on state of the device.

### cujs.isFrameNew()
Checks to see if the frame is new

### cujs.getDetected(normalized=true)[]
Returns all detected blobs. X and Y values are normalized from the pixel with and height, z is normalized from 0-8000mm
```
[{
	objectID: 1
	, center: {
	x: 0.4
	, y: 0.2
	, z: 0.1
	}
	, width: .4
	, height: .2
	, contour: [ { x,y,z }]
}]

```

### cujs.getRawArray()
Returns the image

### cujs.getShape(shapeID)
Returns an individual shape, same as getDetected but requires an id.

### cujs.close()
Closes the kinect connection and cleans up