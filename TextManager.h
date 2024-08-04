#pragma once


#include "Character.h"
#include <vector>
#include <memory>


typedef std::vector<std::shared_ptr<Character>> text;

class TextManager
{
public:
	text m_text;
	unsigned int textSize = 0;

public:
	TextManager() {}

	const std::shared_ptr<Character> addCharacter(const char& c);

	const void setFont(sf::Font& Font);
	const void setSize(int Size);
	const void setColout(uint8_t Red, uint8_t Green, uint8_t Blue, uint8_t Alpha = 255);

	const Character* returnCharacter(unsigned int i);
};