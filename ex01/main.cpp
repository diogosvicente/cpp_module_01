#include "Zombie.hpp"

int	main(void)
{

	Zombie *horde;
	int		hordeLength = 15;
	int		count = 1;

	horde = zombieHorde(hordeLength, "Random Zombie");
	hordeHeader();
	while (hordeLength-- > 0){
		zombieNbr(count++);
		horde[hordeLength].announce();
	}
	hordeFooter();
	delete [] horde;
	return(0);
}