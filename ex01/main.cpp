#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::string s1("Robin");
	std::string s2("Evaluator");

    ClapTrap player1(s1);
    ScavTrap player2(s2);
	ClapTrap player3(player1);
	ClapTrap player4 = player1;

    std::cout << '\n';
	std::cout << "The values from player 3 with the copy constructor are: " << player3.get_hp() << " " << player3.get_ep() << " " << player3.get_ad() <<std::endl;
	std::cout << "The values from player 4 with the assignation operator are: " << player4.get_hp() << " " << player4.get_ep() << " " << player4.get_ad() <<std::endl;

    std::cout << '\n';
    player1.attack(s2);
    player2.takeDamage(player1.get_ad());

    std::cout << '\n';
	player1.attack(s2);
    player2.takeDamage(player1.get_ad());

    std::cout << '\n';
	player1.attack(s2);
    player2.takeDamage(player1.get_ad());

    std::cout << '\n';
	player1.attack(s2);
    player2.takeDamage(player1.get_ad());

    std::cout << '\n';
	player2.beRepaired(10);
	std::cout << '\n';
    player2.guardGate();
    std::cout << '\n';

	player2.attack(s1);
	player1.takeDamage(player2.get_ad());
	std::cout << '\n';
	std::cout << "The values from player 1 and player 2 are: " << player1.get_hp() << " " << player2.get_hp() << std::endl;
	player2.attack(s1);
	player1.takeDamage(player2.get_ad());
	std::cout << '\n';

	std::cout << "Now comes the value check: " << std::endl;
	std::cout << "HP value of " << player1.getName() << " is: " << player1.get_hp() << std::endl;
	std::cout << "HP value of " << player2.getName() << " is: " << player2.get_hp() << std::endl;
	std::cout << '\n';


    return 0;
}

