#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactNum(0) {}

void PhoneBook::add(void) {
	_contactNum++;
	if (_contactNum > 8){
		for (size_t i = 0; i < 7; i++)
			_contactList[i] = _contactList[i + 1];
	} else
		_contactNum++;
	if (!_contactList[_contactNum - 1].setInfo())
		std::cout << "There were empty fields. Please try again." << std::endl;
	else
		std::cout << "Contact information saved" << std::endl;
}

void PhoneBook::search(void) {
	std::cout << "in search" << std::endl;
}

int PhoneBook::exit(void) {
	std::cout << "in exit" << std::endl;
	return (0);
}
