/*
 * Panel.cpp
 *
 *  Created on: Apr 8, 2016
 *      Author: Riley
 */

#include <Panel.h>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Transform.hpp>
#include <SFML/System/Vector2.hpp>
#include <iostream>

Panel::Panel() {
	index = -1;
	//init box
	box = sf::RectangleShape(sf::Vector2f(100, 200));
	box.setFillColor(sf::Color(255, 192, 192, 128));

	//init text
	if(!font.loadFromFile("arial.ttf"))
		std::cout << "Failed to load arial.ttf\n";
	text = sf::Text("", font, 18);
	text.setColor(sf::Color(0, 0, 0, 128));
}

void Panel::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	states.transform *= getTransform();
	target.draw(box, states);
	target.draw(text, states);
}

void Panel::setText(std::string str) {
	text.setString(str);
}

//lol #getrect
sf::Vector2f Panel::getRectSize() {
	return box.getSize();
}
