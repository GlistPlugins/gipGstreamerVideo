/*
 * gipEmpty.h
 *
 *  Created on: 2 Aðu 2021
 *      Author: kayra
 */


#ifndef MEDIA_GVIDEO_H_
#define MEDIA_GVIDEO_H_

#include "gObject.h"
#include "gBasePlugin.h"
#include "gst/gst.h"

#if defined(WIN32)
#include <windef.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#elif defined(LINUX)
#define GLFW_EXPOSE_NATIVE_X11
#elif defined(APPLE)
#define GLFW_EXPOSE_NATIVE_COCOA
#endif

class gipGstreamerVideo : public gObject{
public:
	gipGstreamerVideo();
	virtual ~gipGstreamerVideo();

};

#endif /* SRC_GGSTREAMERVIDEO_H_ */
