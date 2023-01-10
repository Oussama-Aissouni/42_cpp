CC = c++

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

FILES = main.cpp Fixed.cpp 

NAME = ex01

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS) $(STD) $(FILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean :
	@rm $(NAME)

re : fclean all