/*
 * TileMap.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#include <Class.h>
#include <Map.h>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Transform.hpp>
#include <cstdlib>

Map::Map() {
	panel.index = -1;
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
	if(panel.index > -1) {
		target.draw(panel, states);
	}
}

void Map::update(sf::RenderWindow &window, float delta) {
	panel.setScale(1 / getScale().x, 1 / getScale().y);
	panel.setPosition(units[panel.index].getPosition() + sf::Vector2f(5, -5));
	sf::Vector2f pos = getTransform().transformPoint(panel.getPosition());
	sf::Vector2f size = panel.getRectSize();
	if(pos.x + size.x > window.getSize().x)
		pos.x = window.getSize().x - size.x;
	if(pos.y + size.y > window.getSize().y)
		pos.y = window.getSize().y - size.y;
	panel.setPosition(getInverseTransform().transformPoint(pos));
}

void Map::click(sf::Vector2f point) {
	point = getInverseTransform().transformPoint(point);
	sf::Vector2f point2;
	for(int i = 0; i < units.size(); i++) {
		point2 = units[i].getInverseTransform().transformPoint(point);
		if(point2.x * point2.x + point2.y * point2.y < 1) {
			panel.index = i;
			panel.setText(units[i].getStats());
			return;
		}
	}
	panel.index = -1;
	panel.setText("");
}
