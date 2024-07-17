
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
		grapheme->cFont = std::make_shared<CFont>(m_fonts.getFont("JetBrains"));
		grapheme->cSize = std::make_shared<CSize>(20);
	}



	while (render.running())
	{
		
		int i = 0;
		for (auto& c : text.m_text)
		{
			std::cout << &c;
			i++;
			sf::Text renderChar;
			renderChar.setString(c->grapheme);
			renderChar.setFont(c->cFont->font);
			renderChar.setCharacterSize(c->cSize->size);
			renderChar.setPosition(sf::Vector2f(i * c->cSize->size + 10, 20));
			render.window().draw(renderChar);
		}

		

		render.events();
		render.render();

	}

}