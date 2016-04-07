/*
 * TileMap.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#include <Class.h>
#include <Map.h>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Transform.hpp>
#include <SFML/System/Vector2.hpp>
#include <cstdlib>

Map::Map() {
	rect = sf::RectangleShape(sf::Vector2f(410, 410));
	rect.setPosition(-5, -5);
	rect.setFillColor(sf::Color::White);
	setOrigin(200, 200);
	for(int i = 0; i < 20; i++) {
		switch(std::rand() % 5) {
		case 0:
			units.push_back(Unit(Class::Barbarian, sf::Vector2f(std::rand()%400, std::rand()%400)));
			break;
		case 1:
			units.push_back(Unit(Class::Technist, sf::Vector2f(std::rand()%400, std::rand()%400)));
			break;
		case 2:
			units.push_back(Unit(Class::Mage, sf::Vector2f(std::rand()%400, std::rand()%400)));
			break;
		case 3:
			units.push_back(Unit(Class::Rogue, sf::Vector2f(std::rand()%400, std::rand()%400)));
			break;
		case 4:
			units.push_back(Unit(Class::Knight, sf::Vector2f(std::rand()%400, std::rand()%400)));
			break;
		}
	}
}

void Map::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	states.transform *= getTransform();
	target.draw(rect, states);
	for(int i = 0; i < units.size(); i++)
		target.draw(units[i], states);
}
