#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::string s1("Robin");
	std::string s2("Evaluator");

    FragTrap player1(s1);
    FragTrap player2(s2);
	ClapTrap player3("ClapTrap");
	ScavTrap player4("ScavTrap");

    std::cout << '\n';
    player2.attack(s1);
    player1.takeDamage(player2.get_ad());
	std::cout << "The rest hp of " << player1.getName() << " is: " << player1.get_hp() << '\n';
    std::cout << '\n';
    player2.attack(s1);
    player1.takeDamage(player2.get_ad());
	std::cout << "The rest hp of " << player1.getName() << " is: " << player1.get_hp() << '\n';
    std::cout << '\n';
    player1.beRepaired(5);
    std::cout << '\n';
    player2.attack(s1);
	player1.takeDamage(player2.get_ad());
	std::cout << "The rest hp of " << player1.getName() << " is: " << player1.get_hp() << '\n';
    std::cout << '\n';
    player1.highFivesGuys();
    std::cout << '\n';
    player2.highFivesGuys();

    std::cout << '\n';
	player3.attack(s1);
	player1.takeDamage(player3.get_ad());
	std::cout << "The rest hp of " << player1.getName() << " is: " << player1.get_hp() << '\n';

	std::cout << '\n';
	player4.attack(s1);
	player1.takeDamage(player4.get_ad());
	std::cout << "The rest hp of " << player1.getName() << " is: " << player1.get_hp() << '\n';
	std::cout << '\n';

    return 0;
}

