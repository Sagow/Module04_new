#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();
		WrongAnimal &		operator=( WrongAnimal const & rhs );

		WrongAnimal(std::string type);

		void	makeSound() const;
		std::string	getType() const;

	protected:

		std::string	_type;

	private:

};

#endif /* ********************************************************** WRONGANIMAL_H */