#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	*interface = 0;
	ClapTrap	a("A");
	ScavTrap	b("B");
	FragTrap	c("C");

	a.attack("B");
	b.takeDamage(a.getDamage());
	b.beRepaired(3);
	interface = &b;
	interface->attack("C");
	c.takeDamage(interface->getDamage());
	c.beRepaired(10);
	b.guardGate();
	c.attack("A");
	a.takeDamage(c.getDamage());
	c.highFivesGuys();
	return 0;
}
