#pragma once

#include <vcpkg/base/chrono.h>
#include <vcpkg/base/util.h>

#include <atomic>
#include <string>

namespace vcpkg
{
    struct GlobalState
    {
        static Util::LockGuarded<Chrono::ElapsedTimer> timer;
        static Util::LockGuarded<std::string> g_surveydate;

        static std::atomic<bool> g_binary_caching;

        static std::atomic<int> g_init_console_cp;
        static std::atomic<int> g_init_console_output_cp;
        static std::atomic<bool> g_init_console_initialized;
    };
}
