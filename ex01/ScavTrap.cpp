#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default SCAVTRAP constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "SCAVTRAP constructor called" << std::endl;
	setHitpoints(100);
	setEnergypoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &newscavTrap)
{
    std::cout << "SCAVTRAP copy constructor called" << std::endl;
    this->setName(newscavTrap.getName());
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
	std::cout << "Value of hp is: " << ClapTrap::_HitPoints << std::endl;

	if (ClapTrap::get_hp() == 0)
	{
		std::cout << "SCAVTRAP " << ClapTrap::getName() << " is dead, it can't be attacked anymore." << std::endl;
		return ;
	}

    std::cout << this->getName() << " has attacked " << target << ", causing " << this->get_ad() << " points of damage!" << std::endl;
    ClapTrap::setHitpoints(ClapTrap::get_hp() - get_ad());
	this->setEnergypoints(this->get_ep() - 1);
    std::cout << "The rest energy points of " << this->getName() << " is: " << this->get_ep() << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout  << this->getName() << " is now in Gate keeper mode." << std::endl;
}