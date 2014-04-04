#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>

class Game {
	public:
		Game();
		void run();

	private:
		void processEvents();
		void update();
		void render();

		sf::RenderWindow mWindow;
		sf::CircleShape mPlayer;
};


#endif