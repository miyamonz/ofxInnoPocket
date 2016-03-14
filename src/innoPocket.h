#pragma once
#include "ofMain.h"

namespace inno {
    int colorNum = 8;
    
    vector<ofColor > getColors();
    vector<string >  getColorStrings();
    vector<string >  getGoboStrings();
    ofColor stringToColor(string s);
    
    string colorToString(ofColor c);
    
}