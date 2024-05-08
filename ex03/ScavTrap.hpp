#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const std::string &player);
        ScavTrap(ScavTrap &scavTrap);
        ScavTrap &operator=(ScavTrap &clapTrap);

        void    attack(std::string const &target);
	    void	guardGate(void);
};

#endif