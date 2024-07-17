#include "TextManager.h"

const std::shared_ptr<Character> TextManager::addCharacter(const char& c)
{
    textSize++;
    auto character = std::shared_ptr<Character>(new Character(c));
    m_text.push_back(character);
    return character;
}

const Character* TextManager::returnCharacter(unsigned int i)
{
    return m_text[i].get();
}
