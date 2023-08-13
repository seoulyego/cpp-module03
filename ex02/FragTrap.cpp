#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap() {
	this->name = "default";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;

	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& object) {
	this->name = object.name;
	this->HitPoints = object.HitPoints;
	this->EnergyPoints = object.EnergyPoints;
	this->AttackDamage = object.AttackDamage;

	std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& object) {
	this->name = object.name;
	this->HitPoints = object.HitPoints;
	this->EnergyPoints = object.EnergyPoints;
	this->AttackDamage = object.AttackDamage;

	std::cout << "FragTrap " << name << " copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (this->HitPoints == 0 || this->EnergyPoints == 0)
		std::cout << "FragTrap " << this->name << " can't do anything" << std::endl;
	else {
		std::cout << "FragTrap " << this->name << " attacks " << target \
				<< ", " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name << " high five!" << std::endl;
}
