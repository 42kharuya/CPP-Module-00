#ifndef _PHONE_BOOK_H_
#define _PHONE_BOOK_H_
#include "Contact.hpp"

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