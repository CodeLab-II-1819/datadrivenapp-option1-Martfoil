#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(29, 161, 242);

	//myfont.load("verdana.ttf", 30);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255, 255, 255); //all shapes for white
	ofDrawRectangle(250, 25, 525, 150); // x pos y pos width height
	ofDrawCircle(140, 100, 75); // x pos y pos radius size
	ofDrawCircle(875, 100, 75);
	ofDrawRectangle(50, 200, 200, 100);
	ofDrawRectangle(775, 200, 200, 100);
	ofDrawRectangle(50, 310, 200, 100);
	ofDrawRectangle(775, 310, 200, 100);
	ofDrawRectangle(50, 420, 200, 100);
	ofDrawRectangle(775, 420, 200, 100);
	ofDrawRectangle(50, 530, 200, 100);
	ofDrawRectangle(775, 530, 200, 100);
	ofDrawRectangle(50, 640, 200, 100);
	ofDrawRectangle(775, 640, 200, 100);
	ofSetColor(72, 209, 204); //all shapes for medium turquoise
	ofDrawRectangle(260, 35, 500, 130);
	ofDrawRectangle(60, 210, 180, 80);
	ofDrawRectangle(785, 210, 180, 80);
	ofDrawRectangle(60, 320, 180, 80);
	ofDrawRectangle(60, 430, 180, 80);
	ofDrawRectangle(60, 540, 180, 80);
	ofDrawRectangle(60, 650, 180, 80);
	ofDrawRectangle(785, 320, 180, 80);
	ofDrawRectangle(785, 430, 180, 80);
	ofDrawRectangle(785, 540, 180, 80);
	ofDrawRectangle(785, 650, 180, 80);
	ofSetColor(0, 0, 0); //sets colour to black
	ofDrawRectangle(260, 200, 500, 540);
	ofDrawBitmapString("Count total tweets", 75, 250); //outputs "text" onto screen x pos y pos
	ofDrawBitmapString("Count word politics", 75, 360);
	ofDrawBitmapString("Count word money", 75, 470);
	ofDrawBitmapString("Count word football", 75, 580);
	ofDrawBitmapString("Count word food", 75, 690);
	ofDrawBitmapString("Search find Uni", 800, 250);
	ofDrawBitmapString("Search find Brexit", 800, 360);
	ofDrawBitmapString("Search find Dreamworks", 785, 470);
	ofDrawBitmapString("Search find Paris", 800, 580);
	ofDrawBitmapString("Search find Uber", 800, 690);
	ofDrawBitmapString("TWITTER", 500, 70);
	ofDrawBitmapString("INTERROGATION", 480, 110);
	ofDrawBitmapString("PROGRAMME", 490, 150);
	ofSetColor(255, 0, 0); //sets color to red
	ofDrawBitmapString("Info", 120, 100);
	ofDrawBitmapString("Search", 850, 100);
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
