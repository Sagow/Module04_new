#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain;
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog( const Dog & src ) : Animal(src._type)
{
	_brain = new Brain(*src._brain);
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &		Dog::operator=( Dog const & rhs )
{
	_type = rhs._type;
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Whouaf (promenade)" << std::endl;
}

void	Dog::print_ideas()
{
	std::cout << _brain << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */