#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(void) {
	this->name = "default";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;

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
	std::cout << "ScavTrap " << this->name << " attacks " << target \
			<< ", " << this->AttackDamage << " points of damage!" << std::endl;
	this->EnergyPoints--;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (amount > this->HitPoints) {
		this->HitPoints = 0;
		std::cout << "ScavTrap " << this->name << " is died" << std::endl;
	}
	else {
		this->HitPoints -= amount;
		std::cout << "ScavTrap " << this->name << " takes damage " << amount << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	this->HitPoints += amount;
	this->EnergyPoints--;
	std::cout << "ScavTrap " << this->name << " is repaired itself. HP: " << this->HitPoints << std::endl;
}
