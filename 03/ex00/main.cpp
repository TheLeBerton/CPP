#include "ClapTrap.hpp"

#include <iostream>
#include <limits.h>
#include <limits>

std::string storyOne[] = {
    "----- Test 1 : The Rise and Fall of Jack the ClapTrap -----",
    "In the dusty wastelands, a lonely ClapTrap named 'Jack' rolls into "
    "town... gears squeaking, ego shining.",
    "With dramatic enthusiasm, he points at Davy and yells: 'Prepare to be "
    "mildly inconvenienced!'",
    "But karma is quick. A mysterious force hits Jack for 5 damage.",
    "Refusing to accept defeat, Jack tightens a few screws and repairs "
    "himself.",
    "Suddenly... a cannonball from the sky! 100 damage!",
    "From the ground, barely functional, Jack tries one last heroic attack...",
    "He attempts self-repair, whispering: 'I can fix this... probably...'",
    "Someone pokes the wreckage. Nothing happens.",
    "But wait... arcane engineering magic restores him!",
    "Feeling unstoppable, Jack goes on a wild attacking spree!",
    "Jack, still fully operational, tries to attack once more...",
    "He attempts a repair, but his battery is completely drained..."};

std::string storyTwo[] = {
    "----- Test 2 : The Clone Factory -----",
    "Deep inside an abandoned robot factory, new ClapTraps are being "
    "assembled...",
    "A nameless unit boots up first. No identity. No destiny.",
    "Then comes Jack, fresh from the production line, shiny and overconfident.",
    "The engineers decide to create a perfect clone using the copy "
    "constructor.",
    "Unsatisfied, they grab another empty shell and upload Jack's data using "
    "the assignment operator.",
    "Someone forgets to fill the registration form... an empty identity is "
    "created.",
    "Jack discovers a forbidden mirror technique and tries: jack = jack;",
    "Nothing explodes. The universe continues. Quality looks acceptable.",
    "Quality control begins: Jack gets smacked for 5 damage.",
    "The clones observe silently. They feel... nothing.",
    "Jack repairs himself, trying to look heroic.",
    "The clones remain untouched. Independence confirmed."};

void logStoryOne(int index) { std::cout << storyOne[index] << std::endl; }
void logStoryTwo(int index) { std::cout << storyTwo[index] << std::endl; }

void tesUno(void) {
  logStoryOne(0);
  std::string name = "Jack";
  std::string target = "Davy";

  logStoryOne(1);
  ClapTrap jack(name);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(2);
  jack.attack(target);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(3);
  jack.takeDamage(5);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(4);
  jack.beRepaired(3);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(5);
  jack.takeDamage(100);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(6);
  jack.attack(target);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(7);
  jack.beRepaired(3);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(8);
  jack.takeDamage(5);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(9);
  jack = ClapTrap(name + "_The_Revived");
  std::cout << jack << std::endl << std::endl;

  logStoryOne(10);
  for (int i = 0; i < 10; i++)
    jack.attack(target);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(11);
  jack.attack(target);
  std::cout << jack << std::endl << std::endl;

  logStoryOne(12);
  jack.beRepaired(3);
  std::cout << jack << std::endl << std::endl;
}

void testDeux(void) {
  std::cout << std::endl << std::endl;

  std::string name1 = "Jack";
  std::string empty = "";

  logStoryTwo(0);
  logStoryTwo(1);

  logStoryTwo(2);
  ClapTrap noName;
  std::cout << noName << std::endl << std::endl;

  logStoryTwo(3);
  ClapTrap jack(name1);
  std::cout << jack << std::endl << std::endl;

  logStoryTwo(4);
  ClapTrap dave(jack);
  std::cout << dave << std::endl << std::endl;

  logStoryTwo(5);
  ClapTrap will;
  will = jack;
  std::cout << will << std::endl << std::endl;

  logStoryTwo(6);
  ClapTrap emptyName(empty);
  std::cout << emptyName << std::endl << std::endl;

  logStoryTwo(7);
  jack = jack;
  std::cout << jack << std::endl << std::endl;

  logStoryTwo(8);

  logStoryTwo(9);
  jack.takeDamage(5);

  logStoryTwo(10);
  std::cout << "Jack : " << jack << std::endl;
  std::cout << "Dave : " << dave << std::endl;
  std::cout << "Will : " << will << std::endl << std::endl;

  logStoryTwo(11);
  jack.beRepaired(3);

  logStoryTwo(12);
  std::cout << "Jack : " << jack << std::endl;
  std::cout << "Dave : " << dave << std::endl;
  std::cout << "Will : " << will << std::endl << std::endl;
}

static void waitForEnter(void) {
	std::cout << "Press Enter to continue..." << std::endl;
	std::cin.get();
}

static void clearScreen() { std::cout << "\033[2J\033[H"; }

int main(void) {

  tesUno();
  waitForEnter();
  clearScreen();
  testDeux();
  waitForEnter();
  return (0);
}
