#include "animal.hpp"

namespace animal
{
    class Cat : public Animal
    {
    public:
        std::string sound() override;
    };
}
