#include "ofApp.h"
#include <random>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
	/*//uniform
	int minx=0 , miny = 0;
	int maxy=1200 , maxx = 970;
	
	random_device rd;
	mt19937 en(rd());
	
	uniform_int_distribution <int> my_disk(minx,maxx);
	uniform_int_distribution <int> my_lisk(miny,maxy);
	
	for(int i=0;i<20;i++)
	X.push_back (my_disk(en));
	
	for(int i=0;i<20;i++)
	Y.push_back (my_lisk(en));*/
	
	
	float meanx=1000.0f , sd =15.0f , meany= 800.0f;
	random_device rd;
	mt19937 en(rd());
	normal_distribution <> my_disk (meanx,sd);
	normal_distribution <> my_lisk (meany,sd);
	
	for(int i=0;i<20;i++)
	X.push_back (my_disk(en));
	
	for(int i=0;i<20;i++)
	Y.push_back (my_lisk(en));
	
	
	
	
	
	

jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
//X = { };// set of x-coordinates for jewel
//Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
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
