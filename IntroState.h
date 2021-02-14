#pragma once
#include "ofSoundPlayer.h"
#include "ofTrueTypeFont.h"
#include "GameState.h"
#include "ofGraphics.h"
#include "ofAppRunner.h"
#include "PlayState.h"
#include "GameStateManager.h"

class IntroState : public GameState {
public:

	ofSoundPlayer introMusic;
	ofTrueTypeFont introFont;
	bool showPressKey;
	int y;

	void setup();
	void update();
	void draw();
	void exit();

	void keyPressed(int key);
	void keyReleased(int key);

	void mouseMoved(int x, int y);
	void moveDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
};