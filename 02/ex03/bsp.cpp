#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed totalAir = Point::getAire(a, b, c);
  float air1 = Point::getAire(point, b, c);
  float air2 = Point::getAire(a, point, c);
  float air3 = Point::getAire(a, b, point);
  totalAir = air1 + air2 + air3;
  if (totalAir == Point::getAire(a, b, c) && air1 > 0 && air2 > 0 && air3 > 0)
    return true;
  return false;
}
