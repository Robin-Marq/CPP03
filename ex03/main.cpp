#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {

    ClapTrap player1("Robin");
	FragTrap player2("Evaluator");
	ScavTrap player4("ScavTrap");
    DiamondTrap player3;

    std::cout << '\n' << "My original name in ClapTrap was: " << player1.getName() << std::endl;

	player3.setName(player1.getName());
    player3.whoAmI();

	std::cout << '\n';
    player3.setHitpoints(player2.get_hp());
    player3.setEnergypoints(player4.get_ep());
    player3.setAttackDamage(player2.get_ad());

	std::cout << '\n';
    std::cout << "DiamondTrap have now Hitpoints value    " << player3.get_hp() << " inherited from Fragtrap" << std::endl;
    std::cout << "DiamondTrap have now Energypoints value " << player3.get_ep() << " inherited from ScavTrap" << std::endl;
    std::cout << "DiamondTrap have now AttackDamage value " << player3.get_ad() << " inherited from FragTrap" << std::endl;
	std::cout << '\n';

	std::cout << "Now comes the value check: " << std::endl;
	std::cout << "HP value of " << player1.getName() << " is: " << player1.get_hp() << std::endl;
	std::cout << "HP value of " << player2.getName() << " is: " << player2.get_hp() << std::endl;
	std::cout << "HP value of " << player4.getName() << " is: " << player4.get_hp() << std::endl;
	std::cout << "HP value of " << player3.getName() << " is: " << player3.get_hp() << std::endl;
	std::cout << '\n';

	std::cout << "Now comes the next value check: " << std::endl;
	std::cout << "EP value of " << player1.getName() << " is: " << player1.get_ep() << std::endl;
	std::cout << "EP value of " << player2.getName() << " is: " << player2.get_ep() << std::endl;
	std::cout << "EP value of " << player4.getName() << " is: " << player4.get_ep() << std::endl;
	std::cout << "EP value of " << player3.getName() << " is: " << player3.get_ep() << std::endl;
	std::cout << '\n';

	std::cout << "Now comes the next value check: " << std::endl;
	std::cout << "AD value of " << player1.getName() << " is: " << player1.get_ad() << std::endl;
	std::cout << "AD value of " << player2.getName() << " is: " << player2.get_ad() << std::endl;
	std::cout << "AD value of " << player4.getName() << " is: " << player4.get_ad() << std::endl;
	std::cout << "AD value of " << player3.getName() << " is: " << player3.get_ad() << std::endl;
	std::cout << '\n';

	std::cout << player3.getName();
	player3.guardGate();
	std::cout << '\n';

	std::cout << player3.getName() << " is now say good bye to you my dear evaluator. " << std::endl;
	std::cout << "With the function highFivesGuys() from FragTrap:" << std::endl;
	player3.highFivesGuys();
	std::cout << '\n';

    return 0;
}


