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

	const Character* returnCharacter(unsigned int i);
};