#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "SCAVTRAP Default constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergypoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "SCAVTRAP constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergypoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
    std::cout << "SCAVTRAP copy constructor called" << std::endl;
    *this = scavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAVTRAP destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &scavTrap)
{
	if (this != &scavTrap)
	{
		std::cout << "SCAVTRAP assignation operator called" << std::endl;
		this->setName(scavTrap.getName());
		this->setHitpoints(scavTrap.get_hp());
		this->setEnergypoints(scavTrap.get_ep());
		this->setAttackDamage(scavTrap.get_ad());
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "SCAVTRAP attack function called\n";
    std::cout << this->getName() << " has attacked " << target << ", causing " << this->get_ad() << " points of damage!" << std::endl;
    this->setEnergypoints(this->get_ep() - 1);
    std::cout << "The rest energy points of " << this->getName() << " is: " << this->get_ep() << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout  << this->getName() << " is now in Gate keeper mode." << std::endl;
}
