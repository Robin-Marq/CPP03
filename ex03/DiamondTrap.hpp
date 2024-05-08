#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;

public:
    DiamondTrap();
	~DiamondTrap();
	DiamondTrap(DiamondTrap const &copy);
	DiamondTrap &operator=(const DiamondTrap &variable);
	DiamondTrap(const std::string &name);

	void	whoAmI();
	void 	attack(std::string const& target);
	void	setName (const std::string &newName);

	std::string& getName() const;

};

#endif