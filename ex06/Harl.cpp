#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug() const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info() const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning() const
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error() const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

void	Harl::complain(std::string level) const
{
	int	i;
	void (Harl::*methodPtrs[4])(void) const = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	if (level.empty())
		return ;
	for (i = 0; i < 4; i++)
		if (level == levels[i])
			break ;
	if (i > 3)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	for (int j = i; j < 4; j++)
	{
		std::cout << "[ " << levels[j] << " ]" << std::endl;
		(this->*methodPtrs[j])();
		std::cout << std::endl;
	}
}
