/*
 * TileMap.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#ifndef TILEMAP_H_
#define TILEMAP_H_

#include <Panel.h>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <Unit.h>
#include <vector>

class Map: public sf::Drawable, public sf::Transformable {
public:
	Map();
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	void update(sf::RenderWindow &window, float delta);
	void click(sf::Vector2f point);
private:
	sf::RectangleShape rect;
	std::vector<Unit> units;
	Panel panel;
};

#endif /* TILEMAP_H_ */
