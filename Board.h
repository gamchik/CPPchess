#include <array>

#include "Square.h"
class Board {
 private:
  std::array<std::array<Square, 8>, 8> board;
 public:
  Board();
  void displayBoard();
  void populateBoard();
};
