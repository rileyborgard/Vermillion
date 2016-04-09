/*
 * Panel.h
 *
 *  Created on: Apr 8, 2016
 *      Author: Riley
 */

#ifndef PANEL_H_
#define PANEL_H_

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Vector2.hpp>
#include <string>

class Panel: public sf::Drawable, public sf::Transformable {
public:
	Panel();
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	void setText(std::string str);
	sf::Vector2f getRectSize();
	int index;
private:
	sf::RectangleShape box;
	sf::Font font;
	sf::Text text;
};

#endif /* PANEL_H_ */
