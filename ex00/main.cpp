#include "Zombie.hpp"

int	main(void)
{
	// A zombie on the heap
	Zombie	*z1 = newZombie("Heap Zombie");
	z1->announce();
	delete z1;

	// A zombie on the stack
	randomChump("Stack Zombie");
	return (0);
}
