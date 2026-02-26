#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

void runTest(Point a, Point b, Point c, Point p, const std::string &desc) {
  std::cout << desc << " -> ";
  if (bsp(a, b, c, p))
    std::cout << "INSIDE" << std::endl;
  else
    std::cout << "OUTSIDE" << std::endl;
}

int main(void) {
  Point a(0, 0);
  Point b(10, 0);
  Point c(0, 10);

  // Inside
  runTest(a, b, c, Point(1, 1), "( 1,  1) - près du coin A");
  runTest(a, b, c, Point(2, 2), "( 2,  2) - centre-bas");
  runTest(a, b, c, Point(3, 3), "( 3,  3) - milieu");

  std::cout << std::endl;
  // Outside
  runTest(a, b, c, Point(15, 15), "(15, 15) - loin en diagonale");
  runTest(a, b, c, Point(-1, -1), "(-1, -1) - négatif");
  runTest(a, b, c, Point(10, 10), "(10, 10) - sur l'hypoténuse étendue");
  runTest(a, b, c, Point(0, 11), "( 0, 11) - au dessus de C");
  runTest(a, b, c, Point(11, 0), "(11,  0) - à droite de B");

  std::cout << std::endl;
  // Edge cases
  runTest(a, b, c, Point(0, 0), "( 0,  0) - sommet A");
  runTest(a, b, c, Point(5, 0), "( 5,  0) - milieu côté AB");
  runTest(a, b, c, Point(5, 5), "( 5,  5) - milieu hypoténuse BC");

  return 0;
}
