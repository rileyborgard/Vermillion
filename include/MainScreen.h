/*
 * MainScreen.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#ifndef MAINSCREEN_H_
#define MAINSCREEN_H_

#include <Map.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class MainScreen {
public:
	void restart(sf::RenderWindow &window);
	void update(sf::RenderWindow &window, float delta);
	void event(sf::RenderWindow &window, sf::Event event);
private:
	Map *map;
	sf::Vector2f mousePosition;
};

#endif /* MAINSCREEN_H_ */
