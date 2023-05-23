#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon knife = Weapon("Knife");
	Weapon sword = Weapon("Sword");
	HumanA diogo = HumanA("Diogo", knife);

	diogo.attack();
	diogo.setWeapon(sword);
	diogo.attack();

	std::cout << std::endl;
	Weapon battleFury = Weapon("Battle Fury");
	HumanB evaluator = HumanB("Evaluator");

	evaluator.attack();
	evaluator.setWeapon(battleFury);
	evaluator.attack();
	return (0);
}
