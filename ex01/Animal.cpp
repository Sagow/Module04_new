#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal default constuctor" << std::endl;
	type = "default";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal constructor, type = " << type << std::endl;
	this->type = type;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal copy constructor, copying a " << src.type << std::endl;
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
	type = rhs.type;
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
	return (type);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */