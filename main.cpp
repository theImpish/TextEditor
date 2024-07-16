
#include <iostream>
#include <SFML/Graphics.hpp>

#include "Render.h"
#include "Character.h"

int main()
{

	Render render(1280, 720, "Text Editor");

	std::string test = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua";

	std::vector<Character> text;

	std::cout << "size of an integer is: " << sizeof(int) << "\n\n";

	for (auto& c : text)
	{
		text.push_back(c);
	}


	while (render.running())
	{

		render.events();
		render.render();

	}

}