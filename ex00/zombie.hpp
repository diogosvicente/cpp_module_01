#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define BOLDREDUL	"\033[1m\033[4m\033[31m"
# define BOLDGREENUL	"\033[1m\033[4m\033[32m"
# define ULINE		"\033[4m"
# define RESET		"\033[0m"

# include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
