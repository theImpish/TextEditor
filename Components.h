#pragma once
#include <SFML/Graphics.hpp>


class CFont
{
public:
	sf::Font font;

	CFont(std::string fontFile)
	{
		if (!font.loadFromFile(fontFile))
		{
			exit(-6);
		}
	}
};

class CSize
{
public:
	int size;
	CSize(int size) : size(size) {}
};