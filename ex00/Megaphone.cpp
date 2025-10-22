#include <iostream>
#include <cctype>

const std::string EMPTY_MSG= "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

void to_uppercase(const char *str)
{
	while(*str != '\0')
	{
		std::cout << static_cast<char>(toupper(*str));
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << EMPTY_MSG << std::endl;
		return (-1);
	}
	for (int i = 1; argv[i] != NULL; i++)
		to_uppercase(argv[i]);
	std::cout << std::endl;
	return (0);
}