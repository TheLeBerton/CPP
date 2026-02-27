#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

# define COLOR "\033[1;34m"
# define RESET  "\033[0m"

class ClapTrap {
public:
  ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);
  ~ClapTrap();

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;
  void _logAttack(const std::string &target);
  void _logAttackFailed(const std::string &target);
  void _logTakeDamage(unsigned int amount);
  void _logTakeDamageFailed();
  void _logBeRepaired(unsigned int amount);
  void _logBeRepairedFailed();

};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif
