#pragma once


#include "Character.h"
#include <vector>
#include <memory>


typedef std::vector<std::shared_ptr<Character>> text;

class TextManager
{
	text m_text;
	unsigned int textSize;

public:
	TextManager() {}

	std::shared_ptr<Character> addCharacter(const char& c);

	const Character* returnCharacter(unsigned int i);
};