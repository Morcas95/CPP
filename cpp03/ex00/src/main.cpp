#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1;              // Default constructor
    ClapTrap clap2("CL4P-TP");   // Constructor con nombre

    clap1.attack("Target1");     // Ataque con default
    clap2.attack("Target2");

    clap1.takeDamage(5);         // Tomar daño
    clap2.takeDamage(12);
    clap2.beRepaired(1);
    clap2.attack("Target1");

    clap1.beRepaired(3);         // Reparación
    clap2.beRepaired(6);

    ClapTrap clap3(clap2);      // Copy constructor
    clap3.attack("Target3");

    clap1 = clap3;               // Assignment operator
    clap1.attack("Target4");

    return 0;
}
