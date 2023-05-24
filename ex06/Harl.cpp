#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void) {}

void Harl::_debug(void)
{
	std::cout << BOLD << "\"DEBUG\"" << RESET << "\t  level: " << ITALIC << \
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << \
	RESET << std::endl;
}

void Harl::_info(void)
{
	std::cout << BOLD << "\"INFO\"" << RESET << "\t  level: " << ITALIC << \
	"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << \
	RESET << std::endl;
}

void  Harl::_warning(void)
{
	std::cout << BOLD << "\"WARNING\"" << RESET << " level: " << ITALIC << \
	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << \
	RESET << std::endl;
}

void  Harl::_error(void)
{
	std::cout << BOLD << "\"ERROR\"" << RESET << "\t  level: " << ITALIC << \
	"This is unacceptable! I want to speak to the manager now." << \
	RESET << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ptr_complain[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index = getLevelIndex(level, levels);
	if (index != -1)
		(this->*ptr_complain[index])();
	else
		std::cout << RED << "Invalid complaint level: " << ULINE << BOLD << level << RESET << std::endl;
}

int Harl::getLevelIndex(const std::string &level, const std::string levels[])
{
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return(i);
	}
	return(-1);
}