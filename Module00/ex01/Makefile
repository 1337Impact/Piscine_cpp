NAME = phonebook

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = PhoneBook.cpp Contact.cpp main.cpp

HEADER = PhoneBook.hpp Contact.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o phonebook

%.o : %.cpp
	c++ $(FLAGS) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
