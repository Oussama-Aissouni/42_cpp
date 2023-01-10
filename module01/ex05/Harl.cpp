#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	int	pos = -1;
	int	i = 0;
	while (i < 3)
	{
		if (level == levels[i])
		{
			pos = i;
			break;
		}
		i++;
	}
	if (pos == -1)
		return;
	void (Harl::*debug)() = &Harl::debug;
	void (Harl::*info)() = &Harl::info;
	void (Harl::*warning)() = &Harl::warning;
	void (Harl::*error)() = &Harl::error;
	void (Harl::*func_ptr[])() = {debug,info,warning,error};
	(this->*func_ptr[pos])();
}
