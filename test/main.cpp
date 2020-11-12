#include <iostream>

#include "animal-factory.hpp"

using namespace std;
using namespace animal;

int main()
{
    cout << "Animal testing:" << endl;

    Animal* cat = AnimalFactory::create(AnimalConfig::CAT);
    cout << "Cat sound: " << cat->sound() << endl;
    delete cat;

    Animal* dog = AnimalFactory::create(AnimalConfig::DOG);
    cout << "Dog sound: " << dog->sound() << endl;
    delete dog;

    return 0;
}

