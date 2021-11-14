#include <array>

#include "Square.h"
class Board {
 public:
  std::array<std::array<Square, 8>, 8> board;
  Board();
  void displayBoard();
  void populateBoard();
};
