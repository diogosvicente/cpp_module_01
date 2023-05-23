# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
    std::cout << "* Human B called: " << ULINE << this->_name << RESET << \
        " was created without a weapon equipped" << std::endl;
}

HumanB::~HumanB(void){}

void HumanB::attack(void)
{
    if (this->_weapon)
        std::cout << "* " << GREEN << this->_name << RESET << " attacked with " << \
            GREEN << this->_weapon->getType() << RESET << std::endl;        
    else
        std::cout << "* " << ULINE << this->_name << RESET<< " cannot attack, because has no weapon equipped" << std::endl;        
}

void HumanB::setWeapon(Weapon &w)
{
    if (this->_weapon)
        std::cout << "* " << ULINE << this->_name << RESET << " changed weapon from: " << ULINE << \
            this->_weapon->getType() << RESET << " to: " << ULINE << w.getType() << RESET << std::endl;
    else
        std::cout << "* " << ULINE << this->_name << RESET << " was equipped with a weapon: " << ULINE << \
            w.getType() << RESET << std::endl;
    this->_weapon = &w;
}