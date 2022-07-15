NAME = zombie

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

HEADER = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.c $(HEADER)
	c++ $(FLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all