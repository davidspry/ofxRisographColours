#pragma once

#include "ofMain.h"

#define CLASS_LABEL "[ofxRisographColours]"
#define COLOR_ERROR CLASS_LABEL " The given colour name could not be found."
#define INDEX_ERROR CLASS_LABEL " The given index is out of range."

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
    static const ofColor black;
    static const ofColor burgundy;
    static const ofColor blue;
    static const ofColor green;
    static const ofColor medium_blue;
    static const ofColor bright_red;
    static const ofColor risofederal_blue;
    static const ofColor purple;
    static const ofColor teal;
    static const ofColor flat_gold;
    static const ofColor hunter_green;
    static const ofColor red;
    static const ofColor brown;
    static const ofColor yellow;
    static const ofColor marine_red;
    static const ofColor orange;
    static const ofColor fluorescent_pink;
    static const ofColor light_gray;
    static const ofColor metallic_gold;
    static const ofColor crimson;
    static const ofColor fluorescent_orange;
    static const ofColor cornflower;
    static const ofColor sky_blue;
    static const ofColor sea_blue;
    static const ofColor lake;
    static const ofColor indigo;
    static const ofColor midnight;
    static const ofColor mist;
    static const ofColor granite;
    static const ofColor charcoal;
    static const ofColor smoky_teal;
    static const ofColor steel;
    static const ofColor slate;
    static const ofColor turquoise;
    static const ofColor emerald;
    static const ofColor grass;
    static const ofColor forest;
    static const ofColor spruce;
    static const ofColor moss;
    static const ofColor sea_foam;
    static const ofColor kelly_green;
    static const ofColor light_teal;
    static const ofColor ivy;
    static const ofColor pine;
    static const ofColor lagoon;
    static const ofColor violet;
    static const ofColor orchid;
    static const ofColor plum;
    static const ofColor raisin;
    static const ofColor grape;
    static const ofColor scarlet;
    static const ofColor tomato;
    static const ofColor cranberry;
    static const ofColor maroon;
    static const ofColor raspberry_red;
    static const ofColor brick;
    static const ofColor light_lime;
    static const ofColor sunflower;
    static const ofColor melon;
    static const ofColor apricot;
    static const ofColor paprika;
    static const ofColor pumpkin;
    static const ofColor bright_olive_green;
    static const ofColor bright_gold;
    static const ofColor copper;
    static const ofColor mahogany;
    static const ofColor bisque;
    static const ofColor bubble_gum;
    static const ofColor light_mauve;
    static const ofColor dark_mauve;
    static const ofColor wine;
    static const ofColor gray;
    static const ofColor coral;
    static const ofColor white;
    static const ofColor aqua;
    static const ofColor mint;
    static const ofColor clear_medium;
    static const ofColor fluorescent_yellow;
    static const ofColor fluorescent_red;
    static const ofColor fluorescent_green;
    static const ofColor off_white;
};
