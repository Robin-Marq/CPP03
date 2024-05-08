#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_name(), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default Constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string player) : _name(player), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called for " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}

// hitpoints means the health of the player!!!
void ClapTrap::beRepaired(unsigned int value)
{
    std::cout << "ClapTrap " << _name << " value of hit points before repair: " << _hitPoints << std::endl;


    if (_energyPoints == 0)
        std::cout << "Not enough energy points to repair\n";
    else
    {
        _hitPoints = _hitPoints + value;
        _energyPoints--;
    }

    std::cout << "ClapTrap " << _name << " value of hit points after repair: " << _hitPoints << std::endl;
    std::cout << "The rest energy points of " << _name << " is: " << _energyPoints << "\n";
}


void ClapTrap::attack(const std::string& target)
{
    if(_energyPoints <= 0)
        std::cout << "not enough energy Points to attack\n";
    else
    {
        std::cout << "CLAPTRAP attack function called\n";
        _energyPoints--;
        std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
        std::cout << _name << " Rest energy points is: " << _energyPoints << std::endl;
    }
}

//hitpoints means the health of the player!!!
void ClapTrap::takeDamage(unsigned int value)
{
    std::cout << _name << " takes " << value << " points of damage!\n";

    if (_hitPoints <= value) {
        std::cout << _name << " is dead!\n";
        _hitPoints = 0;
    }
    else {
        _hitPoints -= value;
        std::cout << "The remaining hit points of " << _name << " is: " << _hitPoints << "\n";
    }
}



ClapTrap& ClapTrap::operator=(const ClapTrap& newvalue)
{
    _name = newvalue._name;
    _hitPoints = newvalue._hitPoints;
    _energyPoints = newvalue._energyPoints;
    _attackDamage = newvalue._attackDamage;
    std::cout << "ClapTrap operator= called\n";
    return *this;
}

std::string ClapTrap::getName () const
{
    return _name;
}


int ClapTrap::get_ep()
{
    return this->_energyPoints;
}

int ClapTrap::get_hp()
{
    return this->_hitPoints;
}

int ClapTrap::get_ad()
{
    return this->_attackDamage;
}

void ClapTrap::setName(const std::string &name)
{
    this->_name = name;
}

void ClapTrap::setHitpoints(unsigned int hp)
{
    this->_hitPoints = hp;
}

void ClapTrap::setEnergypoints(unsigned int ep)
{
    this->_energyPoints = ep;
}

void ClapTrap::setAttackDamage(unsigned int ad)
{
    this->_attackDamage = ad;
}
