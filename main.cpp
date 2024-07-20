
#include <iostream>
#include <SFML/Graphics.hpp>

#include "Render.h"
#include "TextManager.h"
#include "Components.h"

int main()
{
	Fonts m_fonts;

	m_fonts.addFont("jetbrains.ttf", "JetBrains");

	Render render(1280, 720, "Text Editor");

	std::string test = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua";

	TextManager text;

	for (const char& c : test)
	{
		auto& grapheme = text.addCharacter(c);
		std::cout << grapheme->grapheme;
		grapheme->cFont = std::make_shared<CFont>(m_fonts.getFont("JetBrains"));
		grapheme->cSize = std::make_shared<CSize>(20);
		grapheme->cColour = std::make_shared<CColour>(47, 6, 1, 255);
	}


	sf::Text tTry;
	tTry.setString("Hello World!");
	tTry.setFont(m_fonts.getFont("JetBrains"));
	tTry.setCharacterSize(20);


	while (render.running())
	{
		render.window().draw(tTry);

		int i = 0;
		sf::Text renderChar;
		for (auto& c : text.m_text)
		{
			i++;
			renderChar.setString(c->grapheme);
			renderChar.setFont(c->cFont->font);
			renderChar.setCharacterSize(c->cSize->size);
			int x = i * c->cSize->size;
			int y = 20;

			//if (x> render.window().getSize().x - c->cSize->size)
			renderChar.setPosition(sf::Vector2f(x, y));
			renderChar.setFillColor(c->cColour->colour);
			render.window().draw(renderChar);
		}

		// render.update();
		render.events();
		render.render();

	}

}