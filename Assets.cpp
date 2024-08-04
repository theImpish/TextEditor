#include "Assets.h"
#include <map>
#include "iostream"

void Assets::loadAssets()
{
	std::map<std::string, std::string> files{ { "JetBrains", "jetbrains.ttf"},{"Tahoma", "tahoma.ttf"}};

	for (const auto& [name, path] : files)
	{
		addFont(name, path);
	}
}

void Assets::addFont(std::string name, std::string path)
{
	sf::Font font;

	if (!font.loadFromFile(path))
	{
		std::cout << "Could not load font from file: " << path << std::endl;
	}

	m_fonts[name] = font;
}

void Assets::addTexture(std::string name, std::string path)
{
	sf::Texture texture;

	if (!texture.loadFromFile(path))
	{
		std::cout << "Could not load texture from file: " << path << std::endl;
	}
}

sf::Font& Assets::getFont(std::string name)
{
	return m_fonts.find(name)->second;
}

sf::Texture& Assets::getTexture(std::string name)
{
	return m_textures.find(name)->second;
}
