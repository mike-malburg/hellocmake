#pragma once
#include "hellocmakemacros.h"
#include <string>

NAMESPACE_HELLOCMAKELIB_START

class hellocmake {
    public:
        HELLOCMAKELIB_API std::string getHello();
        HELLOCMAKELIB_API std::string getWorld();
};

NAMESPACE_HELLOCMAKELIB_END
