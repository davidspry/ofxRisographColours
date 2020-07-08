#pragma once

#include "ofMain.h"

/// \brief A library of colours based on Risograph inks represented as ofColor objects.

class ofxRisographColours
{
private:
    const static unordered_map<string, ofColor> colours;
    const static unordered_map<string, ofColor> init_map();

public:
    /// \brief  Retrieve a colour by name.
    /// \return The corresponding ofColor.
    /// \throw  An exception will be thrown if the given colour name cannot be found.
 
    [[nodiscard]] static ofColor get(const std::string colour) noexcept(false);
    
    /// \brief  Retrieve a colour by index.
    /// \return The corresponding ofColor.
    /// \throw  An exception will be thrown if a colour cannot be found at the given index.
    
    [[nodiscard]] static ofColor get(const int index) noexcept(false);
    
    /// \brief  Retrieve a randomly selected colour.
    /// \return A randomly selected ofColor.
    /// \author 'sbabbi' <https://stackoverflow.com/a/27027557>

    [[nodiscard]] static ofColor random();
};
