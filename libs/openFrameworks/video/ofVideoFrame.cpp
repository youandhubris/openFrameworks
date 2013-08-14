/*
 * ofVideoFrame.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: arturo
 */

#include "ofVideoFrame.h"

ofVideoFrame::ofVideoFrame(ofBaseVideoFrame * nativeFrame)
:nativeFrame(nativeFrame)
{

}

ofVideoFrame::ofVideoFrame(const ofVideoFrame& mom)
:nativeFrame(mom.nativeFrame)
{
	nativeFrame->retain();
}

ofVideoFrame::~ofVideoFrame() {
	nativeFrame->release();
}

ofVideoFrame & ofVideoFrame::operator=(const ofVideoFrame & mom){
	if(&mom != this){
		nativeFrame = mom.nativeFrame;
		nativeFrame->retain();
	}
	return *this;
}


ofPixels & ofVideoFrame::getPixels(){
	return nativeFrame->getPixels();
}

ofTexture & ofVideoFrame::getTexture(){
	return nativeFrame->getTexture();
}
