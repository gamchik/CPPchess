#include "Square.h"

#include <iostream>
std::ostream& operator<<(std::ostream& os, const Square& S) {
  os << "(" << S.x << "," << S.y << ")";
  return os;
}
