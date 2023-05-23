# include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon) : _name(name), _weapon(weapon){}
HumanA::~HumanA(void)
{
    std::cout << "Destructing HumanA" << std::endl;
}
void HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}