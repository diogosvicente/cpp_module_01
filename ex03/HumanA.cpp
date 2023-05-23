# include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "* Human A called: " << ULINE << name << RESET << \
        " was created with the weapon: " << ULINE << weapon.getType() << RESET << std::endl;
}

HumanA::~HumanA(void){}

void HumanA::attack(void) const
{
    std::cout << "* " << GREEN << this->_name << RESET << " attacked with " << \
        GREEN << this->_weapon.getType() << RESET << std::endl;
}

void HumanA::setWeapon(Weapon w)
{
    std::cout << "* " << ULINE << this->_name << RESET << " changed weapon from: " << ULINE << \
        this->_weapon.getType() << RESET << " to: " << ULINE << w.getType() << RESET << std::endl;
        this->_weapon = w;
}