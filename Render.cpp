#include "Render.h"

Render::Render(int width, int height, std::string title)
{
	m_window.create(sf::VideoMode(width, height), title);
}

bool Render::running()
{
	return m_running;
}

void Render::render()
{
	m_window.clear(sf::Color(163, 231, 252));
	m_window.display();
}

void Render::events()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			m_running = false;
	}
}