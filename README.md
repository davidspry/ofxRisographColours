# ofxRisographColours

An add-on for [openFrameworks](https://github.com/openframeworks/openFrameworks) that provides a library of Risograph ink colours as `ofColor`.

The RGB values of these colours were sourced from [Stencil](http://stencil.wiki/colors).

To use this add-on with openFrameworks:
  - Download the repository;
  - Move the `src` folder to `{OF_ROOT}/addons/ofxRisographColours/`;
  - Add ofxRisographColours to your project using the openFrameworks project generator.
  
## Usage

The colours are stored in an `std::unordered_map`, so colours can be retrieved quickly using their name as a key.

```
#include "ofxRisographColours.hpp"

ofColor colour = ofxRisographColours::get("mint");

ofSetColor(colour);
```

The colour names are written in "snake case" (e.g. `hunter_green`, `spruce`, `risofederal_blue`, etc.).

Colours can be selected randomly, too.

```
#include "ofxRisographColours.hpp"

ofColor colour = ofxRisographColours::random();

ofSetColor(colour);
```
