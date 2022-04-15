#pragma once

#include <memory>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Hazel {
    class Log {
    private:
        static std::shared_ptr<spdlog::logger> s_coreLogger;
        static std::shared_ptr<spdlog::logger> s_clientLogger;
    public:
        static void init();

        inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_coreLogger; }
        inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_clientLogger; }
    };
}

#define HZ_CORE_TRACE(...)  ::Hazel::Log::getCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_DEBUG(...)  ::Hazel::Log::getCoreLogger()->debug(__VA_ARGS__)
#define HZ_CORE_INFO(...)   ::Hazel::Log::getCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)   ::Hazel::Log::getCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)  ::Hazel::Log::getCoreLogger()->error(__VA_ARGS__)

#define HZ_TRACE(...)       ::Hazel::Log::getClientLogger()->trace(__VA_ARGS__)
#define HZ_DEBUG(...)       ::Hazel::Log::getClientLogger()->debug(__VA_ARGS__)
#define HZ_INFO(...)        ::Hazel::Log::getClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)        ::Hazel::Log::getClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)       ::Hazel::Log::getClientLogger()->error(__VA_ARGS__)