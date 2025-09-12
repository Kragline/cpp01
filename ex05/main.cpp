#include "Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	userInput;

	while (true)
	{
		std::cout << "Level for Harl -> ";
		getline(std::cin, userInput);
		harl.complain(userInput);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
	}
	return (0);
}
