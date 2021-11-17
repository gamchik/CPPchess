#include <iostream>

class Piece {
 protected:
 public:
  bool color = false;
  int x = 0;
  int y = 0;
  virtual void Move() = 0;
  virtual std::ostream& doprint(std::ostream& os) const = 0;
  friend std::ostream& operator<<(std::ostream& os, const Piece& p) {
    return p.doprint(os);
  };
};

class Pawn : public Piece {
 public:
  Pawn();
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "P ";
  }
};

class Rook : public Piece {
 public:
  Rook();
  void Move();

  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "R ";
  }
};

class Bishop : public Piece {
 public:
  Bishop();
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "B ";
  }
};

class Knight : public Piece {
 public:
  Knight();
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "Kt";
  }
};

class King : public Piece {
 public:
  King();
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "K ";
  }
};

class Queen : public Piece {
 public:
  Queen();
  void Move();
  std::ostream& doprint(std::ostream& os) const {
    return os << this->color << "Q ";
  }
};
