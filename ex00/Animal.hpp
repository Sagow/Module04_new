#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();
		Animal &		operator=( Animal const & rhs );

		Animal(std::string type);

		virtual void	makeSound() const;
		std::string	getType() const;

	protected:

		std::string	type;

	private:

};

#endif /* ********************************************************** ANIMAL_H */