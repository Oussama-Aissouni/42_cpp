CC = c++

FLAGS = #-Wall -Wextra -Werror 

STD = -std=c++98 -fsanitize=address

FILES = main.cpp Harl.cpp

NAME = Harl

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS) $(STD) $(FILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean :
	@rm $(NAME)

re : fclean all