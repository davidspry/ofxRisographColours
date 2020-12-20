#include "ofxRisographColours.hpp"

const std::array<const ofColor*, 81> ofxRisographColours::colours =
{
    &(ofxRisographColours::black),
    &(ofxRisographColours::burgundy),
    &(ofxRisographColours::blue),
    &(ofxRisographColours::green),
    &(ofxRisographColours::medium_blue),
    &(ofxRisographColours::bright_red),
    &(ofxRisographColours::risofederal_blue),
    &(ofxRisographColours::purple),
    &(ofxRisographColours::teal),
    &(ofxRisographColours::flat_gold),
    &(ofxRisographColours::hunter_green),
    &(ofxRisographColours::red),
    &(ofxRisographColours::brown),
    &(ofxRisographColours::yellow),
    &(ofxRisographColours::marine_red),
    &(ofxRisographColours::orange),
    &(ofxRisographColours::fluorescent_pink),
    &(ofxRisographColours::light_gray),
    &(ofxRisographColours::metallic_gold),
    &(ofxRisographColours::crimson),
    &(ofxRisographColours::fluorescent_orange),
    &(ofxRisographColours::cornflower),
    &(ofxRisographColours::sky_blue),
    &(ofxRisographColours::sea_blue),
    &(ofxRisographColours::lake),
    &(ofxRisographColours::indigo),
    &(ofxRisographColours::midnight),
    &(ofxRisographColours::mist),
    &(ofxRisographColours::granite),
    &(ofxRisographColours::charcoal),
    &(ofxRisographColours::smoky_teal),
    &(ofxRisographColours::steel),
    &(ofxRisographColours::slate),
    &(ofxRisographColours::turquoise),
    &(ofxRisographColours::emerald),
    &(ofxRisographColours::grass),
    &(ofxRisographColours::forest),
    &(ofxRisographColours::spruce),
    &(ofxRisographColours::moss),
    &(ofxRisographColours::sea_foam),
    &(ofxRisographColours::kelly_green),
    &(ofxRisographColours::light_teal),
    &(ofxRisographColours::ivy),
    &(ofxRisographColours::pine),
    &(ofxRisographColours::lagoon),
    &(ofxRisographColours::violet),
    &(ofxRisographColours::orchid),
    &(ofxRisographColours::plum),
    &(ofxRisographColours::raisin),
    &(ofxRisographColours::grape),
    &(ofxRisographColours::scarlet),
    &(ofxRisographColours::tomato),
    &(ofxRisographColours::cranberry),
    &(ofxRisographColours::maroon),
    &(ofxRisographColours::raspberry_red),
    &(ofxRisographColours::brick),
    &(ofxRisographColours::light_lime),
    &(ofxRisographColours::sunflower),
    &(ofxRisographColours::melon),
    &(ofxRisographColours::apricot),
    &(ofxRisographColours::paprika),
    &(ofxRisographColours::pumpkin),
    &(ofxRisographColours::bright_olive_green),
    &(ofxRisographColours::bright_gold),
    &(ofxRisographColours::copper),
    &(ofxRisographColours::mahogany),
    &(ofxRisographColours::bisque),
    &(ofxRisographColours::bubble_gum),
    &(ofxRisographColours::light_mauve),
    &(ofxRisographColours::dark_mauve),
    &(ofxRisographColours::wine),
    &(ofxRisographColours::gray),
    &(ofxRisographColours::coral),
    &(ofxRisographColours::white),
    &(ofxRisographColours::aqua),
    &(ofxRisographColours::mint),
    &(ofxRisographColours::clear_medium),
    &(ofxRisographColours::fluorescent_yellow),
    &(ofxRisographColours::fluorescent_red),
    &(ofxRisographColours::fluorescent_green),
    &(ofxRisographColours::off_white)
};

const ofColor ofxRisographColours::black              = {0,   0,   0  };
const ofColor ofxRisographColours::burgundy           = {145, 78,  114};
const ofColor ofxRisographColours::blue               = {0,   120, 191};
const ofColor ofxRisographColours::green              = {0,   169, 92 };
const ofColor ofxRisographColours::medium_blue        = {50,  85,  164};
const ofColor ofxRisographColours::bright_red         = {241, 80,  96 };
const ofColor ofxRisographColours::risofederal_blue   = {61,  85,  136};
const ofColor ofxRisographColours::purple             = {118, 91,  167};
const ofColor ofxRisographColours::teal               = {0,   131, 138};
const ofColor ofxRisographColours::flat_gold          = {187, 139, 65 };
const ofColor ofxRisographColours::hunter_green       = {64,  112, 96 };
const ofColor ofxRisographColours::red                = {255, 102, 94 };
const ofColor ofxRisographColours::brown              = {146, 95,  82 };
const ofColor ofxRisographColours::yellow             = {255, 232, 0  };
const ofColor ofxRisographColours::marine_red         = {210, 81,  94 };
const ofColor ofxRisographColours::orange             = {255, 108, 47 };
const ofColor ofxRisographColours::fluorescent_pink   = {255, 72,  176};
const ofColor ofxRisographColours::light_gray         = {136, 137, 138};
const ofColor ofxRisographColours::metallic_gold      = {172, 147, 110};
const ofColor ofxRisographColours::crimson            = {228, 93,  80 };
const ofColor ofxRisographColours::fluorescent_orange = {255, 116, 119};
const ofColor ofxRisographColours::cornflower         = {98,  168, 229};
const ofColor ofxRisographColours::sky_blue           = {73,  130, 207};
const ofColor ofxRisographColours::sea_blue           = {0,   116, 162};
const ofColor ofxRisographColours::lake               = {35,  91,  168};
const ofColor ofxRisographColours::indigo             = {67,  80,  96 };
const ofColor ofxRisographColours::midnight           = {67,  80,  96 };
const ofColor ofxRisographColours::mist               = {213, 228, 192};
const ofColor ofxRisographColours::granite            = {165, 170, 168};
const ofColor ofxRisographColours::charcoal           = {112, 116, 124};
const ofColor ofxRisographColours::smoky_teal         = {95,  130, 137};
const ofColor ofxRisographColours::steel              = {55,  94,  119};
const ofColor ofxRisographColours::slate              = {94,  105, 94 };
const ofColor ofxRisographColours::turquoise          = {0,   170, 147};
const ofColor ofxRisographColours::emerald            = {25,  151, 93 };
const ofColor ofxRisographColours::grass              = {57,  126, 88 };
const ofColor ofxRisographColours::forest             = {81,  110, 90 };
const ofColor ofxRisographColours::spruce             = {74,  99,  93 };
const ofColor ofxRisographColours::moss               = {104, 114, 77 };
const ofColor ofxRisographColours::sea_foam           = {98,  194, 177};
const ofColor ofxRisographColours::kelly_green        = {103, 179, 70 };
const ofColor ofxRisographColours::light_teal         = {0,   157, 165};
const ofColor ofxRisographColours::ivy                = {22,  155, 98 };
const ofColor ofxRisographColours::pine               = {35,  126, 116};
const ofColor ofxRisographColours::lagoon             = {47,  97,  101};
const ofColor ofxRisographColours::violet             = {157, 122, 210};
const ofColor ofxRisographColours::orchid             = {187, 118, 207};
const ofColor ofxRisographColours::plum               = {132, 89,  145};
const ofColor ofxRisographColours::raisin             = {119, 93,  122};
const ofColor ofxRisographColours::grape              = {108, 93,  128};
const ofColor ofxRisographColours::scarlet            = {246, 80,  88 };
const ofColor ofxRisographColours::tomato             = {210, 81,  94 };
const ofColor ofxRisographColours::cranberry          = {209, 81,  122};
const ofColor ofxRisographColours::maroon             = {158, 76,  110};
const ofColor ofxRisographColours::raspberry_red      = {209, 81,  122};
const ofColor ofxRisographColours::brick              = {167, 81,  84 };
const ofColor ofxRisographColours::light_lime         = {227, 237, 85 };
const ofColor ofxRisographColours::sunflower          = {255, 181, 17 };
const ofColor ofxRisographColours::melon              = {255, 174, 59 };
const ofColor ofxRisographColours::apricot            = {246, 160, 77 };
const ofColor ofxRisographColours::paprika            = {238, 127, 75 };
const ofColor ofxRisographColours::pumpkin            = {255, 111, 76 };
const ofColor ofxRisographColours::bright_olive_green = {180, 159, 41 };
const ofColor ofxRisographColours::bright_gold        = {186, 128, 50 };
const ofColor ofxRisographColours::copper             = {189, 100, 57 };
const ofColor ofxRisographColours::mahogany           = {142, 89,  90 };
const ofColor ofxRisographColours::bisque             = {242, 205, 207};
const ofColor ofxRisographColours::bubble_gum         = {249, 132, 202};
const ofColor ofxRisographColours::light_mauve        = {230, 181, 201};
const ofColor ofxRisographColours::dark_mauve         = {189, 140, 166};
const ofColor ofxRisographColours::wine               = {145, 78,  114};
const ofColor ofxRisographColours::gray               = {146, 141, 136};
const ofColor ofxRisographColours::coral              = {255, 142, 145};
const ofColor ofxRisographColours::white              = {255, 255, 255};
const ofColor ofxRisographColours::aqua               = {94,  200, 229};
const ofColor ofxRisographColours::mint               = {130, 216, 213};
const ofColor ofxRisographColours::clear_medium       = {242, 242, 242};
const ofColor ofxRisographColours::fluorescent_yellow = {255, 233, 22 };
const ofColor ofxRisographColours::fluorescent_red    = {255, 76,  101};
const ofColor ofxRisographColours::fluorescent_green  = {68,  214, 44 };
const ofColor ofxRisographColours::off_white          = {235, 235, 235};
