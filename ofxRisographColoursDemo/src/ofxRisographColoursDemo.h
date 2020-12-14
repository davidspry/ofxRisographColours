#pragma once

#include "ofMain.h"
#include "ofxRisographColours.hpp"

class ofxRisographColoursDemo: public ofBaseApp
{
public:
    void draw() override;
    
private:
    inline std::vector<ofRectangle> subdivide(ofRectangle r, uint axis, uint subdivisions) noexcept
    {
        std::vector<ofRectangle> vector;
        vector.reserve(subdivisions);

        const bool yaxis = static_cast<bool>(axis);
        const auto scale = 1.0f / (float) (std::max(1, (int) subdivisions));
        const int  rmode = ofGetRectMode() == OF_RECTMODE_CORNER ? 1 : -1;
        
        const float sx = yaxis ? 1.00f : scale;
        const float sy = yaxis ? scale : 1.00f;
        const float dx = yaxis ? 0.00f : rmode * r.width * scale;
        const float dy = yaxis ? rmode * r.height * scale : 0.00f;
        
        ofRectangle subdivision = r;
        if (ofGetRectMode() == OF_RECTMODE_CORNER)
             subdivision.scale(sx, sy);
        else subdivision.scaleFromCenter(sx, sy);

        for (int k = subdivisions - 1; k >= 0; --k)
        {
            ofRectangle r = subdivision;
            r.translate(k * dx, k * dy);
            vector.push_back(r);
        }

        return vector;
    }
};
