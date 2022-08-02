<<<<<<< HEAD
#ifndef map_h
#define map_h

#include <vector>
#include <string>

struct tile{
  bool hasLoot, hasEnemy;
  bool walkable;
};

struct loot {
   std::string name;
   std::string type;
   int attackBonus;
   int defBonus;
   int healingValue;
};

=======
#ifndef
#define

#include <vector>

struct tile{
  bool loot, enemy;
  bool walkable;
};

>>>>>>> 930c0d62dd0f089bb02b9f7b02078cb48e639906
template <int Nrow, int Ncol>
class map{
private:
  std::vector<tile> map_;
public:
<<<<<<< HEAD
  map() : map_(Ncol*Nrow,{0,0,1}) {}
=======
  map() : map_(Nx*Ny,{0,0,1}) {}
>>>>>>> 930c0d62dd0f089bb02b9f7b02078cb48e639906

  void makeNotWalkable(int col_, int row_) {
    map_[col_ + Ncol*row_].walkable = 0;
  }
  void putLoot(int col_, int row_) {
<<<<<<< HEAD
    map_[col_ + Ncol*row_].hasLoot = 1;
  }

  void putEnemy(int col_, int row_) {
    map_[col_ + Ncol*row_].hasEnemy = 1;
  }
};

#endif
=======
    map_[col_ + Ncol*row_].loot = 1;
  }
  void putEnemy(int col_, int row_) {
    map_[col_ + Ncol*row_].enemy = 1;
  }
};

#endif
>>>>>>> 930c0d62dd0f089bb02b9f7b02078cb48e639906
