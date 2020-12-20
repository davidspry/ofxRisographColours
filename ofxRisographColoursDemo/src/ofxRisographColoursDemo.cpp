#include "ofxRisographColoursDemo.h"

void ofxRisographColoursDemo::draw()
{
    ofSetRectMode(OF_RECTMODE_CENTER);
    const auto x = ofGetWidth () * 0.5f;
    const auto y = ofGetHeight() * 0.5f;
    const auto r = ofRectangle(x, y, 600.f, 450.f);
    const auto rectangles = subdivide(r, 0, 3);
    
    /// 1. Access as constant
    ofSetColor(ofxRisographColours::sky_blue);
    ofDrawRectangle(rectangles.at(0));
    
    /// 2. Random colours
    for (auto& r : subdivide(rectangles.at(1), 0, 6))
    {
        ofSetColor(ofxRisographColours::random());
        ofDrawRectangle(r);
    }
    
    /// 3. Look-up by index
    ofSetColor(ofxRisographColours::get(42));
    ofDrawRectangle(rectangles.at(2));
}
