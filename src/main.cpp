
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include <MainScreen.h>

using namespace std;

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "Vermillion", sf::Style::Close);
	window.setVerticalSyncEnabled(true);
	MainScreen screen;
	screen.restart(window);
	sf::Clock clock;
	float delta;
	while(window.isOpen()) {
		sf::Event event;
		while(window.pollEvent(event)) {
			switch(event.type) {
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if(event.key.code == sf::Keyboard::Escape)
					window.close();
				break;
			default:
				screen.event(event);
				break;
			}
		}
		delta = clock.restart().asSeconds();
		window.clear(sf::Color::Black);
		screen.update(window, delta);
		window.display();
	}
}
