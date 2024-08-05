#include "TextManager.h"

const std::shared_ptr<Character> TextManager::addCharacter(const char& c, const sf::Font& font)
{
    textSize++;
    auto character = std::shared_ptr<Character>(new Character(c));
    m_text.push_back(character);

    character->cFont = std::make_shared<CFont>(font);
    character->cSize = std::make_shared<CSize>(40);
    character->cColour = std::make_shared<CColour>(47, 6, 1, 255);

    return character;
}

const void TextManager::setFont(sf::Font& Font)
{
    return void();
}

const void TextManager::setSize(int Size)
{
    return void();
}

const void TextManager::setColour(uint8_t Red, uint8_t Green, uint8_t Blue, uint8_t Alpha)
{
    return void();
}

const Character* TextManager::returnCharacter(unsigned int i)
{
    return m_text[i].get();
}
