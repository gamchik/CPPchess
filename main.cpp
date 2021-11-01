#include <iostream>

#include "Board.h"
int main() {
  std::cout << "Hello world" << std::endl;
  Board b;
  b.displayBoard();
  b.populateBoard();
  std::cout << "\n\n\n";
  b.displayBoard();
  return 0;
}
