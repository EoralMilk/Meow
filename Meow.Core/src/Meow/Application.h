#pragma once

#include "Core.h"

namespace Meow {

	class MEOW_API Application
	{
	public:
		Application();
		virtual ~Application();

		virtual void Run();

	};

	// Ӧ��client�ж���
	Application* CreatApplication();
}



