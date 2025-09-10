#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "Weapon " << _type << " created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << _type << " destroyed" << std::endl;
}

void	Weapon::setType(std::string type) { _type = type; }

const std::string	Weapon::getType() const { return (_type); }
