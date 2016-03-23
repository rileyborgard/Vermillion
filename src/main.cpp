/*
 * main.cpp
 *
 *  Created on: Mar 22, 2016
 *      Author: Riley
 */

#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "George's Game", sf::Style::Close);
	window.setVerticalSyncEnabled(true);
	sf::Clock clock;
	sf::Text sampleText;
	sf::Font font;
	float time, delta;
	if(!font.loadFromFile("arial.ttf")) {
		cout << "Failed to load font" << endl;
	}
	sampleText.setString("SüS");
	sampleText.setColor(sf::Color::White);
	sampleText.setFont(font);
	sampleText.setCharacterSize(100);
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
				break;
			}
		}
		delta = clock.restart().asSeconds();
		time += delta;
		window.clear(sf::Color::Black);
		sampleText.setPosition(400+100*cos(5*time)-sampleText.getLocalBounds().width/2,
							   300+50*sin(10*time)-sampleText.getLocalBounds().height/2);
		sampleText.setColor(sf::Color(192+64*sin(5*time), 192+64*cos(5*time), 0));
		window.draw(sampleText);
		window.display();
	}
}
