#include "Square.h"

#include <iostream>
std::ostream& operator<<(std::ostream& os, const Square& S) {
  os << "Squares Coordinates (" << S.x << "," << S.y << ")\n";
  return os;
}
