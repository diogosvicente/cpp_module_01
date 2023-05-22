#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << std::endl << "---------- Printing Memory Addresses ----------" << std::endl;
	std::cout << "The memory address of the string variable: \t" << &string << std::endl;
	std::cout << "The memory address held by stringPTR: \t\t" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: \t\t" << &stringREF << std::endl;

	std::cout << std::endl << "---------- Printing String Values ----------" << std::endl;
	std::cout << "The value of the string variable: \t" << string << std::endl;
	std::cout << "The value pointed to by stringPTR: \t" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: \t" << stringREF << std::endl << std::endl;
	return (0);
}
