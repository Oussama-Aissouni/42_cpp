#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact Contacts[8];
public:
	Contact	getContact(int i);
	void	setContact(int pos, Contact c);
};
#endif