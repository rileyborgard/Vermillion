/*
 * TileMap.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/PrimitiveType.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Vertex.hpp>
#include <TileMap.h>
#include <cstdlib>

TileMap::TileMap(sf::Texture tileset, int width, int height, float ttd, float twd) {
	this->tileset = tileset;
	this->width = width;
	this->height = height;
	this->tileTextureDimension = ttd;
	this->tileWorldDimension = twd;

	vertexArray = sf::VertexArray(sf::Quads, width * height * 4);
	for(int x = 0; x < width; x++)
		for(int y = 0; y < height; y++)
			addTileVertices(Tile(std::rand() % 4, std::rand() % 4, sf::Color::White), sf::Vector2f(x, y));
}

void TileMap::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	states.texture = &tileset;
	states.transform *= getTransform();
	target.draw(vertexArray, states);
}

void TileMap::addTileVertices(Tile tile, sf::Vector2f pos) {
	vertexArray.append(sf::Vertex((sf::Vector2f(0, 0)+pos) * tileWorldDimension, tile.color,
			tileTextureDimension * sf::Vector2f(tile.x, tile.y)));
	vertexArray.append(sf::Vertex((sf::Vector2f(1, 0)+pos) * tileWorldDimension, tile.color,
			tileTextureDimension * sf::Vector2f(tile.x + 1, tile.y)));
	vertexArray.append(sf::Vertex((sf::Vector2f(1, 1)+pos) * tileWorldDimension, tile.color,
			tileTextureDimension * sf::Vector2f(tile.x + 1, tile.y + 1)));
	vertexArray.append(sf::Vertex((sf::Vector2f(0, 1)+pos) * tileWorldDimension, tile.color,
			tileTextureDimension * sf::Vector2f(tile.x, tile.y + 1)));
}
