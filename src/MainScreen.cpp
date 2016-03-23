/*
 * MainScreen.cpp
 *
 *  Created on: Mar 23, 2016
 *      Author: Riley
 */

#include <MainScreen.h>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Event.hpp>

void MainScreen::restart(sf::RenderWindow &window) {
	rect.setFillColor(sf::Color::Red);
	rect.setPosition(50, 50);
	rect.setSize(sf::Vector2f(32, 32));
}
void MainScreen::update(sf::RenderWindow &window, float delta) {
	rect.move(delta*50, 0);
	window.draw(rect);
}
void MainScreen::event(sf::Event event) {}
