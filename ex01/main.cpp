#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook myAwesomePhoneBook;

	while (1) {
		std::string	command;

		std::cout << "Please enter one of the following commands:" << std::endl;
		std::cout << "ADD,SEARCH,EXIT" << std::endl;
		std::cin >> command;
		if(command == "ADD")
			myAwesomePhoneBook.add();
		else if(command == "SEARCH")
			myAwesomePhoneBook.search();
		else if(command == "EXIT")
			return (myAwesomePhoneBook.exit());
		else
			std::cout << "invalid command" << std::endl;
	}
}
