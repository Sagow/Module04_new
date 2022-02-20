#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain();
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat( const Cat & src )
{
	_brain = new Brain(*src._brain);
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &		Cat::operator=( Cat const & rhs )
{
	_type = rhs._type;
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Miaou (aboule les croquettes)" << std::endl;
}

void	Cat::print_ideas()
{
	for (int i = 0; i < 100; i++)
		std::cout << _brain->getIdea(i) << " ";
	std::cout << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */