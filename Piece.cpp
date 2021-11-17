#include "Piece.h"

#include <iostream>

Pawn::Pawn(){
    // std::cout << "I am a Pawn" << std::endl;
};

void Pawn::Move() { std::cout << "Pawn is moving" << std::endl; };

Rook::Rook(){
    // std::cout << "I am a Rook" << std::endl;
};

void Rook::Move() { std::cout << "Rook is moving" << std::endl; };

Bishop::Bishop(){
    // std::cout << "I am a Bishop" << std::endl;
};

void Bishop::Move() { std::cout << "Bishop is moving" << std::endl; };

Knight::Knight(){
    // std::cout << "I am a Knight" << std::endl;
};

void Knight::Move() { std::cout << "Knight is moving" << std::endl; };

King::King(){
    // std::cout << "I am a King" << std::endl;
};

void King::Move() { std::cout << "King is moving" << std::endl; };

Queen::Queen(){
    // std::cout << "I am a Queen" << std::endl;
};

void Queen::Move() { std::cout << "Queen is moving" << std::endl; };
