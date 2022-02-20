#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog &		operator=( Dog const & rhs );

		virtual void	makeSound() const;
		void			print_ideas();

	private:

		Brain	*_brain;
};

#endif /* ************************************************************* DOG_H */