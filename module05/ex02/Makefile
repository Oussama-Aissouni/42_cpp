CC = c++

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

FILES = main.cpp Bureaucrat.cpp form.cpp ShrubberyCreationForm.cpp

NAME = Form

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS)  $(FILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean :
	@rm $(NAME)

re : fclean all