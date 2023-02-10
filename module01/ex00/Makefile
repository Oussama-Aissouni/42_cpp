CC = c++

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

FILES = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

NAME = zombie

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS) $(STD) $(FILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean :
	@rm $(NAME)

re : fclean all