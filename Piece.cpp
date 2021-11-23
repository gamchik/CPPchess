#include "Piece.h"

#include <iostream>

Pawn::Pawn(bool color) { this->color = color; };

void Pawn::Move() { std::cout << "Pawn is moving" << std::endl; };

Rook::Rook(bool color) { this->color = color; };

void Rook::Move() { std::cout << "Rook is moving" << std::endl; };

Bishop::Bishop(bool color) { this->color = color; };

void Bishop::Move() { std::cout << "Bishop is moving" << std::endl; };

Knight::Knight(bool color) { this->color = color; };

void Knight::Move() { std::cout << "Knight is moving" << std::endl; };

King::King(bool color) { this->color = color; };

void King::Move() { std::cout << "King is moving" << std::endl; };

Queen::Queen(bool color) { this->color = color; };

void Queen::Move() { std::cout << "Queen is moving" << std::endl; };
