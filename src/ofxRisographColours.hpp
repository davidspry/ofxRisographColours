#pragma once

#include "ofMain.h"

class ofxRisographColours
{
private:
    static const unordered_map<string, ofColor> colors;
    
private:
    static const unordered_map<string, ofColor> init_map();

public:
    static ofColor get(std::string colour);
    static ofColor random();
};
