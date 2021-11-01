#include <array>

#include "Square.h"
class Board {
 public:
  std::array<std::array<Square, 8>, 8> board = {nullptr};
  Board();
  void displayBoard();
};
