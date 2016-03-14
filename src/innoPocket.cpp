#include "innoPocket.h"

namespace inno{
    
    enum COLOR {
        WHITE      ,
        RED        ,
        ORANGE     ,
        YELLOW     ,
        GREEN      ,
        BLUE       ,
        LIGHTBLUE  ,
        PINK       ,
    };
    vector<string > colorString = {
            "white"    ,
            "red"      ,
            "orange"   ,
            "yellow"   ,
            "green"    ,
            "blue"     ,
            "lightblue",
            "pink"     //
    };
    vector<ofColor> getColors(){
        vector<ofColor> colors(8);
        colors[0] = ofColor::white    ;
        colors[1] = ofColor::red      ;
        colors[2] = ofColor::orange   ;
        colors[3] = ofColor::yellow   ;
        colors[4] = ofColor::green    ;
        colors[5] = ofColor::blue     ;
        colors[6] = ofColor::lightBlue;
        colors[7] = ofColor::pink     ;
        
        return colors;
    }
    
    vector<string >getColorStrings(){
        vector<string > colorString{
            "white"    ,
            "red"      ,
            "orange"   ,
            "yellow"   ,
            "green"    ,
            "blue"     ,
            "lightblue",
            "pink"     //
        };
        return colorString;
    }
    
    ofColor stringToColor(string s){
        if(s == "white"    ) return ofColor::white    ;
        if(s == "red"      ) return ofColor::red      ;
        if(s == "orange"   ) return ofColor::orange   ;
        if(s == "yellow"   ) return ofColor::yellow   ;
        if(s == "green"    ) return ofColor::green    ;
        if(s == "blue"     ) return ofColor::blue     ;
        if(s == "lightblue") return ofColor::lightBlue;
        if(s == "pink"     ) return ofColor::pink     ;
        
        return ofColor::white;
    }
    string colorToString(ofColor c) {
       if(c == ofColor::white    ) return "white"     ;
       if(c == ofColor::red      ) return "red"       ;
       if(c == ofColor::orange   ) return "orange"    ;
       if(c == ofColor::yellow   ) return "yellow"    ;
       if(c == ofColor::green    ) return "green"     ;
       if(c == ofColor::blue     ) return "blue"      ;
       if(c == ofColor::lightBlue) return "lightblue" ;
       if(c == ofColor::pink     ) return "pink"      ;
        
        return "white";
    }
}