#pragma once

#include "ofMain.h"

/// @brief A library of `ofColor` objects based on Risograph inks.

class ofxRisographColours
{
public:
    /// @brief Retrieve a colour by index.
    /// @param index The index of the `ofColor` to be returned.
    /// @throw An exception will be thrown if the given index is out of range.
    
    [[nodiscard]] inline static const ofColor get(const int index) noexcept(false)
    {
        if (!(index < getNumberOfColours() && index >= 0))
            throw std::out_of_range("The given index is out of range.");

        return *(colours[index]);
    }
    
    /// @brief Retrieve a randomly selected colour.

    [[nodiscard]] inline static const ofColor random() noexcept
    {
        const int limit = getNumberOfColours();
        const int index = static_cast<int>(ofRandom(limit));

        return get(index);
    }

    /// @brief Retrieve the number of available colours.
    
    [[nodiscard]] inline static const int getNumberOfColours() noexcept
    {
        return static_cast<int>(colours.size());
    }

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
    
private:
    static const std::array<const ofColor*, 81> colours;
};
