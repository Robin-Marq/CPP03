#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FRAGTRAP Default constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergypoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "FRAGTRAP constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergypoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FRAGTRAP copy constructor called" << std::endl;
	setHitpoints(100);
	setEnergypoints(100);
	setAttackDamage(30);
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAGTRAP destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		std::cout << "FRAGTRAP assignment operator called" << std::endl;
		this->setName(fragTrap.getName());
		this->setHitpoints(fragTrap.get_hp());
		this->setEnergypoints(fragTrap.get_ep());
		this->setAttackDamage(fragTrap.get_ad());
	}
	return (*this);
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FRAGTRAP attack function called\n";
    std::cout << this->getName() << " has attacked " << target << ", " << "causing " << this->get_ad() << " points of damage!" << std::endl;
    this->setEnergypoints(this->get_ep() - 1);
    std::cout << "The rest energy points of " << this->getName() << " is: " << this->get_ep() << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << this->getName() << " \"HIGH FIVES GUYS!\"" << std::endl;
}