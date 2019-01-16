#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "ofxOsc.h"
#include "ofxImGui.h"
#include "ofxNetwork.h"

// listening port
#define PORT 6000


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
    
        //OSC recording
        void setRecord();
        void recordOSC(ofxOscMessage m);
        bool isRecording;
        ofxOscBundle recordBundle;
        //map<int, ofxOscBundle> OSCframes;
        map<int, ofxOscMessage> OSCframes;
    
        ofxOscReceiver receiver;
        ofxUDPManager udpConnection;
        ofxUDPManager udpSender;
        
    
        //GUI
        ofxImGui::Gui gui;
        bool guiVisible;
        bool mouseOverGui;
        void doGui();
        ImFont* fontDefault;
        ImFont* fontSubTitle;
        ImFont* fontTitle;
		
};