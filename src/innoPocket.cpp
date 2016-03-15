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
    vector<string >getGoboStrings(){
        return {
            "open"      ,
            "scope"     ,
            "radiobig"  ,
            "radiosmall",
            "stone"     ,
            "bubble"    ,
            "wind"      ,
            "mirror"
        };
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
    
    int getDmxFromColorString(string color){
        int index = ofFind(getColorStrings(), color);
        if(index == 0) return 3;
        if(index == 1) return 10;
        if(index == 2) return 17;
        if(index == 3) return 24;
        if(index == 4) return 31;
        if(index == 5) return 36;
        if(index == 6) return 45;
        if(index == 7) return 52;
        return -1;
    }
    int getDmxFromStrobe(float strobe){
        return ofMap(strobe, 0,100,16,132);
    }
    int getDmxFromDimmer(float dimmer){
        return dimmer;
    }
    int getDmxFromGobo(string gobo){
        int index = ofFind(getGoboStrings(), gobo);
        if(index == 0) return 5;
        if(index == 1) return 10;
        if(index == 2) return 20;
        if(index == 3) return 30;
        if(index == 4) return 35;
        if(index == 5) return 45;
        if(index == 6) return 50;
        if(index == 7) return 70;
        return -1;
    }


}
