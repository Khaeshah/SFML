#include "Game.h"

//Constructor
Game::Game() : mWindow(sf::VideoMode(640,480), "SFML Application"),mPlayer() {
	mPlayer.setRadius(40.f);
	mPlayer.setPosition(100.f,100.f);
	mPlayer.setFillColor(sf::Color::Yellow);
}


void Game::run() {
	while(mWindow.isOpen()) {
		processEvents();
		update();
		render();
	}
}

void Game::processEvents() {
	sf::Event event;
	while(mWindow.pollEvent(event)) {
        switch(event.type) {
        case sf::Event::KeyPressed:
            handlePlayerInput(event.key.code,true);
            break;
        case sf::Event::KeyReleased:
            handlePlayerInput(event.key.code,false);
            break;
        case sf::Event::Closed:
            mWindow.close();
            break;
        }
    }
}

void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed) {
    if (key == sf::Keyboard::W) mIsMovingUp = isPressed;
    if (key == sf::Keyboard::S) mIsMovingDown = isPressed;
    if (key == sf::Keyboard::A) mIsMovingLeft = isPressed;
    if (key == sf::Keyboard::D) mIsMovingRight = isPressed;
}

void Game::update() {
    sf::Vector2f(0.f,0.f);
    if (mIsMovingUp) movement.y -= 1.f;
    if (mIsMovingDown) movement.y += 1.f;
    if (mIsMovingLeft) movement.x -= 1.f;
    if (mIsMovingRight) movement.x += 1.f;
    mPlayer.move(movement);
}

void Game::render() {
	mWindow.clear();
	mWindow.draw(mPlayer);
	mWindow.display();
}
