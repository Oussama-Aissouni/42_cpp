CC = c++

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

FILES = main.cpp ClapTrap.cpp ScavTrap.cpp

NAME = ScavTrap

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS) $(STD) $(FILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean :
	@rm $(NAME)

re : fclean all