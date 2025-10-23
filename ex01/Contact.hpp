#ifndef _CONTACT_H_
#define _CONTACT_H_
#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	public:
	 Contact();
	 bool	setInfo(void);
	 bool	isEmpty(void);
	 void	printContactPublic(void);
	 void	printContactPrivate(void);

	private:
     std::string	_firstName;
	 std::string	_lastName;
	 std::string	_nickName;
	 std::string	_phoneNumber;
	 std::string	_darkestSecret;
};

#endif // _CONTACT_H_