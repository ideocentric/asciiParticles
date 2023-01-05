#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    asciivid.setup();
    //font.load("fonts/Inconsolata-Regular.ttf", 12);
    //text = "Hello";
    ofBackground(0, 0, 0);
    camera.setup(1920, 1080);
    camera.setDesiredFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    camera.update();
    if(camera.isFrameNew()) {
        asciivid.update(camera.getPixels());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    string ascii = "$@@B%%88&&&WWMM##HHKK956432**wwmmoosahhkkbbddppqqZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;;;;::::,,,,,\"\"\"\"\"^^^^^`````''''''.......       ";
    //string ascii = "    ````....----'''::__,,^^=;><+!rc*/z?sLTv)J7(|Fi{C}fI31tlu[neoZ5Yxjya]2ESwqkP6h9d4VpOGbUAKXHm8RD#$Bg0MNWQ%&@";
/*    int w, h,lh;
    lh = font.getLineHeight();
    w = 9;
    h = 15;
    image.setFromPixels(camera.getPixels());
    
    // perlin noise scalar
    float scaleX = 0.0007;
    float scaleY = 0.0008;
    float posX0 = 22.2;
    float posY0 = 43.7;
    float t = ofGetElapsedTimef();
    // end perlin noise
    
    for(int x=0; x < image.getWidth(); x += w) {
        for(int y=0; y < image.getHeight(); y += h) {
            ofColor color = image.getPixels().getColor(x, y);
            int brightness = color.getBrightness();
            int hue = color.getHue();
            int saturation = color.getSaturation();
            float value = ofNoise(x*scaleX+posX0, y*scaleY + posY0, t * 0.1 + 445.6);
            //int i = ofMap(brightness*value, 0, 255, 0, ascii.length());
            int i = ofMap(brightness*value, 0, 255, ascii.length(), 0);
            string s(1, ascii[i]);
            ofColor c;
            c.setHsb(hue, saturation, brightness);
            //ofSetColor(c);
            ofColor flame;
            //int fhue = (int) 40*ofNoise(t * 0.001 + 759.3);
            int fhue = (int) ofRandom(0,25);
            flame.setHsb(fhue, 255, 200);
            ofSetColor(flame);
            font.drawString(s, x, y);
        }
    } */
    asciivid.draw();
    ofSetColor(255);
    ofDrawBitmapString(ofToString( ofGetFrameRate() ), 10,15);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
