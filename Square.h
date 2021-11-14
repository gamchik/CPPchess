#include <iostream>

#include "Piece.h"

class Square {
 public:
  Piece* piece = 0;
  int x = 0;
  int y = 0;
  bool color = 1;

  friend std::ostream& operator<<(std::ostream& os, const Square& S);
};
