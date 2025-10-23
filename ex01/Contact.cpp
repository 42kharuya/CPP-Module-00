#include "Contact.hpp"

Contact::Contact() : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("") {}

bool	Contact::isEmpty(void) {
	if (_firstName == ""
		|| _lastName == ""
		|| _nickName == ""
		|| _phoneNumber == ""
		|| _darkestSecret == "")
		return (true);
	return (false);
}

bool Contact::setInfo(void) {
	std::cout << "First Name: ";
	std::getline(std::cin, _firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, _lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, _nickName);
	std::cout << "Phone Number: ";
	std::getline(std::cin, _phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _darkestSecret);
	if (isEmpty())
		return (false);
	return (true);
}

static void simplifiedPrint(std::string str)
{
	if (str.length() > 10) {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".|";
	} else
		std::cout << std::right << std::setw(10) << str << "|";
}

void Contact::printContactPublic(void) {
	simplifiedPrint(_firstName);
	simplifiedPrint(_lastName);
	simplifiedPrint(_nickName);
	std::cout << std::endl;
}

void Contact::printContactPrivate(void) {
	std::cout << std::right << std::setw(20) << "First Name: " << _firstName << std::endl;
	std::cout << std::right << std::setw(20) << "Last Name: " << _lastName << std::endl;
	std::cout << std::right << std::setw(20) << "Nickname: " << _nickName << std::endl;
	std::cout << std::right << std::setw(20) << "Phone Number: " << _phoneNumber << std::endl;
	std::cout << std::right << std::setw(20) << "Darkest  Secret: " << _darkestSecret << std::endl;
}
