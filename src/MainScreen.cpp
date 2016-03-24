/*
 * MainScreen.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#include <MainScreen.h>
#include <SFML/Window/Mouse.hpp>
#include <cmath>

void MainScreen::restart(sf::RenderWindow &window) {
	tileset.loadFromFile("tileset.png");
	map = new TileMap(tileset, 100, 100, 16, 32);
}
void MainScreen::update(sf::RenderWindow &window, float delta) {
	window.draw(*map);
}
void MainScreen::event(sf::Event event) {
	switch(event.type) {
	case sf::Event::MouseMoved:
		if(sf::Mouse::isButtonPressed(sf::Mouse::Middle))
			map->move(sf::Vector2f(event.mouseMove.x, event.mouseMove.y) - mousePosition);
		mousePosition = sf::Vector2f(event.mouseMove.x, event.mouseMove.y);
		break;
	case sf::Event::MouseWheelMoved:
		float scale = std::pow(1.1, event.mouseWheel.delta);
		if(map->getScale().x * scale > 10 || map->getScale().y * scale < 0.1)
			scale = 1;
		map->scale(scale, scale);
		map->setPosition(mousePosition + scale * (map->getPosition() - mousePosition));
		break;
	}
}
