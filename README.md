# ofxRisographColours

An add-on for [openFrameworks](https://github.com/openframeworks/openFrameworks) that provides a library of Risograph ink colours as `ofColor`.

The RGB values of these colours were sourced from [Stencil](http://stencil.wiki/colors).

To use this add-on with openFrameworks:
  - Download the repository;
  - Move the contents of the repository to `{OF_ROOT}/addons/ofxRisographColours/`;
  - Add ofxRisographColours as an add-on to your project using the openFrameworks project generator.
  
See the included Xcode project, 'ofxRisographColoursDemo', for a simple usage demo.
  
## Usage

Each colour is stored as a static constant.

```
#include "ofxRisographColours.hpp"

ofColor colour = ofxRisographColours::bisque;

ofSetColor(colour);
```

Colours can also be retrieved from the class's `std::unordered_map` using either an index or the colour's name as a key.

```
// The upper bound for colour indices
const int upperBound = ofxRisographColours::getNumberOfColours();

// Retrieve by index
ofxRisographColours::get(25);

// Retrieve by name
ofxRisographColours::get("mint");
```

Colours can be obtained randomly using the `random` method.

```
ofColor colour = ofxRisographColours::random();

ofSetColor(colour);
```
