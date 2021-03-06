/*
 *  ofxSphereCam.h
 *
 *  Created by Stefan Goodchild on 13-08-12.
 *  Copyright 2012/13 Triple Geek Ltd. All rights reserved.
 *
 */

#pragma once

#include "ofMain.h"
#include "ofxTween.h"

class ofxSphereCam : public ofEasyCam {
public:
    
	ofxSphereCam();

    void update();
    
    void moveTo(ofVec3f& t, float d);
    void sphereTo(ofVec3f& t, float d);
    void lookAtTo(ofVec3f& t, float d);

    ofVec3f lookedAt;
    ofVec3f movedTo;
    
    bool handheld;
    float handNoiseAmt;
    
    void randomPosM();
    void randomPosS();
    void drawAxis();
    void drawTarget();
    
private:
    
    ofxEasingQuad easingquad;
    
    float noiseCount;
    float noiseSpeed;
    
    bool spherical;
    
    float radius;
    float phi;
    float theta;
    
    ofxTween posTween;
    ofxTween lookAtTween;
    
};
