#pragma once

#include "SFML\Graphics.hpp"

#include "TextEditor.h"
#include "TextManager.h"
#include "Assets.h"

class TextEditor;

class AppEngine
{
private:

	sf::RenderWindow m_window;
	Assets m_assets;
	bool m_running = true;

	void init();

public:
	sf::RenderWindow& window();
	std::shared_ptr<TextEditor> editor;
	Assets& getAssets();
	bool isRunning();

	void events(TextManager& text);


	AppEngine();

	void quit();
	void update();
	void run();

};

