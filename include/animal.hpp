#pragma once

#include <string>

namespace animal
{
    class Animal
    {
    public:
        virtual std::string sound() = 0;
    };
}
