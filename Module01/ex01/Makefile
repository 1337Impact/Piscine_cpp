NAME = zombie

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = Zombie.cpp main.cpp zombieHorde.cpp

HEADER = Zombie.hpp

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