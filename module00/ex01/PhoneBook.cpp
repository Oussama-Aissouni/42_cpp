#include "PhoneBook.hpp"

int	Add(PhoneBook *PhoneBook)
{
	static int	pos;
	static bool	full;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, FirstName);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, LastName);
	std::cout << "Enter nick name" << std::endl;
	std::getline(std::cin, NickName);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, PhoneNumber);
	std::cout << "Enter your darkest secret" << std::endl;
	std::getline(std::cin >> std::ws, DarkestSecret);
	PhoneBook->Contacts[pos].SetFirstName(FirstName);
	PhoneBook->Contacts[pos].SetLastName(LastName);
	PhoneBook->Contacts[pos].SetNickName(NickName);
	PhoneBook->Contacts[pos].SetPhoneNumber(PhoneNumber);
	PhoneBook->Contacts[pos].SetDarkestSecret(DarkestSecret);
	pos++;
	if (pos == 8)
	{
		full = 1;
		pos = 0;
	}
	if (full == 1)
		return (8);
	return (pos);
}

void	Search(PhoneBook *PhoneBook, int nb)
{
	int	i;

	i = 0;
	std::cout << "   Index   ";
	std::cout << " FirstName";
	std::cout << " LastName";
	std::cout << " Nickname " << std::endl;
	while (i < nb)
	{
		std::cout << "    " << i + 1 << "     " << "|";
		if (PhoneBook->Contacts[i].GetFirstName().length() < 10)
			std::cout << PhoneBook->Contacts[i].GetFirstName() << "|";
		else
			std::cout << "." << "|";
		if (PhoneBook->Contacts[i].GetLastName().length() < 10)
			std::cout << PhoneBook->Contacts[i].GetLastName() << "|";
		else
			std::cout << "." << "|";
		if (PhoneBook->Contacts[i].GetNickName().length() < 10)
			std::cout << PhoneBook->Contacts[i].GetNickName() << "|";
		else
			std::cout << "." << "|";
		i++;
	}
}

int main()
{
	int			nb;
	PhoneBook	PhoneBook;
	std::string	buff;

	nb = 0;
	while (1)
	{
		std::getline(std::cin, buff);
		if (buff =="ADD")
			nb = Add(&PhoneBook);
		else if (buff == "SEARCH")
			Search(&PhoneBook, nb);
		else if (buff == "EXIT")
			exit(0);
		else
		{
			std::cout << "not valid input" << std::endl;
			break;
		}
	}
	return (0);
}
