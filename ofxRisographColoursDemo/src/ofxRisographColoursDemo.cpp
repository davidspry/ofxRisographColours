#include "ofxRisographColoursDemo.h"

void ofxRisographColoursDemo::draw()
{
    ofSetRectMode(OF_RECTMODE_CENTER);
    const float x = ofGetWidth()  * 0.5f;
    const float y = ofGetHeight() * 0.5f;
    const float w = 200.f;
    const float h = 450.f;

    /// 1. Look-up by name
    const ofRectangle rl = {x - w, y, w, h};
    ofSetColor(ofxRisographColours::get("crimson"));
    ofDrawRectangle(rl);
    
    /// 2. Random colours
    const ofRectangle rm = {x, y, w, h};
    const auto rectangles = subdivide(rm, 0, 6);

    for (auto& r : rectangles)
    {
        ofSetColor(ofxRisographColours::random());
        ofDrawRectangle(r);
    }
    
    /// 3. Access as constant
    const ofRectangle rr = {x + w, y, w, h};
    ofSetColor(ofxRisographColours::sky_blue);
    ofDrawRectangle(rr);
}
