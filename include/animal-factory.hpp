#pragma once

#include "animal.hpp"
#include "animal-config.hpp"

namespace animal
{
    class AnimalFactory
    {
    public:
        static Animal* create(const AnimalConfig&);
    };
}
