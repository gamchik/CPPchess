#include <iostream>

#include "Board.h"

void move_piece(Board& board_instance, int x_old, int y_old, int x_new,
                int y_new) {
  board_instance.board[x_new][y_new].piece =
      board_instance.board[x_old][y_old].piece;
  board_instance.board[x_old][y_old].piece = 0;
}

int main() {
  std::cout << "Hello world" << std::endl;
  Board b;
  b.displayBoard();
  b.populateBoard();
  std::cout << "\n\n\n";
  b.displayBoard();
  move_piece(b, 1, 1, 2, 2);

  b.displayBoard();

  return 0;
}
