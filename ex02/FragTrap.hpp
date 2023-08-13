#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& object);
		FragTrap&	operator=(const FragTrap& object);
		~FragTrap();

		void	attack(const std::string& target);
		void	highFivesGuys();
};

#endif  // FRAG_TRAP_HPP
