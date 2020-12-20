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

ofColor colour = ofxRisographColours::sky_blue;

ofSetColor(colour);
```

Colours can also be retrieved by index.

```
// The upper bound for colour indices
const int upperBound = ofxRisographColours::getNumberOfColours();

// Retrieve by index
ofxRisographColours::get(25);
```

A randomly selected colour can be obtained using the `random` method.

```
ofColor colour = ofxRisographColours::random();

ofSetColor(colour);
```

## Colour indices

| Index | Colour |
| ----- | ------ |
| 0     | `black` |
| 1     | `burgundy` |
| 2     | `blue` |
| 3     | `green` |
| 4     | `medium_blue` |
| 5     | `bright_red` |
| 6     | `risofederal_blue` |
| 7     | `purple` |
| 8     | `teal` |
| 9     | `flat_gold` |
| 10    | `hunter_green` |
| 11    | `red` |
| 12    | `brown` |
| 13    | `yellow` |
| 14    | `marine_red` |
| 15    | `orange` |
| 16    | `fluorescent_pink` |
| 17    | `light_gray` |
| 18    | `metallic_gold` |
| 19    | `crimson` |
| 20    | `fluorescent_orange` |
| 21    | `cornflower` |
| 22    | `sky_blue` |
| 23    | `sea_blue` |
| 24    | `lake` |
| 25    | `indigo` |
| 26    | `midnight` |
| 27    | `mist` |
| 28    | `granite` |
| 29    | `charcoal` |
| 30    | `smoky_teal` |
| 31    | `steel` |
| 32    | `slate` |
| 33    | `turquoise` |
| 34    | `emerald` |
| 35    | `grass` |
| 36    | `forest` |
| 37    | `spruce` |
| 38    | `moss` |
| 39    | `sea_foam` |
| 40    | `kelly_green` |
| 41    | `light_teal` |
| 42    | `ivy` |
| 43    | `pine` |
| 44    | `lagoon` |
| 45    | `violet` |
| 46    | `orchid` |
| 47    | `plum` |
| 48    | `raisin` |
| 49    | `grape` |
| 50    | `scarlet` |
| 51    | `tomato` |
| 52    | `cranberry` |
| 53    | `maroon` |
| 54    | `raspberry_red` |
| 55    | `brick` |
| 56    | `light_lime` |
| 57    | `sunflower` |
| 58    | `melon` |
| 59    | `apricot` |
| 60    | `paprika` |
| 61    | `pumpkin` |
| 62    | `bright_olive_green` |
| 63    | `bright_gold` |
| 64    | `copper` |
| 65    | `mahogany` |
| 66    | `bisque` |
| 67    | `bubble_gum` |
| 68    | `light_mauve` |
| 69    | `dark_mauve` |
| 70    | `wine` |
| 71    | `gray` |
| 72    | `coral` |
| 73    | `white` |
| 74    | `aqua` |
| 75    | `mint` |
| 76    | `clear_medium` |
| 77    | `fluorescent_yellow` |
| 78    | `fluorescent_red` |
| 79    | `fluorescent_green` |
| 80    | `off_white` |
