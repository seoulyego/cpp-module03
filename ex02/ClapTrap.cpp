#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap() {
	this->name = "default";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;

	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& object) {
	this->name = object.name;
	this->HitPoints = object.HitPoints;
	this->EnergyPoints = object.EnergyPoints;
	this->AttackDamage = object.AttackDamage;

	std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& object) {
	this->name = object.name;
	this->HitPoints = object.HitPoints;
	this->EnergyPoints = object.EnergyPoints;
	this->AttackDamage = object.AttackDamage;

	std::cout << "ClapTrap " << name << " copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->HitPoints == 0 || this->EnergyPoints == 0)
		std::cout << "ClapTrap " << this->name << " can't do anything" << std::endl;
	else {
		std::cout << "ClapTrap " << this->name << " attacks " << target \
				<< ", " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount > this->HitPoints) {
		this->HitPoints = 0;
		std::cout << this->name << " is died" << std::endl;
	}
	else {
		this->HitPoints -= amount;
		std::cout << this->name << " takes damage " << amount << " (HP: " << this->HitPoints << ")" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints == 0 || this->EnergyPoints == 0)
		std::cout << this->name << " can't do anything" << std::endl;
	else {
		this->HitPoints += amount;
		this->EnergyPoints--;
		std::cout << this->name << " is repaired itself " << amount << " (HP: " << this->HitPoints << ")" << std::endl;
	}
}

unsigned int	ClapTrap::getDamage() {
	return this->AttackDamage;
}
