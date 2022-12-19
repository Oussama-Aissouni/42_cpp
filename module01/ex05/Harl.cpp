#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"debug", "info", "warning", "error"};

	void (Harl::*debug) (void);
	void (Harl::*info) (void);
	void (Harl::*warning) (void);
	void (Harl::*error) (void);
	debug = &Harl::debug;
	info = &Harl::info;
	warning = &Harl::warning;
	error = &Harl::error;
	void (Harl::*func_ptr[4])() = {debug, info, warning, error};
	void (Harl::*res)() = func_ptr[0];
	*res();
}