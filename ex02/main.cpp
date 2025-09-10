#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "String address (variable): " << &str << std::endl;
	std::cout << "String address (pointer): " << stringPTR << std::endl;
	std::cout << "String address (reference): " << &stringREF << std::endl;

	std::cout << "String value (variable): " << str << std::endl;
	std::cout << "String value (pointer): " << *stringPTR << std::endl;
	std::cout << "String value (reference): " << stringREF << std::endl;

	return (0);
}