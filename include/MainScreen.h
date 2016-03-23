/*
 * MainScreen.h
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#ifndef MAINSCREEN_H_
#define MAINSCREEN_H_

#include <Screen.h>
#include <SFML/Graphics/RectangleShape.hpp>

class MainScreen {
public:
	void restart(sf::RenderWindow &window);
	void update(sf::RenderWindow &window, float delta);
	void event(sf::Event event);
private:
	sf::RectangleShape rect;
};

#endif /* MAINSCREEN_H_ */
