#include "ofMain.h"
#include "ofxRisographColoursDemo.h"

int main()
{
    ofSetupOpenGL(800, 800, OF_WINDOW);
    ofSetWindowPosition(35, 35);
    ofSetFrameRate(5);
    ofBackground(65);

    ofRunApp(new ofxRisographColoursDemo());
}
