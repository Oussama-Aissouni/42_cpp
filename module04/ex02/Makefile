CC = c++

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp 

NAME = Animal

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS) $(STD) $(FILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean :
	@rm $(NAME)

re : fclean all