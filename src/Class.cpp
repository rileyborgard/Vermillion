/*
 * Class.cpp
 *
 *  Created on: Apr 7, 2016
 *      Author: Riley
 */

#include <Class.h>

const Class Class::Barbarian = Class(0, 8, 5, 5, 5, 10, 18, 13, sf::Color::Blue);
const Class Class::Technist = Class(1, 5, 7, 7, 5, 13, 15, 6, sf::Color::Green);
const Class Class::Mage = Class(2, 4, 8, 3, 5, 11, 14, 7, sf::Color::Black);
const Class Class::Rogue = Class(3, 5, 7, 6, 7, 14, 14, 6, sf::Color::Red);
const Class Class::Knight = Class(4, 7, 6, 6, 6, 13, 17, 8, sf::Color::Yellow);

Class::Class() {
	id = 0;
	str = 0;
	skill = 0;
	dex = 0;
	speed = 0;
	def = 0;
	arm = 0;
	hp = 0;
	color = sf::Color::Black;
}

Class::Class(int id, int str, int skill, int dex, int speed, int def, int arm, int hp, sf::Color color) {
	this->id = id;
	this->str = str;
	this->skill = skill;
	this->dex = dex;
	this->speed = speed;
	this->def = def;
	this->arm = arm;
	this->hp = hp;
	this->color = color;
}
