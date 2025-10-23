#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactNum(0) {}

void PhoneBook::add(void) {
	if (_contactNum == 8){
		for (size_t i = 0; i < 7; i++)
			_contactList[i] = _contactList[i + 1];
	} else
		_contactNum++;
	if (!_contactList[_contactNum - 1].setInfo())
		std::cout << "There were empty fields. Please try again." << std::endl;
	else
		std::cout << "Contact information saved!" << std::endl;
}

static void printSearchHeading(void) {
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
}

static int	getSearchIndex(int contactNum) {
	int	index;

	while (1)
	{
		std::cout << PROMPT;
		std::string str;
		std::getline(std::cin, str);
		std::stringstream	str_stream(str);
		if (str_stream >> index && (index >= 0 && index < contactNum))
			return (index);
		else
			std::cout << "Sorry, invalid index." << std::endl;
	}
}

void PhoneBook::search(void) {
	if (_contactNum == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return ;
	}
	printSearchHeading();
	for (int i = 0; i < _contactNum; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		_contactList[i].printContactPublic();
	}
	std::cout << "\nEnter the index of the contact to view details:" << std::endl;
	int	index = getSearchIndex(_contactNum);
	_contactList[index].printContactPrivate();
}

int PhoneBook::exit(void) {
	std::cout << "Thank you for your patronage." << std::endl;
	return (0);
}
