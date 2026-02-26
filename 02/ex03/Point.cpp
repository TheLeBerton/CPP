#include "Point.hpp"


float	getAbs(float value) {
	if (value < 0)
		return -value;
	return value;
}

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &src) : _x(src._x), _y(src._y) {}

Point &Point::operator=(const Point &rhs) {
  if (this != &rhs) {
  }
  return *this;
}

Fixed Point::getX(void) const { return this->_x; }
Fixed Point::getY(void) const { return this->_y; }

float Point::getAire(const Point a, const Point b, const Point c) {
  float aire =
      (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
       b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
       c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) /
      2.0f;
  return getAbs(aire);
}

Point::~Point(void) {}
