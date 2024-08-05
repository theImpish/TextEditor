#include "TextEditor.h"

#include <iostream>

TextEditor::TextEditor(AppEngine* app) // : m_app(appEngine)
{
	m_app = app;
	for (const char& c : test)
	{

		auto& grapheme = text.addCharacter(c, m_app->getAssets().getFont("Tahoma"));
		std::cout << grapheme->grapheme;
		//grapheme->cFont = std::make_shared<CFont>(m_app->getAssets().getFont("Tahoma"));
		//grapheme->cSize = std::make_shared<CSize>(40);
		//grapheme->cColour = std::make_shared<CColour>(47, 6, 1, 255);
	}
}

void TextEditor::update()
{
	m_app->window().display();
	m_app->window().clear(sf::Color(163, 231, 252));
	render();
}

void TextEditor::render()
{
	int previousCharWidth = 0;
	int previousX = 20;
	int x = 0;
	int y = 20;
	int i = 0;
	int charSpacing = 5;
	int lineNumber = 0;
	sf::Text renderChar;
	for (auto& c : m_app->editor->text.m_text)
	{
		i++;
		renderChar.setString(c->grapheme);
		renderChar.setFont(c->cFont->font);
		renderChar.setCharacterSize(c->cSize->size);

		if (previousX + previousCharWidth + charSpacing > m_app->window().getSize().x - 20)
		{
			lineNumber++;
			previousX = 0;
			y += 80;
		}

		x = previousX + previousCharWidth + charSpacing;
		//y = 20;
		previousX = x;
		previousCharWidth = renderChar.getLocalBounds().width;
		//if (x> render.window().getSize().x - c->cSize->size)
		renderChar.setPosition(sf::Vector2f(x, y));
		renderChar.setFillColor(c->cColour->colour);
		m_app->window().draw(renderChar);


		//sf::Text coord;
		//coord.setFont(c->cFont->font);
		//coord.setString(std::to_string(x));
		//coord.setPosition(sf::Vector2f(x, 90));
		//coord.setCharacterSize(8);
		//coord.setFillColor(c->cColour->colour);
		//m_app->window().draw(coord);

		//sf::Text charsize;
		//charsize.setFont(c->cFont->font);
		//charsize.setString(std::to_string(int(renderChar.getLocalBounds().width)));
		//charsize.setPosition(sf::Vector2f(x, 120));
		//charsize.setCharacterSize(8);
		//charsize.setFillColor(c->cColour->colour);
		//m_app->window().draw(charsize);

		//sf::RectangleShape rect;
		//rect.setSize(sf::Vector2f(renderChar.getLocalBounds().width,renderChar.getLocalBounds().height));
		//rect.setOrigin(renderChar.getOrigin());
		//rect.setPosition(renderChar.getGlobalBounds().getPosition());
		//rect.setOutlineColor(sf::Color::White);
		//rect.setFillColor(sf::Color::Transparent);
		//rect.setOutlineThickness(1);
		//m_app->window().draw(rect);


	}
}
