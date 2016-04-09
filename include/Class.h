/*
 * Class.h
 *
 *  Created on: Apr 7, 2016
 *      Author: Riley
 */

#ifndef CLASS_H_
#define CLASS_H_

#include <SFML/Graphics/Color.hpp>

class Class {
public:
	Class();
	int id, str, skill, dex, speed, def, arm, hp;
	sf::Color color;
	static const Class Barbarian;
	static const Class Technist;
	static const Class Mage;
	static const Class Rogue;
	static const Class Knight;
private:
	Class(int id, int str, int skill, int dex,
			int speed, int def, int arm, int hp,
			sf::Color color);
};

#endif /* CLASS_H_ */
