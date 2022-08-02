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

template <int Nrow, int Ncol>
class map{
private:
  std::vector<tile> map_;
public:
  map() : map_(Ncol*Nrow,{0,0,1}) {}

  void makeNotWalkable(int col_, int row_) {
    map_[col_ + Ncol*row_].walkable = 0;
  }
  void putLoot(int col_, int row_) {
    map_[col_ + Ncol*row_].hasLoot = 1;
  }

  void putEnemy(int col_, int row_) {
    map_[col_ + Ncol*row_].hasEnemy = 1;
  }
};

#endif