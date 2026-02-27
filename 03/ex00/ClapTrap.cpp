#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() {
  this->_name = "default";
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
  std::cout << "Entering " << COLOR << "ClapTrap " << _name << RESET
            << " default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
  std::cout << "Entering " << COLOR << "ClapTrap " << _name << RESET
            << " parameterized constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
  this->_name = other._name;
  this->_hitPoints = other._hitPoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
  std::cout << "Entering " << COLOR << "ClapTrap " << _name << RESET
            << " copy constructor. Copying from " << other._name << std::endl;

}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "Entering " << COLOR << "ClapTrap " << _name << RESET
            << " copy assignment operator. Copying from " << other._name
            << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
  }
  return (*this);
}

ClapTrap::~ClapTrap() {
  std::cout << "Entering " << COLOR << "ClapTrap " << _name << RESET
            << " destructor" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (this->_energyPoints > 0 && this->_hitPoints > 0) {
    this->_logAttack(target);
    this->_energyPoints--;
  } else {
    this->_logAttackFailed(target);
  }
}

void ClapTrap::takeDamage(const unsigned int amount) {
  if (this->_hitPoints > 0) {
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
      this->_hitPoints = 0;
    _logTakeDamage(amount);
  } else {
    _logTakeDamageFailed();
  }
}

void ClapTrap::beRepaired(const unsigned int amount) {
  if (this->_energyPoints > 0 && this->_hitPoints > 0) {
    this->_hitPoints += amount;
    this->_energyPoints--;
    _logBeRepaired(amount);
  } else {
    _logBeRepairedFailed();
  }
}

std::string ClapTrap::getName() const { return (this->_name); }
int ClapTrap::getHitPoints() const { return (this->_hitPoints); }
int ClapTrap::getEnergyPoints() const { return (this->_energyPoints); }
int ClapTrap::getAttackDamage() const { return (this->_attackDamage); }

void ClapTrap::_logAttack(const std::string &target) {
  std::cout << COLOR << "ClapTrap " << RESET << this->_name << " attacks "
            << target << ", causing " << this->_attackDamage
            << " points of damage!" << std::endl;
}

void ClapTrap::_logAttackFailed(const std::string &target) {
  std::cout << COLOR << "ClapTrap " << RESET << this->_name << " cannot attack "
            << target << " due to insufficient energy or hit points."
            << std::endl;
}

void ClapTrap::_logTakeDamage(unsigned int amount) {
  std::cout << COLOR << "ClapTrap " << RESET << this->_name << " takes "
            << amount
            << " points of damage! Remaining hit points: " << this->_hitPoints
            << std::endl;
}

void ClapTrap::_logTakeDamageFailed() {
  std::cout << COLOR << "ClapTrap " << RESET << this->_name
            << " is already destroyed and cannot take more damage."
            << std::endl;
}

void ClapTrap::_logBeRepaired(unsigned int amount) {
  std::cout << COLOR << "ClapTrap " << RESET << this->_name
            << " repairs itself for " << amount
            << " points! Current hit points: " << this->_hitPoints << std::endl;
}

void ClapTrap::_logBeRepairedFailed() {
  std::cout << COLOR << "ClapTrap " << RESET << this->_name
            << " cannot repair due to insufficient energy or hit points."
            << std::endl;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &i) {
  o << COLOR << "ClapTrap " << RESET << i.getName() << ": "
    << "HP: " << i.getHitPoints() << ", "
    << "EP: " << i.getEnergyPoints() << ", "
    << "AD: " << i.getAttackDamage();
  return (o);
}
