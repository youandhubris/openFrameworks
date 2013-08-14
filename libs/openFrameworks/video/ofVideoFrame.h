/*
 * ofVideoFrame.h
 *
 *  Created on: Aug 14, 2013
 *      Author: arturo
 */

#ifndef OFVIDEOFRAME_H_
#define OFVIDEOFRAME_H_

template<typename T>
class ofPixels_;

typedef ofPixels_<unsigned char> ofPixels;

class ofTexture;

class ofBaseVideoFrame;

class ofVideoFrame{
public:
	ofVideoFrame();
	ofVideoFrame(ofBaseVideoFrame * nativeFrame);
	ofVideoFrame(const ofVideoFrame & mom);
	virtual ~ofVideoFrame();

	ofVideoFrame & operator=(const ofVideoFrame & mom);

	ofPixels & getPixels();
	ofTexture & getTexture();

protected:
	ofBaseVideoFrame * nativeFrame;
};

class ofBaseVideoFrame{
public:
	virtual ~ofBaseVideoFrame(){};

	virtual ofPixels & getPixels() = 0;
	virtual ofTexture & getTexture() = 0;

private:
	friend class ofVideoFrame;
	virtual void retain() = 0;
	virtual void release() = 0;

};

#endif /* OFVIDEOFRAME_H_ */
