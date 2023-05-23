#include "Weapon.hpp"

Weapon::Weapon(const std::string &initialType) : _type(initialType){}
Weapon::~Weapon(){}
const std::string &Weapon::getType(void) const
{
	return(this->_type);
}

void Weapon::setType(const std::string &newType)
{
	this->_type = newType;
}