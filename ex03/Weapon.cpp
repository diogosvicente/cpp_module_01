#include "Weapon.hpp"

Weapon::Weapon(const std::string &initialType) : _type(initialType)
{
	std::cout << "Constructing" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructing" << std::endl;
}
const std::string &Weapon::getType(void) const
{
	return(this->_type);
}

void Weapon::setType(const std::string &newType)
{
	this->_type = newType;
}