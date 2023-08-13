#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap() {
	this->name = "default";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;

	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& object) {
	this->name = object.name;
	this->HitPoints = object.HitPoints;
	this->EnergyPoints = object.EnergyPoints;
	this->AttackDamage = object.AttackDamage;

	std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& object) {
	this->name = object.name;
	this->HitPoints = object.HitPoints;
	this->EnergyPoints = object.EnergyPoints;
	this->AttackDamage = object.AttackDamage;

	std::cout << "ScavTrap " << name << " copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->HitPoints == 0 || this->EnergyPoints == 0)
		std::cout << "ScavTrap " << this->name << " can't do anything" << std::endl;
	else {
		std::cout << "ScavTrap " << this->name << " attacks " << target \
				<< ", " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode" << std::endl;
}
