#include "IntroState.h"

void IntroState::setup()
{
	introFont.load("ITCEDSCR.TTF", 80);
	//introMusic.load("The Binding of Isaac Antibirth OST Shadowdance (Sheol).mp3");
	showPressKey = false;
	//introMusic.setLoop(true);
	//introMusic.play();
	y = ofGetHeight();
}

void IntroState::update()
{
	if (y > 200) {
		y -= 0.5;
	}
	else {
		showPressKey = true;
	}
}

void IntroState::draw()
{
	ofDrawBitmapString("Intro State", ofGetWidth() / 2, 40);
	ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, 50);
}

void IntroState::exit()
{
	delete this;
}

void IntroState::keyPressed(int key)
{
	if (key == 'a' || key == 'A') {
		PlayState *playState = new PlayState();
		GameStateManager *stateMgr = GameStateManager::getInstance();
		changeState(playState, stateMgr);
	}
}

void IntroState::keyReleased(int key){
}

void IntroState::mouseMoved(int x, int y)
{
}

void IntroState::moveDragged(int x, int y, int button)
{
}

void IntroState::mousePressed(int x, int y, int button)
{
}

void IntroState::mouseReleased(int x, int y, int button)
{
}
