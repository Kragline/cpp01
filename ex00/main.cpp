#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	*first = newZombie("Frist");
	first->announce();

	randomChump("Second");
	delete first;

	return (0);
}