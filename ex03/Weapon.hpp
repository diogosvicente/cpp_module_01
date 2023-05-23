#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

const std::string RESET = "\033[0m";
const std::string ULINE = "\033[4m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(const std::string &initialType);
		~Weapon(void);
		const std::string &getType(void) const;
		void setType(const std::string &newType);
};

#endif
