#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal default constuctor" << std::endl;
	_type = "default";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal constructor, type = " << type << std::endl;
	_type = type;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal copy constructor, copying a " << src._type << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const
{
	std::cout << "*this is animal noise*" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */