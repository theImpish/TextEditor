#pragma once
#include <SFML/Graphics.hpp>


//typedef std::map<std::string, sf::Font> FontMap;

//const int DEFAULT_SIZE = 12;
//const sf::Color DEFAULT_COLOUR = sf::Color(0, 0, 0, 255);

//class Fonts
//{
//public:
//	FontMap m_fontMap;
//	
//	void addFont(std::string FileName, std::string FontName)
//	{
//		sf::Font font;
//
//		if (!font.loadFromFile(FileName))
//		{
//			exit(-6);
//		}
//
//		m_fontMap[FontName] = font;
//	}
//
//	const sf::Font& getFont(std::string FontName)
//	{
//		return m_fontMap.find(FontName)->second;
//	}
//};

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