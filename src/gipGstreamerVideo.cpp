 /*
 * gipEmpty.cpp
 *
 *  Created on: 2 Aðu 2021
 *      Author: kayra
 */

#include "gipGstreamerVideo.h"

gipGstreamerVideo::gipGstreamerVideo() {
	if(!gst_is_initialized()) {
		gst_init(nullptr, nullptr);
		g_print("init");
	}else{
		g_print("already init");
	}

}

gipGstreamerVideo::~gipGstreamerVideo() {
	// TODO Auto-generated destructor stub
}

