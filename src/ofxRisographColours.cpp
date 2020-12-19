#include "ofxRisographColours.hpp"

const ofColor ofxRisographColours::get(const int index) noexcept(false)
{
    if (!(index < getNumberOfColours() && index >= 0))
        throw std::out_of_range(INDEX_ERROR);

    return *(std::next(colours.begin(), index)->second);
}

const ofColor ofxRisographColours::get(const std::string colour) noexcept(false)
{
    const auto target = colours.find(colour);
    const bool exists = target != colours.end();
    
    if (!exists)
        throw std::out_of_range(COLOR_ERROR);
    
    return *(target->second);
}

const int ofxRisographColours::getNumberOfColours() noexcept
{
    return colours.size();
}

const ofColor ofxRisographColours::random()
{
    const auto upperBound = getNumberOfColours();
    const auto choice     = static_cast<int>(ofRandom(upperBound));

    return get(choice);
}

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
