CC = c++

FLAGS = -fsanitize=address #-Wall -Wextra -Werror 

STD = -std=c++98

FILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

NAME = Weapon

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS) $(STD) $(FILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean :
	@rm $(NAME)

re : fclean all