/*
 * TileMap.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#ifndef TILEMAP_H_
#define TILEMAP_H_

#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/Graphics/VertexArray.hpp>
#include <SFML/System/Vector2.hpp>
#include <Tile.h>

class TileMap: public sf::Drawable, public sf::Transformable {
public:
	TileMap(sf::Texture tileset, int width, int height, float ttd, float twd);
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
private:
	void addTileVertices(Tile tile, sf::Vector2f pos);
	sf::Texture tileset;
	sf::VertexArray vertexArray;
	int width;
	int height;
	float tileTextureDimension;
	float tileWorldDimension;
};

#endif /* TILEMAP_H_ */
