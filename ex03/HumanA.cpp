#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << _name << " was created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << " was destroyed" << std::endl;
}

void	HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
