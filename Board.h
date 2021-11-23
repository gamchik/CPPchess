#include <array>
#include <unordered_map>

#include "Square.h"
class Board {
 private:
  std::array<std::array<Square, 8>, 8> board;

 public:
  Board();
  void displayBoard();
  void populateBoard();
  int normX(int x) {
    std::unordered_map<int, int> x_norm = {{1, 0}, {2, 1}, {3, 2}, {4, 3},
                                           {5, 4}, {6, 5}, {7, 6}, {8, 7}};
    return x_norm.at(x);
  };
  int normY(int y) {
    std::unordered_map<int, int> y_norm = {{1, 7}, {2, 6}, {3, 5}, {4, 4},
                                           {5, 3}, {6, 2}, {7, 1}, {8, 0}};
    return y_norm.at(y);
  };
  void move_piece(int x_old, int y_old, int x_new, int y_new) {
    board[normY(y_new)][normX(x_new)].piece =
        board[normY(y_old)][normX(x_old)].piece;
    board[normY(y_old)][normX(x_old)].piece = 0;
  }
};
