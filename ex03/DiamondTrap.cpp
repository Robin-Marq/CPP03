#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(), _name()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) :ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	_name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this != &copy)
    {
        std::cout << "DiamondTrap assignation operator called" << std::endl;
    }
    return (*this);
}


void DiamondTrap::whoAmI()
{
	std::cout << "My name in the Diamond Trap is " << _name  << std::endl;
}


void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::setName(const std::string &newName)
{
	 _name = newName + "_clap_name";
}

std::string& DiamondTrap::getName() const
{
    return (std::string&)_name;
}


