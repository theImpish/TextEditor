#include "Render.h"

Render::Render(int width, int height, std::string title)
{
	m_window.create(sf::VideoMode(width, height), title);
}

bool Render::running()
{
	return m_running;
}

void Render::update()
{
}

void Render::render()
{
	m_window.display();
	m_window.clear(sf::Color(163, 231, 252));
}

void Render::events()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			m_running = false;

		if (event.type == sf::Event::Resized)
		{
			sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
			m_window.setView(sf::View(visibleArea));
		}
	}
}

sf::RenderWindow& Render::window()
{
	return m_window;
}