cc = c++

RED='\033[0;31m'
NC='\033[0m'

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

$(NAME) : megaphone.cpp
	@$(cc) $(FLAGS) megaphone.cpp -o $(NAME)
	@echo ${RED}******** Megaphone is created ********${NC}

all: $(NAME)

clean:

fclean:
	@rm -rf $(NAME)