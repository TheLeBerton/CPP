#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() {
  std::cout << "Entering ClapTrap default constructor" << std::endl;
  this->_name = "default";
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
  std::cout << "Entering ClapTrap parameterized constructor" << std::endl;
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
  std::cout << "Entering ClapTrap copy constructor" << std::endl;
  this->_name = other._name;
  this->_hitPoints = other._hitPoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "Entering ClapTrap copy assignment operator" << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
  }
  return (*this);
}

ClapTrap::~ClapTrap() {
  std::cout << "Entering ClapTrap destructor" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (this->_energyPoints > 0 && this->_hitPoints > 0) {
    std::cout << "ClapTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!"
              << std::endl;
    this->_energyPoints--;
  } else {
    std::cout << "ClapTrap " << this->_name
              << " cannot attack due to insufficient energy or hit points."
              << std::endl;
  }
}

void ClapTrap::takeDamage(const unsigned int amount) {
  if (this->_hitPoints > 0) {
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
      this->_hitPoints = 0;
    std::cout << "ClapTrap " << this->_name << " takes " << amount
              << " points of damage! Remaining hit points: " << this->_hitPoints
              << std::endl;
  } else {
    std::cout << "ClapTrap " << this->_name
              << " is already destroyed and cannot take more damage."
              << std::endl;
  }
}

void ClapTrap::beRepaired(const unsigned int amount) {
  if (this->_energyPoints > 0 && this->_hitPoints > 0) {
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount
              << " points! Current hit points: " << this->_hitPoints
              << std::endl;
  } else {
    std::cout << "ClapTrap " << this->_name
              << " cannot repair due to insufficient energy or hit points."
              << std::endl;
  }
}
