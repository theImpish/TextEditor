#pragma once

#include <SFML/Graphics.hpp>

class Render
{
private:
	sf::RenderWindow m_window;
	sf::Font m_font;
	bool m_running = true;

public:
	Render(int width, int height, std::string title);

	bool running();

	void render();
	void events();
	sf::RenderWindow& window();
};