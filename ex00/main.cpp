#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const Animal* k = new Animal("canari");
const WrongAnimal* w_meta = new WrongAnimal();
const WrongAnimal* w_i = new WrongCat();

std::cout << std::endl << "Animal -> sound :" << std::endl;
std::cout << j->getType() << " says " << std::endl;
j->makeSound();
std::cout << i->getType() << " says " << std::endl;
i->makeSound(); //will output the cat sound!
std::cout << k->getType() << " says " << std::endl;
k->makeSound();
std::cout << "Default Animal sound :" << std::endl;
meta->makeSound();


std::cout << std::endl << "Testing Wrong Animals :" << std::endl;
std::cout << w_i->getType() << " says " << std::endl;
w_i->makeSound(); //will NOT output the cat sound!
std::cout << w_meta->getType() << " says " << std::endl;
w_meta->makeSound();

delete meta;
delete j;
delete i;
delete k;
delete w_meta;
delete w_i;
return 0;
}