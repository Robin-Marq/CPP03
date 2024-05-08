#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_Name(), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "CLAPTRAP Default Constructor called" << std::endl;
};

ClapTrap::ClapTrap(const std::string &player) : _Name(player), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "CLAPTRAP Constructor called for " << _Name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CLAPTRAP Destructor called for " << _Name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	std::cout << "CLAPTRAP Copy constructor called" << std::endl;
	*this = copy;
}

// hitpoints means the health of the player!!!
void ClapTrap::beRepaired(unsigned int value)
{
    std::cout << _Name << " value of hit points before repair: " << _HitPoints << std::endl;


    if (_EnergyPoints == 0)
        std::cout << "Not enough energy points to repair\n";
    else
    {
        _HitPoints = _HitPoints + value;
        _EnergyPoints--;
    }

    std::cout << _Name << " value of hit points after repair: " << _HitPoints << std::endl;
    std::cout << "The rest energy points of " << _Name << " is: " << _EnergyPoints << "\n";
}


void ClapTrap::attack(const std::string& target)
{
	if (_HitPoints == 0)
	{
		std::cout << _Name << " is already dead and can not attack\n";
		return;
	}
    if(_EnergyPoints <= 0)
        std::cout << "not enough energy Points to attack\n";
    else
    {
        std::cout << "CLAPTRAP attack function called\n";
        _EnergyPoints--;
        std::cout << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!\n";
        std::cout << _Name << " Rest energy points is: " << _EnergyPoints << std::endl;
    }
}

//hitpoints means the health of the player!!!
void ClapTrap::takeDamage(unsigned int value) //hier weitermachen
{
    if (value > _HitPoints)
    {
        _HitPoints = 0;
    }
    else
    {
        _HitPoints -= value;
    if (_HitPoints == 0) {
        std::cout << _Name << " is already dead\n";
	}

    std::cout << _Name << " takes " << value << " points of damage!\n";
    std::cout << "The remaining hit points of " << _Name << " is: " << _HitPoints << "\n";
    }
}


ClapTrap& ClapTrap::operator=(const ClapTrap& newvalue)
{
    _Name = newvalue._Name;
    _HitPoints = newvalue._HitPoints;
    _EnergyPoints = newvalue._EnergyPoints;
    _AttackDamage = newvalue._AttackDamage;
    std::cout << "ClapTrap operator= called\n";
    return *this;
}

std::string ClapTrap::getName () const
{
    return _Name;
}


int ClapTrap::get_ep()
{
    return this->_EnergyPoints;
}

int ClapTrap::get_hp()
{
    return this->_HitPoints;
}

int ClapTrap::get_ad()
{
    return this->_AttackDamage;
}

void ClapTrap::setName(const std::string &name)
{
    this->_Name = name;
}

void ClapTrap::setHitpoints(unsigned int hp)
{
    this->_HitPoints = hp;
}

void ClapTrap::setEnergypoints(unsigned int ep)
{
    this->_EnergyPoints = ep;
}

void ClapTrap::setAttackDamage(unsigned int ad)
{
    this->_AttackDamage = ad;
}
