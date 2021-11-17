#include "Board.h"

#include <iostream>
Board::Board() {
  for (int i = 8; i > 0; i--) {
    for (int j = 8; j > 0; j--) {
      board[i][j].x = i;
      board[i][j].y = j;
    }
  }
}

void Board::displayBoard() {
  int i = 8;
  for (int i = 'A'; i <= 'H'; i++) {
    std::cout << "  " << char(i) << " ";
  }
  std::cout << "\n_________________________________" << std::endl;
  for (auto& x : board) {
    for (auto& y : x) {
      if (!y.piece) {
        std::cout << "|   ";
      } else {
        std::cout << "|";
        std::cout << *(y.piece);
      }
    }
    std::cout << "| " << i--;
    std::cout << "\n";
    std::cout << "---------------------------------" << std::endl;
  }
}

void Board::populateBoard() {
  board[0][0].piece = new Rook();
  board[0][7].piece = new Rook();
  board[7][7].piece = new Rook();
  board[7][0].piece = new Rook();

  board[0][1].piece = new Knight();
  board[0][6].piece = new Knight();
  board[7][1].piece = new Knight();
  board[7][6].piece = new Knight();

  board[0][2].piece = new Bishop();
  board[0][5].piece = new Bishop();
  board[7][2].piece = new Bishop();
  board[7][5].piece = new Bishop();

  board[0][3].piece = new Queen();
  board[0][4].piece = new King();

  board[7][4].piece = new King();
  board[7][3].piece = new Queen();
  for (auto& x : board[1]) {
    x.piece = new Pawn();
  }
  for (auto& x : board[6]) {
    x.piece = new Pawn();
  }
  std::cout << board[1][7];
}
