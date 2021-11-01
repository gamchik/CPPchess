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

class Bishop : public Piece {
 public:
  Bishop();
  void Move();
  void getPieceType();
};

class Knight : public Piece {
 public:
  Knight();
  void Move();
  void getPieceType();
};

class King : public Piece {
 public:
  King();
  void Move();
  void getPieceType();
};

class Queen : public Piece {
 public:
  Queen();
  void Move();
  void getPieceType();
};
