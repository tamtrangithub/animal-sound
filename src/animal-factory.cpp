#include "animal-factory.hpp"
#include "cat.hpp"
#include "dog.hpp"

namespace animal
{
    Animal* AnimalFactory::create(const AnimalConfig& config)
    {
        Animal* animal = nullptr;
        if (AnimalConfig::CAT == config)
        {
            animal = new Cat();
        }
        else if (AnimalConfig::DOG == config)
        {
            animal = new Dog();
        }
        return animal;
    }
}

