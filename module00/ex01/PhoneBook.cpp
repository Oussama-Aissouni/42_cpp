#include "PhoneBook.hpp"

std::string Contact::GetFirstName()
{
	return FirstName;
}

std::string Contact::GetLastName()
{
	return LastName;
}

std::string Contact::GetNickName()
{
	return NickName;
}

std::string Contact::GetPhoneNumber()
{
	return PhoneNumber;
}

std::string Contact::GetDarkestSecret()
{
	return DarkestSecret;
}

void Contact::SetFirstName(std::string str)
{
	FirstName = str;
}

void Contact::SetLastName(std::string str)
{
	LastName = str;
}

void Contact::SetNickName(std::string str)
{
	NickName = str;
}

void Contact::SetPhoneNumber(std::string str)
{
	PhoneNumber = str;
}

void Contact::SetDarkestSecret(std::string str)
{
	DarkestSecret = str;
}

void	PhoneBook::setContact(int pos, Contact c)
{
	Contacts[pos] = c;
}

Contact PhoneBook::getContact(int i)
{
	return Contacts[i];
}

int	Add(PhoneBook *PhoneBook)
{
	static int	pos;
	static bool	full;
	Contact		c;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

	while (FirstName.empty())
	{
		std::cout << "Enter first name" << std::endl;
		if (std::getline(std::cin, FirstName).eof())
			return -1;
	}
	while (LastName.empty())
	{
		std::cout << "Enter last name" << std::endl;
		if (std::getline(std::cin, LastName).eof())
			return -1;
	}
	while (NickName.empty())
	{
		std::cout << "Enter nick name" << std::endl;
		if (std::getline(std::cin, NickName).eof())
			return -1;
	}
	while (PhoneNumber.empty())
	{
		std::cout << "Enter phone number" << std::endl;
		if (std::getline(std::cin, PhoneNumber).eof())
			return -1;
	}
	while (DarkestSecret.empty())
	{
		std::cout << "Enter your darkest secret" << std::endl;
		if (std::getline(std::cin, DarkestSecret).eof())
			return -1;
	}
	c.SetFirstName(FirstName);
	c.SetLastName(LastName);
	c.SetNickName(NickName);
	c.SetPhoneNumber(PhoneNumber);
	c.SetDarkestSecret(DarkestSecret);
	PhoneBook->setContact(pos, c);
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
	
	std::cout<< std::right << std::setw(10) << "Index ";
	std::cout<< std::right << std::setw(10) << " FirstName ";
	std::cout<< std::right << std::setw(10) << "  LastName ";
	std::cout<< std::right << std::setw(10) << "  NickName " << std::endl;
	while (i < nb)
	{
		std::cout << std::setw(10);
		std::cout << std::right<< std::setw(10)  << i + 1 << "|";
		if (PhoneBook->getContact(i).GetFirstName().length() < 11)
			std::cout << std::right<< std::setw(10) << PhoneBook->getContact(i).GetFirstName() << "|";
		else
			std::cout << truncate(PhoneBook->getContact(i).GetFirstName()) << "|";
		if (PhoneBook->getContact(i).GetLastName().length() < 11)
			std::cout << std::right<< std::setw(10) << PhoneBook->getContact(i).GetLastName() << "|";
		else
			std::cout << truncate(PhoneBook->getContact(i).GetLastName()) << "|";
		if (PhoneBook->getContact(i).GetNickName().length() < 11)
			std::cout << std::right<< std::setw(10) << PhoneBook->getContact(i).GetNickName() << "|" << std::endl;
		else
			std::cout << truncate(PhoneBook->getContact(i).GetNickName()) << "|" << std::endl;
		i++;
	}
	std::cout << "Enter an index" << std::endl;
	std::getline(std::cin, index);
	std::stringstream(index) >> index_;
	if (index_ < 1 || index_ > 8)
		std::cout << "index out of range" << std::endl;
	else if (index_ - 1 >= nb)
		std::cout << "invalid index" << std::endl;
	else
	{
		i = 0;
		while (i != index_)
			i++;
		std::cout << "FirstName : " << PhoneBook->getContact(i - 1).GetFirstName() << std::endl;
		std::cout << "LastName : " << PhoneBook->getContact(i - 1).GetLastName() << std::endl;
		std::cout << "NickName : " << PhoneBook->getContact(i - 1).GetNickName() << std::endl;
		std::cout << "PhoneNumber : " << PhoneBook->getContact(i - 1).GetPhoneNumber() << std::endl;
		std::cout << "DarkestSecret : " << PhoneBook->getContact(i - 1).GetDarkestSecret() << std::endl;
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
		if (std::getline(std::cin, buff).eof())
			break;
		if (buff =="ADD")
			nb = Add(&PhoneBook);
		else if (buff == "SEARCH")
			Search(&PhoneBook, nb);
		else if (buff == "EXIT")
			return(0);
		else
		{
			if (buff.empty())
				continue;;
			std::cout << "invalid input" << std::endl;
			break;
		}
		if (nb == -1)
			break;
	}
	return (0);
}
