/*
 * TileMap.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#ifndef TILEMAP_H_
#define TILEMAP_H_

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <Unit.h>
#include <vector>

class Map: public sf::Drawable, public sf::Transformable {
public:
	Map();
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
private:
	sf::RectangleShape rect;
	std::vector<Unit> units;
};

#endif /* TILEMAP_H_ */
