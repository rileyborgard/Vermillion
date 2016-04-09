/*
 * Unit.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: Riley
 */

#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Transform.hpp>
#include <Unit.h>
#include <sstream>

Unit::Unit(Class base, sf::Vector2f pos) {
	setPosition(pos.x, pos.y);
	scale(5, 5);
	shape = sf::CircleShape(1, 30);
	shape.setPosition(-1, -1);
	shape.setFillColor(base.color);
	this->base = base;
}

void Unit::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	states.transform *= getTransform();
	target.draw(shape, states);
}

void Unit::setColor(sf::Color color) {
	shape.setFillColor(color);
}

std::string Unit::getStats() {
	std::stringstream sstream;
	switch(base.id) {
	case 0:
		sstream << "Barbarian";
		break;
	case 1:
		sstream << "Technist";
		break;
	case 2:
		sstream << "Mage";
		break;
	case 3:
		sstream << "Rogue";
		break;
	case 4:
		sstream << "Knight";
		break;
	}
	sstream << "\nStr: " << base.str
			<< "\nSkill: " << base.skill
			<< "\nDex: " << base.dex
			<< "\nSpeed: " << base.speed
			<< "\nDef: " << base.def
			<< "\nArm: " << base.arm
			<< "\nHp: " << base.hp;
	return sstream.str();
}

