NAME = executable

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp ClapTrap.cpp ScarvTrap.cpp

HEADER = ClapTrap.hpp ScarvTrap.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	c++ $(FLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all