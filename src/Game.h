#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>

class Game {
	public:
		Game();
		void run();

	private:

        void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
		void processEvents();
		void update();
		void render();

		sf::RenderWindow mWindow;
		sf::CircleShape mPlayer;
        bool mIsMovingUp = false;
        bool mIsMovingDown = false;
        bool mIsMovingLeft = false;
        bool mIsMovingRight = false;
};


#endif
