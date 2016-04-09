/*
 * MainScreen.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#include <MainScreen.h>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>
#include <cmath>

void MainScreen::restart(sf::RenderWindow &window) {
	map = new Map();
	map->setPosition(0.5f * sf::Vector2f(window.getSize()));
}
void MainScreen::update(sf::RenderWindow &window, float delta) {
	map->click(sf::Vector2f(sf::Mouse::getPosition(window)));
	map->update(window, delta);
	window.draw(*map);
}
void MainScreen::event(sf::RenderWindow &window, sf::Event event) {
	switch(event.type) {
	case sf::Event::KeyPressed:
		if(event.key.code == sf::Keyboard::Space) {
			map->setScale(1, 1);
			map->setPosition(0.5f * sf::Vector2f(window.getSize()));
		}
		break;
	case sf::Event::MouseButtonPressed:

		break;
	case sf::Event::MouseMoved:
		if(sf::Mouse::isButtonPressed(sf::Mouse::Middle))
			map->move(sf::Vector2f(event.mouseMove.x, event.mouseMove.y) - mousePosition);
		mousePosition = sf::Vector2f(event.mouseMove.x, event.mouseMove.y);
		break;
	case sf::Event::MouseWheelMoved:
		float scale = std::pow(1.1, event.mouseWheel.delta);
		if(map->getScale().x * scale > 10)
			scale = 10.0f / map->getScale().x;
		if(map->getScale().x * scale < 1)
			scale = 1.0f / map->getScale().x;
		map->scale(scale, scale);
		map->setPosition(mousePosition + scale * (map->getPosition() - mousePosition));
		break;
	}
}
