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

#endif