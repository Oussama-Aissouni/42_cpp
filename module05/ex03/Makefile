CC = c++

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

FILES = main.cpp Bureaucrat.cpp form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

NAME = Intern

all: $(NAME)

$(NAME) : $(FILES)
	$(CC) $(FLAGS) $(STD) $(FILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean :
	@rm $(NAME)

re : fclean all