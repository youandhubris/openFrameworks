/*
 * ofVideoFrame.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: arturo
 */

#include "ofVideoFrame.h"

ofVideoFrame::ofVideoFrame(ofVideoFrame& mom) {
	mom.retain();
}

ofVideoFrame::~ofVideoFrame() {
	release();
}

ofVideoFrame & ofVideoFrame::operator=(const ofVideoFrame & mom){
	if(&mom != this){
		retain();
	}
	return *this;
}

