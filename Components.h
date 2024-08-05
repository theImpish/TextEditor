#pragma once
#include <SFML/Graphics.hpp>

class CFont
{
public:
	const sf::Font& font;
	CFont(const sf::Font& Font) : font(Font) {}
};

class CSize
{
public:
	int size;
	CSize(int Size) : size(Size) {}
	//CSize() : size(DEFAULT_SIZE) {}
};

class CColour
{
public:
	sf::Color colour;

	CColour(uint8_t Red, uint8_t Green, uint8_t Blue, uint8_t Alpha = 255)
		: colour(Red, Green, Blue, Alpha) {}

	CColour(sf::Color Colour) : colour(Colour) {}

	//CColour() : colour(DEFAULT_COLOUR) {}
};