#include "ofxRisographColours.hpp"

const unordered_map<string, ofColor> ofxRisographColours::colours = init_map();

const unordered_map<string, ofColor> ofxRisographColours::init_map()
{
    unordered_map<string, ofColor> um;
    um.max_load_factor(0.5);
    um.reserve(80);
    um =
    {
        {"black",               {0,0,0}},
        {"burgundy",            {145,78,114}},
        {"blue",                {0,120,191}},
        {"green",               {0,169,92}},
        {"medium_blue",         {50,85,164}},
        {"bright_red",          {241,80,96}},
        {"risofederal_blue",    {61,85,136}},
        {"purple",              {118,91,167}},
        {"teal",                {0,131,138}},
        {"flat_gold",           {187,139,65}},
        {"hunter_green",        {64,112,96}},
        {"red",                 {255,102,94}},
        {"brown",               {146,95,82}},
        {"yellow",              {255,232,0}},
        {"marine_red",          {210,81,94}},
        {"orange",              {255,108,47}},
        {"fluorescent_pink",    {255,72,176}},
        {"light_gray",          {136,137,138}},
        {"metallic_gold",       {172,147,110}},
        {"crimson",             {228,93,80}},
        {"fluorescent_orange",  {255,116,119}},
        {"cornflower",          {98,168,229}},
        {"sky_blue",            {73,130,207}},
        {"sea_blue",            {0,116,162}},
        {"lake",                {35,91,168}},
        {"indigo",              {67,80,96}},
        {"midnight",            {67,80,96}},
        {"mist",                {213,228,192}},
        {"granite",             {165,170,168}},
        {"charcoal",            {112,116,124}},
        {"smoky_teal",          {95,130,137}},
        {"steel",               {55,94,119}},
        {"slate",               {94,105,94}},
        {"turquoise",           {0,170,147}},
        {"emerald",             {25,151,93}},
        {"grass",               {57,126,88}},
        {"forest",              {81,110,90}},
        {"spruce",              {74,99,93}},
        {"moss",                {104,114,77}},
        {"sea_foam",            {98,194,177}},
        {"kelly_green",         {103,179,70}},
        {"light_teal",          {0,157,165}},
        {"ivy",                 {22,155,98}},
        {"pine",                {35,126,116}},
        {"lagoon",              {47,97,101}},
        {"violet",              {157,122,210}},
        {"orchid",              {187,118,207}},
        {"plum",                {132,89,145}},
        {"raisin",              {119,93,122}},
        {"grape",               {108,93,128}},
        {"scarlet",             {246,80,88}},
        {"tomato",              {210,81,94}},
        {"cranberry",           {209,81,122}},
        {"maroon",              {158,76,110}},
        {"raspberry_red",       {209,81,122}},
        {"brick",               {167,81,84}},
        {"light_lime",          {227,237,85}},
        {"sunflower",           {255,181,17}},
        {"melon",               {255,174,59}},
        {"apricot",             {246,160,77}},
        {"paprika",             {238,127,75}},
        {"pumpkin",             {255,111,76}},
        {"bright_olive_green",  {180,159,41}},
        {"bright_gold",         {186,128,50}},
        {"copper",              {189,100,57}},
        {"mahogany",            {142,89,90}},
        {"bisque",              {242,205,207}},
        {"bubble_gum",          {249,132,202}},
        {"light_mauve",         {230,181,201}},
        {"dark_mauve",          {189,140,166}},
        {"wine",                {145,78,114}},
        {"gray",                {146,141,136}},
        {"coral",               {255,142,145}},
        {"white",               {255,255,255}},
        {"aqua",                {94,200,229}},
        {"mint",                {130,216,213}},
        {"clear_medium",        {242,242,242}},
        {"fluorescent_yellow",  {255,233,22}},
        {"fluorescent_red",     {255,76,101}},
        {"fluorescent_green",   {68,214,44}},
        {"off_white",           {235,235,235}}
    };

    return um;
}

ofColor ofxRisographColours::get(const int index) noexcept(false)
{
    return std::next(colours.begin(), index)->second;
}

ofColor ofxRisographColours::get(const std::string colour) noexcept(false)
{
    const auto get = colours.find(colour);

    if (get != colours.end())
        return get->second;
    
    throw "[ofxRisographColours] The given colour name could not be found.";
}

ofColor ofxRisographColours::random()
{
    int    bucket;
    size_t bucket_size;
    
    do    bucket = ofRandom(colours.bucket_count());
    while ((bucket_size = colours.bucket_size(bucket)) == 0);

    const auto colour = std::next(colours.begin(bucket), ofRandom(bucket_size));

    return colour->second;
}
