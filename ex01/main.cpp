#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int		hordeLength = 10;

	horde = zombieHorde(hordeLength, "Random Zombie");

	std::cout << std::endl;
	while (hordeLength-- > 0){
		horde[hordeLength].announce();
	}

	delete [] horde;





	/*Zombie *z1 = new Zombie("Diogo");
	z1->announce();
	deete(z1);*/

	/*Zombie *horde = new Zombie[3];
	(void) horde;
	horde[0] = Zombie(0);
	
	for (int i = 0; i < 3; i++) {
		//horde[i] = Zombie("abc"); // Chamando o construtor com o valor 'i'
		horde[i] = Zombie(concatenarStringComNumero("Zombie", i));
	}
	
	for (int i = 0; i < 3; i++) {
		horde[i].announce();
	}
	
	Libera a memória alocada
	delete[] horde;*/



	return(0);
}
