#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "ofxHapPlayer.h"

// OSC
#define HOST "127.0.0.1"
#define PORT 8000

// HAP
#define VIDEO_NUMBER 24

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    // debug
    // OSC
    void drawAllPlayers();
    // HAP
    void dumpOSC(ofxOscMessage m);
    
    // OSC
    ofxOscReceiver receiver;

    // HAP
    ofxHapPlayer players[VIDEO_NUMBER];
    int drawingVideoId;
};
