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
  std::cout << jack << std::endl << std::endl;

  std::cout << "Jack repairs itself for 3 hit points ..." << std::endl;
  jack.beRepaired(3);
  std::cout << jack << std::endl << std::endl;

  std::cout << "Jack takes 100 points of damage ..." << std::endl;
  jack.takeDamage(100);
  std::cout << jack << std::endl << std::endl;

  std::cout << "Jack tries to attack a target named " << target
            << " but has no hit points left ..." << std::endl;
  jack.attack(target);
  std::cout << jack << std::endl << std::endl;

  std::cout << "Jack tries to repair itself for 3 hit points but has no hit "
               "points left ..."
            << std::endl;
  jack.beRepaired(3);
  std::cout << jack << std::endl << std::endl;
}

void testDeux(void) {
  std::cout << std::endl << std::endl << "----- Test 2 -----" << std::endl;

  std::cout << std::endl;
  std::string name1 = "Jack";
  std::string name2 = "Davy";
  std::string name3 = "Will";
  std::string empty = "";

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

  std::cout << "Creating a ClapTrap with an empty name via parameterized "
               "constructor ..."
            << std::endl;
  ClapTrap emptyName(empty);
  std::cout << std::endl;
}

int main(void) {

  tesUno();
  testDeux();
  return (0);
}
