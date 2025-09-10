#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Gagas";
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " was born!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " was destroyed!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

