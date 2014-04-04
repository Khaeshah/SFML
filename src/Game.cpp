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
		if (event.type == sf::Event::Closed) mWindow.close();
	}
}

void Game::update() {

}

void Game::render() {
	mWindow.clear();
	mWindow.draw(mPlayer);
	mWindow.display();
}