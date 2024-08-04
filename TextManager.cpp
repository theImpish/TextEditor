#include "TextManager.h"

const std::shared_ptr<Character> TextManager::addCharacter(const char& c)
{
    textSize++;
    auto character = std::shared_ptr<Character>(new Character(c));
    m_text.push_back(character);

    //sf::Font m_font;
    //int m_size;
    //sf::Color m_colour;

    //if (m_text.size() > 0)
    //{
    //    character->cFont = std::make_shared<CFont>(m_text[m_text.size() - 1]->cFont->font);
    //    character->cSize = std::make_shared<CSize>(m_text[m_text.size() - 1]->cSize->size);
    //    character->cColour = std::make_shared<CColour>(m_text[m_text.size() - 1]->cColour->colour);
    //}
    //else
    //{
    //    m_font = FONT;
    //    character->cSize = std::make_shared<CSize>();
    //    character->cColour = std::make_shared<CColour>();
    //}

        //character->cFont = std::make_shared<CFont>(m_fonts.getFont("JetBrains"));

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

const void TextManager::setColout(uint8_t Red, uint8_t Green, uint8_t Blue, uint8_t Alpha)
{
    return void();
}

const Character* TextManager::returnCharacter(unsigned int i)
{
    return m_text[i].get();
}
