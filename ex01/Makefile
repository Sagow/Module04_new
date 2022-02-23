SRCS =	main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp

HEADERS = Animal.hpp\
		Cat.hpp\
		Dog.hpp\
		Brain.hpp\
		WrongAnimal.hpp\
		WrongCat.hpp

OBJS =  ${SRCS:.cpp=.o}

CC =    c++

FLAGS = -std=c++98 -Wall -Werror -Wextra

NAME =  ex01

all: ${NAME}

${NAME}:	${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp ${HEADERS}
		$(CC) $(FLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean