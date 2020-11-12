#include "animal.hpp"

namespace animal
{
    class Dog : public Animal
    {
    public:
        std::string sound() override;
    };
}
