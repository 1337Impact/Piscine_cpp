NAME = bureaucrat

HP = ./header

SP = ./srcs

FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp $(SP)/Bureaucrat.cpp $(SP)/Form.cpp $(SP)/Intern.cpp \
	$(SP)/ShrubberyCreationForm.cpp  $(SP)/RobotomyRequestForm.cpp $(SP)/PresidentialPardonForm.cpp

HEADER = $(HP)/Bureaucrat.hpp $(HP)/Form.hpp $(HP)/Intern.hpp \
	$(HP)/ShrubberyCreationForm.hpp $(HP)/RobotomyRequestForm.hpp $(HP)/PresidentialPardonForm.hpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o: $(HEADER)
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all