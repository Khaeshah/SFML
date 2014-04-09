#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>

class Game : private sf::NonCopyable {
	public:
		Game();
		void run();

	private:

        void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
		void processEvents();
		void update(sf::Time elapsedTime);
        void updateStatistics(sf::Time elapsedTime);
        void render();


		static const float PlayerSpeed;
		static const sf::Time TimePerFrame;

		sf::RenderWindow mWindow;
        sf::Texture mTexture;
        sf::Sprite mPlayer;
        sf::Font mFont;
        sf::Text mStatisticsText;
        sf::Time mStatisticsUpdateTime;
        std::size_t mStatisticsNumFrames;

		bool mIsMovingUp;
		bool mIsMovingDown;
		bool mIsMovingLeft;
		bool mIsMovingRight;
};


#endif
