#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << std::endl << "Zombie named: " << GREEN \
	<< this->_name << RESET << " has been created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie named: " << RED << this->_name << \
		RESET << " has been destroyed!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
