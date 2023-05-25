#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc == 2)
		switchLevel(harl, argv[1]);
    else
		std::cout << RED << "Incorrect argument provided." << RESET << std::endl;
    return(0);
}
