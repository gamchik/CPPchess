#include "Piece.h"

#include <iostream>

Pawn::Pawn() { std::cout << "I am a Pawn" << std::endl; };

void Pawn::Move() { std::cout << "Pawn is moving" << std::endl; };

void Pawn::getPieceType() {std::cout << " P ";}


Rook::Rook() { std::cout << "I am a Rook" << std::endl; };

void Rook::Move() { std::cout << "Rook is moving" << std::endl; };

void Rook::getPieceType() {std::cout << " R ";}

