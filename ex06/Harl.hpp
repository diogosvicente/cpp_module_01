#include <iostream>
#include <string>

const std::string RED    = "\033[31m";
const std::string ULINE  = "\033[4m";
const std::string RESET  = "\033[0m";
const std::string GREEN  = "\033[32m";
const std::string BOLD   = "\033[1m";
const std::string ITALIC   = "\033[3m";

class Harl
{
	private:
	    void _debug(void);
	    void _info(void);
	    void _warning(void);
	    void _error(void);
	public:
		Harl(void);
		~Harl(void);
	    void complain(std::string level);
		int getLevelIndex(const std::string &level, const std::string levels[]);
};