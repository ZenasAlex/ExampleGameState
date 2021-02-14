#include "PlayState.h"
#include "IntroState.h"
#include "ofGraphics.h"
#include "ofAppRunner.h"
#include "GameStateManager.h"

void PlayState::setup()
{
}

void PlayState::update()
{
}

void PlayState::draw()
{
	ofDrawBitmapString("Play State", ofGetWidth() / 2, 40);
	ofRectMode(OF_RECTMODE_CENTER);
	ofDrawRectangle(100, 350, 350, 100);
}

void PlayState::exit()
{
}

void PlayState::keyPressed(int key)
{
	if (key == 'b' || key == 'B') {
		IntroState *introState = new IntroState();
		GameStateManager *stateMgr = GameStateManager::getInstance();
		changeState(introState, stateMgr);
	}
}

void PlayState::keyReleased(int key)
{
}

void PlayState::mouseMoved(int x, int y)
{
}

void PlayState::moveDragged(int x, int y, int button)
{
}

void PlayState::mousePressed(int x, int y, int button)
{
}

void PlayState::mouseReleased(int x, int y, int button)
{
}
