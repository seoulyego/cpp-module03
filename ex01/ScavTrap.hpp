#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <string>

class ScavTrap {
	private:
		std::string		name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& object);
		ScavTrap&	operator=(const ScavTrap& object);
		~ScavTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif  // SCAV_TRAP_HPP