#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook myAwesomePhoneBook;

	std::cout << "Welcome to MyAwesomePhoneBook!!" << std::endl;
	while (1) {
		std::string	command;

		std::cout << "\nEnter the command ADD, SEARCH, or EXIT." << std::endl;
		std::cout << PROMPT;
		std::getline(std::cin, command);
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
