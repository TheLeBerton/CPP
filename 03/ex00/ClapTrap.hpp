#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

#define COLOR "\033[1;34m"
#define RESET "\033[0m"

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

  std::string getName() const;
  int getHitPoints() const;
  int getEnergyPoints() const;
  int getAttackDamage() const;

private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;
  void _logAttack(const std::string &target, const std::string &color);
  void _logAttackFailed(const std::string &target, const std::string &color);
  void _logTakeDamage(unsigned int amount, const std::string &color);
  void _logTakeDamageFailed(const std::string &color);
  void _logBeRepaired(unsigned int amount, const std::string &color);
  void _logBeRepairedFailed(const std::string &color);
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif
