
#ifndef CSCREEN_H_
#define CSCREEN_H_

#include <SFML/Graphics.hpp>

class Screen {
public:
	virtual void restart(sf::RenderWindow &window) = 0;
	virtual void update(sf::RenderWindow &window, float delta) = 0;
	virtual void event(sf::Event event) = 0;
};

#endif /* CSCREEN_H_ */
