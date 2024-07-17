#pragma once

#include "Components.h"

class Character
{
	friend class TextManager;

public:
	char grapheme;
	std::shared_ptr<CFont> cFont;
	std::shared_ptr<CSize> cSize;

	Character(char c);

};