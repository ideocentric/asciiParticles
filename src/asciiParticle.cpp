//
//  asciiParticle.cpp
//  asciiParticles
//
//  Created by Matt Comeione on 1/4/23.
//

#include "asciiParticle.hpp"

void asciiParticle::setup() {
    font.load("fonts/Inconsolata-Regular.ttf", 12);
}


void asciiParticle::update(ofPixels pixels) {
    image.setFromPixels(pixels);
}


void asciiParticle::draw() {
    int w = 9;
    int h = 15;

    // perlin noise scalar
    float scaleX = 0.0007;
    float scaleY = 0.0008;
    float posX0 = 22.2;
    float posY0 = 43.7;
    float t = ofGetElapsedTimef();
    // end perlin noise

    for(int x=0; x < image.getWidth(); x += w) {
        for(int y=0; y < image.getHeight(); y += h) {
            color = image.getPixels().getColor(x, y);
            int brightness = color.getBrightness();
            int hue = color.getHue();
            int saturation = color.getSaturation();
            //int i = ofMap(brightness, 0, 255, 0, ascii.length());
            int i;
            if(noise) {
                float value = ofNoise(x*scaleX+posX0, y*scaleY + posY0, t * 0.1 + 445.6);
                i = ofMap(brightness*value, 0, 255, ascii.length(), 0);
            } else {
                i = ofMap(brightness, 0, 255, ascii.length(), 0);
            }
            string s(1, ascii[i]);
            ofColor c;
            c.setHsb(hue, saturation, brightness);
            ofSetColor(c);
            font.drawString(s, x, y);
        }
    }
}

asciiParticle::asciiParticle() {
    noise = true;
}

asciiParticle::~asciiParticle() {
    //
}
