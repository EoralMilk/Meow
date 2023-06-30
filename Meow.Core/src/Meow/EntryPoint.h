#pragma once

#ifdef MW_PLATFORM_WINDOWS
#include "Application.h"

extern Meow::Application* Meow::CreatApplication();

int main(int argc, char** argv)
{
	Meow::Log::Init();
	MW_CORE_WARN("Initialized Log!");
	int a = 5;
	MW_INFO("Hello! Var={0}", a);


	auto app = Meow::CreatApplication();
	app->Run();
	delete app;
}

#endif // MW_PLATFORM_WINDOWS
