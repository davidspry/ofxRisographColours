#include "ofxRisographColours.hpp"

const unordered_map<std::string, const ofColor*> ofxRisographColours::colours = init_map();

const unordered_map<std::string, const ofColor*> ofxRisographColours::init_map()
{
    unordered_map<std::string, const ofColor*> um;
    um.max_load_factor(0.5f);
    um.reserve(80);
    um =
    {
        {"black",               &(ofxRisographColours::black)},
        {"burgundy",            &(ofxRisographColours::burgundy)},
        {"blue",                &(ofxRisographColours::blue)},
        {"green",               &(ofxRisographColours::green)},
        {"medium_blue",         &(ofxRisographColours::medium_blue)},
        {"bright_red",          &(ofxRisographColours::bright_red)},
        {"risofederal_blue",    &(ofxRisographColours::risofederal_blue)},
        {"purple",              &(ofxRisographColours::purple)},
        {"teal",                &(ofxRisographColours::teal)},
        {"flat_gold",           &(ofxRisographColours::flat_gold)},
        {"hunter_green",        &(ofxRisographColours::hunter_green)},
        {"red",                 &(ofxRisographColours::red)},
        {"brown",               &(ofxRisographColours::brown)},
        {"yellow",              &(ofxRisographColours::yellow)},
        {"marine_red",          &(ofxRisographColours::marine_red)},
        {"orange",              &(ofxRisographColours::orange)},
        {"fluorescent_pink",    &(ofxRisographColours::fluorescent_pink)},
        {"light_gray",          &(ofxRisographColours::light_gray)},
        {"metallic_gold",       &(ofxRisographColours::metallic_gold)},
        {"crimson",             &(ofxRisographColours::crimson)},
        {"fluorescent_orange",  &(ofxRisographColours::fluorescent_orange)},
        {"cornflower",          &(ofxRisographColours::cornflower)},
        {"sky_blue",            &(ofxRisographColours::sky_blue)},
        {"sea_blue",            &(ofxRisographColours::sea_blue)},
        {"lake",                &(ofxRisographColours::lake)},
        {"indigo",              &(ofxRisographColours::indigo)},
        {"midnight",            &(ofxRisographColours::midnight)},
        {"mist",                &(ofxRisographColours::mist)},
        {"granite",             &(ofxRisographColours::granite)},
        {"charcoal",            &(ofxRisographColours::charcoal)},
        {"smoky_teal",          &(ofxRisographColours::smoky_teal)},
        {"steel",               &(ofxRisographColours::steel)},
        {"slate",               &(ofxRisographColours::slate)},
        {"turquoise",           &(ofxRisographColours::turquoise)},
        {"emerald",             &(ofxRisographColours::emerald)},
        {"grass",               &(ofxRisographColours::grass)},
        {"forest",              &(ofxRisographColours::forest)},
        {"spruce",              &(ofxRisographColours::spruce)},
        {"moss",                &(ofxRisographColours::moss)},
        {"sea_foam",            &(ofxRisographColours::sea_foam)},
        {"kelly_green",         &(ofxRisographColours::kelly_green)},
        {"light_teal",          &(ofxRisographColours::light_teal)},
        {"ivy",                 &(ofxRisographColours::ivy)},
        {"pine",                &(ofxRisographColours::pine)},
        {"lagoon",              &(ofxRisographColours::lagoon)},
        {"violet",              &(ofxRisographColours::violet)},
        {"orchid",              &(ofxRisographColours::orchid)},
        {"plum",                &(ofxRisographColours::plum)},
        {"raisin",              &(ofxRisographColours::raisin)},
        {"grape",               &(ofxRisographColours::grape)},
        {"scarlet",             &(ofxRisographColours::scarlet)},
        {"tomato",              &(ofxRisographColours::tomato)},
        {"cranberry",           &(ofxRisographColours::cranberry)},
        {"maroon",              &(ofxRisographColours::maroon)},
        {"raspberry_red",       &(ofxRisographColours::raspberry_red)},
        {"brick",               &(ofxRisographColours::brick)},
        {"light_lime",          &(ofxRisographColours::light_lime)},
        {"sunflower",           &(ofxRisographColours::sunflower)},
        {"melon",               &(ofxRisographColours::melon)},
        {"apricot",             &(ofxRisographColours::apricot)},
        {"paprika",             &(ofxRisographColours::paprika)},
        {"pumpkin",             &(ofxRisographColours::pumpkin)},
        {"bright_olive_green",  &(ofxRisographColours::bright_olive_green)},
        {"bright_gold",         &(ofxRisographColours::bright_gold)},
        {"copper",              &(ofxRisographColours::copper)},
        {"mahogany",            &(ofxRisographColours::mahogany)},
        {"bisque",              &(ofxRisographColours::bisque)},
        {"bubble_gum",          &(ofxRisographColours::bubble_gum)},
        {"light_mauve",         &(ofxRisographColours::light_mauve)},
        {"dark_mauve",          &(ofxRisographColours::dark_mauve)},
        {"wine",                &(ofxRisographColours::wine)},
        {"gray",                &(ofxRisographColours::gray)},
        {"coral",               &(ofxRisographColours::coral)},
        {"white",               &(ofxRisographColours::white)},
        {"aqua",                &(ofxRisographColours::aqua)},
        {"mint",                &(ofxRisographColours::mint)},
        {"clear_medium",        &(ofxRisographColours::clear_medium)},
        {"fluorescent_yellow",  &(ofxRisographColours::fluorescent_yellow)},
        {"fluorescent_red",     &(ofxRisographColours::fluorescent_red)},
        {"fluorescent_green",   &(ofxRisographColours::fluorescent_green)},
        {"off_white",           &(ofxRisographColours::off_white)}
    };

    return um;
}

const ofColor ofxRisographColours::get(const int index) noexcept(false)
{
    return *(std::next(colours.begin(), index)->second);
}

const ofColor ofxRisographColours::get(const std::string colour) noexcept(false)
{
    const auto get = colours.find(colour);

    if (get != colours.end())
        return *(get->second);
    
    throw std::out_of_range("[ofxRisographColours] The given colour name could not be found.");
}

const ofColor ofxRisographColours::random()
{
    int    bucket;
    size_t bucket_size;
    
    do    bucket = ofRandom(colours.bucket_count());
    while ((bucket_size = colours.bucket_size(bucket)) == 0);

    const auto colour = std::next(colours.begin(bucket), ofRandom(bucket_size));

    return *(colour->second);
}
