class Piece {
 protected:
 public:
  bool color = true;
  virtual void Move() = 0;
  virtual void getPieceType() = 0;
};

class Pawn : public Piece {

 public:
  Pawn();
  void Move();
  void getPieceType();
};

class Rook : public Piece {
 public:
  Rook();
  void Move();
  void getPieceType(); 
};
