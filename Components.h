#pragma once
#include <SFML/Graphics.hpp>


typedef std::map<std::string, sf::Font> FontMap;

class Fonts
{
public:
	FontMap m_fontMap;
	
	void addFont(std::string FileName, std::string FontName)
	{
		sf::Font font;

		if (!font.loadFromFile(FileName))
		{
			exit(-6);
		}

		m_fontMap[FontName] = font;
	}

	const sf::Font& getFont(std::string FontName)
	{
		return m_fontMap.find(FontName)->second;
	}
};

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
};

class CColour
{
public:
	sf::Color colour;
	CColour(uint8_t Red, uint8_t Green, uint8_t Blue, uint8_t Alpha = 255)
		: colour(Red, Green, Blue, Alpha) {}
};