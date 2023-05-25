#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void) {}

void Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" <<  std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void  Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void  Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ptrComplain[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index = getLevelIndex(level, levels);
	if (index != -1)
		(this->*ptrComplain[index])();
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

int getLevel(const std::string &argv)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			return(i);
	return(-1);
}

void	switchLevel(Harl &harl, std::string argv)
{
	for (int i = getLevel(argv); i < 4; i++)
	{
		switch (i)
		{
			case 0:
				harl.complain("DEBUG");
				std::cout << std::endl;
				break;
			case 1:
				harl.complain("INFO");
				std::cout << std::endl;
				break;
			case 2:
				harl.complain("WARNING");
				std::cout << std::endl;
				break;
			case 3:
				harl.complain("ERROR");
				std::cout << std::endl;
				break;
			default:
				std::cout << RED << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
				return;
		}
	}
}
