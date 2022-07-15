NAME = humans

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	c++ $(FLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all