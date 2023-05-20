#ifndef ZOMBIE_HPP
# define  ZOMBIE_HPP

# define RED    "\033[1m\033[31m"
# define GREEN  "\033[1m\033[32m"
# define ULINE  "\033[4m"
# define RESET  "\033[0m"

#include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
		std::string	getName(void) const;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
