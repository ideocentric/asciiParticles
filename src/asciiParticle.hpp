//
//  asciiParticle.hpp
//  asciiParticles
//
//  Created by Matt Comeione on 1/4/23.
//

#ifndef asciiParticle_hpp
#define asciiParticle_hpp

#include "ofMain.h"

class asciiParticle {
public:
    ofColor color;
    ofTrueTypeFont font;
    bool noise;
    ofImage image;
    string ascii = "$@@B%%88&&&WWMM##HHKK956432**wwmmoosahhkkbbddppqqZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;;;;::::,,,,,\"\"\"\"\"^^^^^`````''''''.......       ";
    
    asciiParticle();
    ~asciiParticle();
    void setup();
    void update(ofPixels pixels);
    void draw();
    
};

#endif /* asciiParticle_hpp */
