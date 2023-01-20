#include <iostream>

void	print_upper(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			std::cout << (char)(str[i] - 32);
		else
			std::cout << (str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int	i;

		i = 1;
		while (i < argc)
		{
			print_upper(argv[i]);
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}