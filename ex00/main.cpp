#include "ClapTrap.hpp"

int main()
{
	std::string s1("Robin");
	std::string s2("Evaluator");

    ClapTrap player1(s1);
    ClapTrap player2(s2);

    std::cout << '\n';
    player2.attack(s1);
    player1.takeDamage(player2.get_ad());
    std::cout << '\n';
    player1.attack(s2);
    player2.takeDamage(player1.get_ad());
    std::cout << '\n';
    player2.attack(s1);
    player1.takeDamage(player2.get_ad());
    std::cout << '\n';
    player2.attack(s1);
    player1.takeDamage(player2.get_ad());
    std::cout << '\n';
    player1.beRepaired(5);
    std::cout << '\n';
    player2.attack(s1);
    player1.takeDamage(3);
    std::cout << '\n';
    player2.attack(s1);
    player1.takeDamage(3);
    std::cout << '\n';
   

    return 0;
}

