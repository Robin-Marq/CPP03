#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _Name;
    unsigned int _HitPoints;
    unsigned int _EnergyPoints;
    unsigned int _AttackDamage;

public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(ClapTrap &clapTrap);
    ClapTrap(const std::string &player);
    void attack(const std::string &target);
    void takeDamage(unsigned int value);
    void beRepaired(unsigned int value);
    void setName (const std::string &name);
    void setHitpoints(unsigned int Hitpoints);
    void setEnergypoints(unsigned int Energypoints);
    void setAttackDamage(unsigned int AttackDamage);
    int get_ep();
    int get_hp();
    int get_ad();
    std::string getName() const;
    ClapTrap& operator=(const ClapTrap &variable);
};
#endif
