#include "Board.h"

#include <iostream>
Board::Board() {
  std::cout << "I am a board" << std::endl;
  board[0][0].piece = new Rook();  
  board[0][7].piece = new Rook(); 
  board[1][7].piece = new Pawn(); 


}

void Board::displayBoard() {
  std::cout << "______________________________" << std::endl; 
  for (auto& x : board) {
	  for (auto& y : x){
  if (!y.piece){std::cout << "|   ";}  
 else {std::cout << "|";  y.piece -> getPieceType();}
	  }
	  std::cout << "\n";
	  std::cout << "------------------------------"<< std::endl;
  }

}
