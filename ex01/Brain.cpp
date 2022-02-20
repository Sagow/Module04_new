#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	srand(time(NULL));
	for (int i = 0; i < 100 ; i++)
		_ideas[i] = possibleIdeas[rand() % possibleIdeas->length()];
	std::cout << "Default Brain constructor" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Copy Brain constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	Brain::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return(_ideas[i]);
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */