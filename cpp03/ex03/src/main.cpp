#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
    ClapTrap clap("CL4P-TP");
    ScavTrap scav("SC4V-TP");
    FragTrap frag("FR4G-TP");

    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    scav.attack("Target2");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    frag.attack("Target3");
    frag.takeDamage(15);
    frag.beRepaired(10);
    frag.highFivesGuys();

    FragTrap frag2 = frag;
    frag2.attack("Target4");

    FragTrap frag3;
    frag3 = frag;
    frag3.highFivesGuys();

    return 0;
}
