/*
 * Unit.h
 *
 *  Created on: Apr 4, 2016
 *      Author: Riley
 */

#ifndef UNIT_H_
#define UNIT_H_

#include <Class.h>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/System/Vector2.hpp>
#include <string>

//enum class Class {Barbarian, Technist, Mage, Rogue, Knight};

class Unit: public sf::Drawable, public sf::Transformable {
public:
	Unit(Class base, sf::Vector2f pos);
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	void setColor(sf::Color color);
	std::string getStats();
private:
	Class base;
	sf::CircleShape shape;
};

#endif /* UNIT_H_ */
