#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << std::endl << "Zombie named: " << BOLDGREENUL \
	<< this->_name << RESET << " has been created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie named: " << BOLDREDUL << this->_name << \
		RESET << " has been destroyed!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << ULINE << this->_name << RESET \
		": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name) {
	return new Zombie(name);
}

void	randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
}
