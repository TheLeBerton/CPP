#include "ClapTrap.hpp"

#include <iostream>

void tesUno(void) {
  std::cout << "----- Test 1 -----" << std::endl;
  std::string name = "Jack";
  std::string target = "Davy";
  std::cout << "Creating a ClapTrap named " << name << " ..." << std::endl;
  ClapTrap jack(name);
  std::cout << jack << std::endl << std::endl;
  std::cout << "Jack attacks a target named " << target << " ..." << std::endl;
  jack.attack(target);
  std::cout << std::endl;
  std::cout << "Jack takes 5 points of damage ..." << std::endl;
  jack.takeDamage(5);
  std::cout << std::endl;
  std::cout << "Jack repairs itself for 3 hit points ..." << std::endl;
  jack.beRepaired(3);
}

void testDeux(void) {
  std::cout << std::endl << std::endl << "----- Test 2 -----" << std::endl;

  std::cout << std::endl;
  std::string name1 = "Jack";
  std::string name2 = "Davy";
  std::string name3 = "Will";

  std::cout << "Creating a ClapTrap named '" << "default"
            << "' via default constructor ..." << std::endl;
  ClapTrap noName = ClapTrap();
  std::cout << std::endl;
  std::cout << "Creating a ClapTrap named '" << name1
            << "' via parameterized constructor ..." << std::endl;
  ClapTrap jack(name1);
  std::cout << std::endl;
  std::cout << "Creating a ClapTrap named '" << name1
            << "' via copy constructor ..." << std::endl;
  ClapTrap dave(jack);
  std::cout << std::endl;
  std::cout << "Creating a ClapTrap named '" << name1
            << "' via copy assignment operator ..." << std::endl;
  ClapTrap will = jack;
  std::cout << std::endl;

  std::cout << "Simulating attacks ..." << std::endl;
  noName.attack(name2);
  jack.attack(name2);
  dave.attack(name2);
  will.attack(name2);
  std::cout << std::endl;

  std::cout << "Simulating damage and repairs ..." << std::endl;
  noName.takeDamage(5);
  jack.takeDamage(5);
  dave.takeDamage(5);
  will.takeDamage(5);
  std::cout << std::endl;

  std::cout << "Simulating repairs ..." << std::endl;
  noName.beRepaired(3);
  jack.beRepaired(3);
  dave.beRepaired(3);
  will.beRepaired(3);
  std::cout << std::endl;
}

int main(void) {

  tesUno();
  testDeux();
  return (0);
}
