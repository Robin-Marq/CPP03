#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(ClapTrap &clapTrap);
    ClapTrap(const std::string &player);
    ClapTrap& operator=(const ClapTrap &variable);

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

    std::string& getName() const;
};
#endif
