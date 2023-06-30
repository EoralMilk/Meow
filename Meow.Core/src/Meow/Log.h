#pragma once
#include "Core.h"

#include <memory>
#include "spdlog/spdlog.h"

namespace Meow
{
	class MEOW_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}


// Core log macros
#define MW_CORE_TRACE(...)    ::Meow::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MW_CORE_INFO(...)     ::Meow::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MW_CORE_WARN(...)     ::Meow::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MW_CORE_ERROR(...)    ::Meow::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MW_CORE_FATAL(...)    ::Meow::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define MW_TRACE(...)	      ::Meow::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MW_INFO(...)	      ::Meow::Log::GetClientLogger()->info(__VA_ARGS__)
#define MW_WARN(...)	      ::Meow::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MW_ERROR(...)	      ::Meow::Log::GetClientLogger()->error(__VA_ARGS__)
#define MW_FATAL(...)	      ::Meow::Log::GetClientLogger()->fatal(__VA_ARGS__)