#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
public:
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNickName();
	std::string GetPhoneNumber();
	std::string GetDarkestSecret();
	void SetFirstName(std::string FirstName);
	void SetLastName(std::string LastName);
	void SetNickName(std::string NickName);
	void SetPhoneNumber(std::string PhoneNumber);
	void SetDarkestSecret(std::string DarkestSecret);
};

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

#endif