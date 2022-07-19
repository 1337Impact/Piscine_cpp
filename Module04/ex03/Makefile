NAME = brain

FLAGS = -std=c++98 -Wall -Wextra -Werror

SPATH = ./srcs

SRCS = main.cpp $(SPATH)/AMateria.cpp $(SPATH)/Character.cpp $(SPATH)/Cure.cpp \
		$(SPATH)/Ice.cpp $(SPATH)/MateriaSources.cpp

HEADER = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADER)
	c++ $(FLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all