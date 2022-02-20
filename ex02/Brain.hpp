#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

 const std::string possibleIdeas[] = {"Manger", "Boire", "Dormir", "Vomir", "Mordre", "Faire des calins", "Prendre la pose", "Voler de la nourriture"};

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();
		Brain &		operator=( Brain const & rhs );

		std::string	getIdea(int i);

	private:

		std::string _ideas[100];

};


#endif /* *********************************************************** BRAIN_H */