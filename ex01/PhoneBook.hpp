#ifndef _PHONE_BOOK_H_
#define _PHONE_BOOK_H_
#include <sstream>
#include "Contact.hpp"

#define PROMPT ">"

class PhoneBook {
	public:
	 PhoneBook();
	 void	add(void);
	 void	search(void);
	 int	exit(void);

	private:
	 Contact	_contactList[8];
	 int		_contactNum;
};

#endif // _PHONE_BOOK_H_