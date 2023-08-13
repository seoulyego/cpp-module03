#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& object);
		ScavTrap&	operator=(const ScavTrap& object);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif  // SCAV_TRAP_HPP
