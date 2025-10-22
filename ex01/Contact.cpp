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
	std::cin >> _firstName;
	std::cout << "Last Name: ";
	std::cin >> _lastName;
	std::cout << "Nick Name: ";
	std::cin >> _nickName;
	std::cout << "Phone Number: ";
	std::cin >> _phoneNumber;
	std::cout << "Darkest Secret: ";
	std::cin >> _darkestSecret;
	if (isEmpty())
		return (false);
	return (true);
}
