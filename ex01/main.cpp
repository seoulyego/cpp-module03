#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	*interface = 0;
	ClapTrap	a("A");
	ScavTrap	b("B");

	a.attack("B");
	b.takeDamage(a.getDamage());
	b.beRepaired(3);
	interface = &b;
	interface->attack("A");
	a.takeDamage(interface->getDamage());
	a.beRepaired(10);
	b.guardGate();
	return 0;
}
