#pragma once

#ifdef MW_PLATFORM_WINDOWS
#include "Application.h"

extern Meow::Application* Meow::CreatApplication();

int main(int argc, char** argv)
{
	auto app = Meow::CreatApplication();
	app->Run();
	delete app;
}

#endif // MW_PLATFORM_WINDOWS
