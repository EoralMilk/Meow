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

	// 应在client中定义
	Application* CreatApplication();
}



