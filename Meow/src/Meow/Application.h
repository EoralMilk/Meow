#pragma once

#include "Core.h"

namespace Meow {

	class MEOW_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// 应在client中定义
	Application* CreatApplication();
}



