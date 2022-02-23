#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
const Animal*	j = new Dog();
const Animal*	i = new Cat();
Cat				*Inox = new Cat();
Cat				Moumoune;

std::cout << Inox->getType() << " says " << std::endl;
Inox->makeSound();
std::cout << std::endl << "Inox thinks :" << std::endl;
Inox->print_ideas();
std::cout << std::endl << "Copying Inox into Moumoune, then deleting Inox" << std::endl;
Moumoune = *Inox;
delete Inox;
std::cout << std::endl << "Moumoune thinks :" << std::endl;
Moumoune.print_ideas();

std::cout << std::endl;

delete j;
delete i;
return 0;
}