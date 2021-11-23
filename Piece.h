#include <iostream>

class Piece {
 protected:
  bool color = false;
  int x = 0;
  int y = 0;

 public:
  virtual void Move() = 0;
  virtual std::ostream& doprint(std::ostream& os) const = 0;
  friend std::ostream& operator<<(std::ostream& os, const Piece& p) {
    return p.doprint(os);
  };
};

class Pawn : public Piece {
 public:
  Pawn(bool color);
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "P ";
  }
};

class Rook : public Piece {
 public:
  Rook(bool color);
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "R ";
  }
};

class Bishop : public Piece {
 public:
  Bishop(bool color);
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "B ";
  }
};

class Knight : public Piece {
 public:
  Knight(bool color);
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "Kt";
  }
};

class King : public Piece {
 public:
  King(bool color);
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "K ";
  }
};

class Queen : public Piece {
 public:
  Queen(bool color);
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "Q ";
  }
};
