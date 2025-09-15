#include "Zombie.hpp"

int	main()
{
	Zombie	*first = newZombie("Frist");
	first->announce();

	randomChump("Second");
	delete first;

	return (0);
}