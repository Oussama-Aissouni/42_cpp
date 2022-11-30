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

std::string truncate(std::string str)
{
	std::string ret;
	ret = str.substr(0, 9);
	ret.append(".");
	return (ret);
}

void	Search(PhoneBook *PhoneBook, int nb)
{
	int			i;
	int			index_;
	std::string	index;

	i = 0;
	std::cout << "   Index   ";
	std::cout << "     FirstName     ";
	std::cout << "     LastName     ";
	std::cout << "     Nickname     " << std::endl;
	while (i < nb)
	{
		std::cout << "    " << i + 1 << "     " << "|";
		if (PhoneBook->Contacts[i].GetFirstName().length() < 10)
			std::cout << "      " << PhoneBook->Contacts[i].GetFirstName() << "      "  << "|";
		else
			std::cout << "      " << truncate(PhoneBook->Contacts[i].GetFirstName()) << "      " << "|";
		if (PhoneBook->Contacts[i].GetLastName().length() < 10)
			std::cout << "      " << PhoneBook->Contacts[i].GetLastName() << "      "  << "|";
		else
			std::cout << "      "  << truncate(PhoneBook->Contacts[i].GetLastName()) << "      "  << "|";
		if (PhoneBook->Contacts[i].GetNickName().length() < 10)
			std::cout << "      " << PhoneBook->Contacts[i].GetNickName() << "      "  << "|" << std::endl;
		else
			std::cout << "      "  << truncate(PhoneBook->Contacts[i].GetNickName()) << "      "  << "|" << std::endl;
		i++;
	}
	std::cout << "Enter an index" << std::endl;
	std::getline(std::cin, index);
	std::stringstream(index) >> index_;
	if (index_ - 1 >= nb)
		std::cout << "oooh oooh" << std::endl;
	else if (index_ < 1 || index_ > 8)
		std::cout << "oooh oooh" << std::endl;
	else
	{
		i = 0;
		while (i != index_)
			i++;
		std::cout << PhoneBook->Contacts[i - 1].GetFirstName() << std::endl;
		std::cout << PhoneBook->Contacts[i - 1].GetLastName() << std::endl;
		std::cout << PhoneBook->Contacts[i - 1].GetNickName() << std::endl;
		std::cout << PhoneBook->Contacts[i - 1].GetPhoneNumber() << std::endl;
		std::cout << PhoneBook->Contacts[i - 1].GetDarkestSecret() << std::endl;
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
		std::cout << "Enter an instruction " << std::endl;
		std::getline(std::cin, buff);
		if (buff =="ADD")
			nb = Add(&PhoneBook);
		else if (buff == "SEARCH")
			Search(&PhoneBook, nb);
		else if (buff == "EXIT")
			return(1);
		else
		{
			std::cout << "invalid input" << std::endl;
			break;
		}
	}
	return (0);
}
