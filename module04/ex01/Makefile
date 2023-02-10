CC = c++

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp 

NAME = Brain

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS) $(STD) $(FILES) -o $(NAME)

clean :
	@rm -f $(NAME)

fclean :
	@rm -f $(NAME)

re : fclean all