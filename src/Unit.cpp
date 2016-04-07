/*
 * Unit.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: Riley
 */

#include <Class.h>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Transform.hpp>
#include <Unit.h>

Unit::Unit(Class base, sf::Vector2f pos) {
	float radius = 5;
	shape = sf::CircleShape(radius, 30);
	shape.setPosition(pos.x - radius, pos.y - radius);
	shape.setFillColor(base.color);

	//set up base class and stats
	this->base = base;
	str = base.str;
	skill = base.skill;
	dex = base.dex;
	speed = base.speed;
	def = base.def;
	arm = base.arm;
	hp = base.hp;
}

void Unit::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	states.transform *= getTransform();
	target.draw(shape, states);
}

