/*
 * MainScreen.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#ifndef MAINSCREEN_H_
#define MAINSCREEN_H_

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <TileMap.h>

class MainScreen {
public:
	void restart(sf::RenderWindow &window);
	void update(sf::RenderWindow &window, float delta);
	void event(sf::Event event);
private:
	TileMap *map;
	sf::Texture tileset;
	sf::Vector2f mousePosition;
};

#endif /* MAINSCREEN_H_ */
