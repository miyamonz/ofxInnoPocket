#pragma once
#include "ofMain.h"

namespace inno {
    const int colorNum = 8;
    
    vector<ofColor > getColors();
    vector<string >  getColorStrings();
    vector<string >  getGoboStrings();
    ofColor stringToColor(string s);
    
    string colorToString(ofColor c);
    
    int getDmxFromColorString(string color);
    int getDmxFromStrobe(float strobe);
    int getDmxFromDimmer(float dimmer);
    int getDmxFromGobo(string gobo);
}