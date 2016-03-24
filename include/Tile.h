/*
 * Tile.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#ifndef TILE_H_
#define TILE_H_

#include <SFML/Graphics/Color.hpp>

class Tile {
public:
	Tile(int x, int y, sf::Color color);
	//position in the tileset
	int x, y;
	//color in map file represents this tile
	sf::Color color;
};

#endif /* TILE_H_ */
