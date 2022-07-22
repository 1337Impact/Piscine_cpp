NAME = identify

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp Base.cpp

HEADER = ./header/A.hpp ./header/B.hpp ./header/C.hpp ./header/Base.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	c++ $(FLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all