#include "AppEngine.h"

#include <iostream>

AppEngine::AppEngine()
{
	init();
}

void AppEngine::init()
{
	m_assets.loadAssets();
	m_window.create(sf::VideoMode(1280, 720), "Text Editor", sf::Style::Default);
	editor = std::make_shared<TextEditor>(this);
}

void AppEngine::quit()
{
	m_running = false;
}

void AppEngine::update()
{
	editor->update();
}

void AppEngine::run()
{
	while (isRunning())
	{
		update();
		events(editor->text);
	}
}

sf::RenderWindow& AppEngine::window()
{
	return m_window;
}

Assets& AppEngine::getAssets()
{
	return m_assets;
}

bool AppEngine::isRunning()
{
	return m_running;
}

void AppEngine::events(TextManager& text)
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

		if (event.type == sf::Event::TextEntered)
		{
			text.addCharacter((char)event.text.unicode, m_assets.getFont("JetBrains"));
			std::cout << (char)event.text.unicode;
		}
	}
}