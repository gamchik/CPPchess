#include "Board.h"

#include <iostream>
Board::Board() {
  int x_counter = 1;
  int y_counter = 8;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      board[i][j].x = x_counter++;
      board[i][j].y = y_counter;
    }
    x_counter = 1;
    y_counter--;
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
  for (int i = 1; i <= 8; i++) {
    std::cout << "  " << i << " ";
  }
  std::cout << "\n";
}

void Board::populateBoard() {
  board[0][0].piece = new Rook(false);
  board[0][7].piece = new Rook(false);
  board[7][7].piece = new Rook(true);
  board[7][0].piece = new Rook(true);

  board[0][1].piece = new Knight(false);
  board[0][6].piece = new Knight(false);
  board[7][1].piece = new Knight(true);
  board[7][6].piece = new Knight(true);

  board[0][2].piece = new Bishop(false);
  board[0][5].piece = new Bishop(false);

  board[7][2].piece = new Bishop(true);
  board[7][5].piece = new Bishop(true);

  board[0][3].piece = new Queen(false);
  board[0][4].piece = new King(false);

  board[7][4].piece = new King(true);
  board[7][3].piece = new Queen(true);
  for (auto& x : board[1]) {
    x.piece = new Pawn(false);
  }
  for (auto& x : board[6]) {
    x.piece = new Pawn(true);
  }
}
