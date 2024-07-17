#pragma once
#include <SFML/Graphics.hpp>


typedef std::map<std::string, sf::Font> FontMap;

class Fonts
{
public:
	FontMap m_fontMap;
	
	void addFont(std::string fileName, std::string fontName)
	{
		sf::Font font;

		if (!font.loadFromFile(fileName))
		{
			exit(-6);
		}

		m_fontMap[fontName] = font;
	}

	const sf::Font& getFont(std::string fontName)
	{
		return m_fontMap.find(fontName)->second;
	}
};

class CFont
{
public:
	const sf::Font& font;
	CFont(const sf::Font& font) : font(font) {}
};

class CSize
{
public:
	int size;
	CSize(int size) : size(size) {}
};