#pragma once

#include "AppEngine.h"
#include "TextManager.h"

class AppEngine;

class TextEditor 
{
private:

	std::string test = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua";

	AppEngine* m_app = nullptr;

public:
	TextManager text;

	TextEditor(AppEngine* app);
	void update();
	void render();
};