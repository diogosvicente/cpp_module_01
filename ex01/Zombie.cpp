#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "";
	std::cout << std::endl << GREEN << "(null)" << RESET \
	<< " zombie has been created!";
}

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

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName(void) const
{
	return(this->_name);
}

void	zombieNbr(int n)
{
	if (n < 10)
		std::cout << 0 << n << " ";
	else
		std::cout << n << " ";
}

void	hordeHeader(void)
{
	std::cout << std::endl << std::endl \
		<< "------------------------------------------------" \
		<< std::endl << "---------- You have alerted the horde" \
		<< " ----------"  << std::endl \
		<< "------------------------------------------------" \
		<< std::endl << std::endl;
}

void	hordeFooter(void)
{
	std::cout << std::endl \
	<< "------------------------------------------" \
	<< std::endl << "---------- Destroying the horde ----------" \
	<< std::endl << "------------------------------------------" \
	<< std::endl << std::endl;
}