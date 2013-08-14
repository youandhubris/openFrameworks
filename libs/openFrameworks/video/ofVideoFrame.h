/*
 * ofVideoFrame.h
 *
 *  Created on: Aug 14, 2013
 *      Author: arturo
 */

#ifndef OFVIDEOFRAME_H_
#define OFVIDEOFRAME_H_

class ofVideoFrame{
public:
	ofVideoFrame(){}
	ofVideoFrame(ofVideoFrame & mom);
	virtual ~ofVideoFrame();

	ofVideoFrame & operator=(const ofVideoFrame & mom);

	virtual ofPixels & getPixels() = 0;
	virtual ofTexture & getTexture() = 0;

protected:
	virtual void retain() = 0;
	virtual void release() = 0;
};

#endif /* OFVIDEOFRAME_H_ */
