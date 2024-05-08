#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(ClapTrap &clapTrap);
    ClapTrap(const std::string player);
    void attack(const std::string& target);
    void takeDamage(unsigned int value);
    void beRepaired(unsigned int value);
    void setName (const std::string &name);
    void setHitpoints(unsigned int hitpoints);
    void setEnergypoints(unsigned int energypoints);
    void setAttackDamage(unsigned int attackDamage);
    int get_ep();
    int get_hp();
    int get_ad();
    std::string getName() const;
    ClapTrap& operator=(const ClapTrap& variable);
};
#endif
