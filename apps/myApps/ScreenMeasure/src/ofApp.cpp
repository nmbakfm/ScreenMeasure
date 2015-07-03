#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    startX = 0;
    endX = 0;
    
    ofShowCursor();
    
    ofBackground(0);
    
    font.loadFont("Helvetica Neue Bold", 50);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    ofRect(startX, 0, endX-startX, ofGetHeight());
    
    ofSetColor(255, 0, 0);
    stringstream ss;
    ss << "startX:\t" << startX << endl << "endX:\t" << endX << endl << "width:\t" << abs(startX - endX);
    font.drawString(ss.str(), (ofGetWidth() - font.stringWidth(ss.str()))/2, (ofGetHeight() - font.stringHeight(ss.str()))/2);
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
    endX = x;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    startX = x;
    endX = x;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    endX = x;
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
