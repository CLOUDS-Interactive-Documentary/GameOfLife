//
//  CloudsVisualSystemGameOfLife.cpp
//

#include "CloudsVisualSystemGameOfLife.h"

//These methods let us add custom GUI parameters and respond to their events
void CloudsVisualSystemGameOfLife::selfSetupGui(){

	customGui = new ofxUISuperCanvas("CUSTOM", gui);
	customGui->copyCanvasStyle(gui);
	customGui->copyCanvasProperties(gui);
	customGui->setName("Custom");
	customGui->setWidgetFontSize(OFX_UI_FONT_SMALL);
	
	customGui->addSlider("Custom Float 1", 1, 1000, &customFloat1);
	customGui->addSlider("Custom Float 2", 1, 1000, &customFloat2);
	customGui->addButton("Custom Button", false);
	customGui->addToggle("Custom Toggle", &customToggle);
	
	ofAddListener(customGui->newGUIEvent, this, &CloudsVisualSystemGameOfLife::selfGuiEvent);
	guis.push_back(customGui);
	guimap[customGui->getName()] = customGui;
}

void CloudsVisualSystemGameOfLife::selfGuiEvent(ofxUIEventArgs &e){
	if(e.widget->getName() == "Custom Button"){
		cout << "Button pressed!" << endl;
	}
}

//Use system gui for global or logical settings, for exmpl
void CloudsVisualSystemGameOfLife::selfSetupSystemGui(){
	
}

void CloudsVisualSystemGameOfLife::guiSystemEvent(ofxUIEventArgs &e){
	
}
//use render gui for display settings, like changing colors
void CloudsVisualSystemGameOfLife::selfSetupRenderGui(){

}

void CloudsVisualSystemGameOfLife::guiRenderEvent(ofxUIEventArgs &e){
	
}

// selfSetup is called when the visual system is first instantiated
// This will be called during a "loading" screen, so any big images or
// geometry should be loaded here
void CloudsVisualSystemGameOfLife::selfSetup(){

	//this is how to load assets
//	someImage.loadImage( getVisualSystemDataPath() + "images/someImage.png";
	
}

// selfPresetLoaded is called whenever a new preset is triggered
// it'll be called right before selfBegin() and you may wish to
// refresh anything that a preset may offset, such as stored colors or particles
void CloudsVisualSystemGameOfLife::selfPresetLoaded(string presetPath){
	
}

// selfBegin is called when the system is ready to be shown
// this is a good time to prepare for transitions
// but try to keep it light weight as to not cause stuttering
void CloudsVisualSystemGameOfLife::selfBegin(){
	// START STUFF
}

//do things like ofRotate/ofTranslate here
//any type of transformation that doesn't have to do with the camera
void CloudsVisualSystemGameOfLife::selfSceneTransformation(){
	
}

//normal update call
void CloudsVisualSystemGameOfLife::selfUpdate(){
	// CHANGE STUFF
}

// selfDraw draws in 3D using the default ofEasyCamera
// you can change the camera by returning getCameraRef()
void CloudsVisualSystemGameOfLife::selfDraw(){
	
}

// draw any debug stuff here
void CloudsVisualSystemGameOfLife::selfDrawDebug(){
	
}

// or you can use selfDrawBackground to do 2D drawings that don't use the 3D camera
void CloudsVisualSystemGameOfLife::selfDrawBackground(){
		// DRAW STUFF
	//use this to Draw 2D stuff
	
	//turn the background refresh off
	//bClearBackground = false;
	
}
// this is called when your system is no longer drawing.
// Right after this selfUpdate() and selfDraw() won't be called any more
void CloudsVisualSystemGameOfLife::selfEnd(){

	
}
// this is called when you should clear all the memory and delet anything you made in setup
void CloudsVisualSystemGameOfLife::selfExit(){
	
}

//events are called when the system is active
//Feel free to make things interactive for you, and for the user!
void CloudsVisualSystemGameOfLife::selfKeyPressed(ofKeyEventArgs & args){
	
}
void CloudsVisualSystemGameOfLife::selfKeyReleased(ofKeyEventArgs & args){
	
}

void CloudsVisualSystemGameOfLife::selfMouseDragged(ofMouseEventArgs& data){
	
}

void CloudsVisualSystemGameOfLife::selfMouseMoved(ofMouseEventArgs& data){
	
}

void CloudsVisualSystemGameOfLife::selfMousePressed(ofMouseEventArgs& data){
	
}

void CloudsVisualSystemGameOfLife::selfMouseReleased(ofMouseEventArgs& data){
	
}