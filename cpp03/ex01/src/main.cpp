#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
    ClapTrap clap("CL4P-TP");
    ScavTrap scav("SC4V-TP");

    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    scav.attack("Target2");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    ScavTrap scav2 = scav;
    scav2.attack("Target3");

    ScavTrap scav3;
    scav3 = scav;
    scav3.guardGate();

    return 0;
}