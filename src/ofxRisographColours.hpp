#pragma once

#include "ofMain.h"

#define   KEY_ERROR "[ofxRisographColours] The given colour name could not be found."
#define INDEX_ERROR "[ofxRisographColours] The given index is out of range."

/// \brief A library of colours based on Risograph inks represented as ofColor objects.

class ofxRisographColours
{
private:
    static const unordered_map<std::string, const ofColor*> colours;
    static const unordered_map<std::string, const ofColor*> init_map();

public:
    /// \brief  Retrieve a colour by name.
    /// \throw  An exception will be thrown if the given colour name cannot be found.
 
    [[nodiscard]] static const ofColor get(const std::string colour) noexcept(false);
    
    /// \brief  Retrieve a colour by index.
    /// \throw  An exception will be thrown if a colour cannot be found at the given index.
    
    [[nodiscard]] inline static const ofColor get(const int index) noexcept(false);
    
    /// \brief  Retrieve the number of available colours.
    
    [[nodiscard]] inline static const int getNumberOfColours() noexcept;
    
    /// \brief  Retrieve a randomly selected colour.

    [[nodiscard]] static const ofColor random();

public:
    inline static const ofColor black              = {0,   0,   0  };
    inline static const ofColor burgundy           = {145, 78,  114};
    inline static const ofColor blue               = {0,   120, 191};
    inline static const ofColor green              = {0,   169, 92 };
    inline static const ofColor medium_blue        = {50,  85,  164};
    inline static const ofColor bright_red         = {241, 80,  96 };
    inline static const ofColor risofederal_blue   = {61,  85,  136};
    inline static const ofColor purple             = {118, 91,  167};
    inline static const ofColor teal               = {0,   131, 138};
    inline static const ofColor flat_gold          = {187, 139, 65 };
    inline static const ofColor hunter_green       = {64,  112, 96 };
    inline static const ofColor red                = {255, 102, 94 };
    inline static const ofColor brown              = {146, 95,  82 };
    inline static const ofColor yellow             = {255, 232, 0  };
    inline static const ofColor marine_red         = {210, 81,  94 };
    inline static const ofColor orange             = {255, 108, 47 };
    inline static const ofColor fluorescent_pink   = {255, 72,  176};
    inline static const ofColor light_gray         = {136, 137, 138};
    inline static const ofColor metallic_gold      = {172, 147, 110};
    inline static const ofColor crimson            = {228, 93,  80 };
    inline static const ofColor fluorescent_orange = {255, 116, 119};
    inline static const ofColor cornflower         = {98,  168, 229};
    inline static const ofColor sky_blue           = {73,  130, 207};
    inline static const ofColor sea_blue           = {0,   116, 162};
    inline static const ofColor lake               = {35,  91,  168};
    inline static const ofColor indigo             = {67,  80,  96 };
    inline static const ofColor midnight           = {67,  80,  96 };
    inline static const ofColor mist               = {213, 228, 192};
    inline static const ofColor granite            = {165, 170, 168};
    inline static const ofColor charcoal           = {112, 116, 124};
    inline static const ofColor smoky_teal         = {95,  130, 137};
    inline static const ofColor steel              = {55,  94,  119};
    inline static const ofColor slate              = {94,  105, 94 };
    inline static const ofColor turquoise          = {0,   170, 147};
    inline static const ofColor emerald            = {25,  151, 93 };
    inline static const ofColor grass              = {57,  126, 88 };
    inline static const ofColor forest             = {81,  110, 90 };
    inline static const ofColor spruce             = {74,  99,  93 };
    inline static const ofColor moss               = {104, 114, 77 };
    inline static const ofColor sea_foam           = {98,  194, 177};
    inline static const ofColor kelly_green        = {103, 179, 70 };
    inline static const ofColor light_teal         = {0,   157, 165};
    inline static const ofColor ivy                = {22,  155, 98 };
    inline static const ofColor pine               = {35,  126, 116};
    inline static const ofColor lagoon             = {47,  97,  101};
    inline static const ofColor violet             = {157, 122, 210};
    inline static const ofColor orchid             = {187, 118, 207};
    inline static const ofColor plum               = {132, 89,  145};
    inline static const ofColor raisin             = {119, 93,  122};
    inline static const ofColor grape              = {108, 93,  128};
    inline static const ofColor scarlet            = {246, 80,  88 };
    inline static const ofColor tomato             = {210, 81,  94 };
    inline static const ofColor cranberry          = {209, 81,  122};
    inline static const ofColor maroon             = {158, 76,  110};
    inline static const ofColor raspberry_red      = {209, 81,  122};
    inline static const ofColor brick              = {167, 81,  84 };
    inline static const ofColor light_lime         = {227, 237, 85 };
    inline static const ofColor sunflower          = {255, 181, 17 };
    inline static const ofColor melon              = {255, 174, 59 };
    inline static const ofColor apricot            = {246, 160, 77 };
    inline static const ofColor paprika            = {238, 127, 75 };
    inline static const ofColor pumpkin            = {255, 111, 76 };
    inline static const ofColor bright_olive_green = {180, 159, 41 };
    inline static const ofColor bright_gold        = {186, 128, 50 };
    inline static const ofColor copper             = {189, 100, 57 };
    inline static const ofColor mahogany           = {142, 89,  90 };
    inline static const ofColor bisque             = {242, 205, 207};
    inline static const ofColor bubble_gum         = {249, 132, 202};
    inline static const ofColor light_mauve        = {230, 181, 201};
    inline static const ofColor dark_mauve         = {189, 140, 166};
    inline static const ofColor wine               = {145, 78,  114};
    inline static const ofColor gray               = {146, 141, 136};
    inline static const ofColor coral              = {255, 142, 145};
    inline static const ofColor white              = {255, 255, 255};
    inline static const ofColor aqua               = {94,  200, 229};
    inline static const ofColor mint               = {130, 216, 213};
    inline static const ofColor clear_medium       = {242, 242, 242};
    inline static const ofColor fluorescent_yellow = {255, 233, 22 };
    inline static const ofColor fluorescent_red    = {255, 76,  101};
    inline static const ofColor fluorescent_green  = {68,  214, 44 };
    inline static const ofColor off_white          = {235, 235, 235};
};
