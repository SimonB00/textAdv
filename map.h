#ifndef map_h
#define map_h

#include <vector>
#include <string>

struct loot {
  std::string name;
  std::string type;
  int attackBonus;
  int defBonus;
  int healingValue;
};

struct tile{
  bool hasLoot, hasEnemy;
  bool isWalkable;
  loot loot;
};

class map{
private:
  std::vector<tile> map_;
  int Nrow_;
  int Ncol_;
public:
  map(int Nrow, int Ncol) : Nrow_{Nrow}, Ncol_{Ncol}, map_(Ncol*Nrow,{0,0,1}) {}

  tile getTile(int col, int row) { return map_[col + Ncol_*row]; }
  int getNRow() {return Nrow_; }
  int getNcol() { return Ncol_; }
  
  void makeNotWalkable(int col_, int row_) {
    map_[col_ + Ncol_*row_].isWalkable = 0;
  }
  void putLoot(int col_, int row_, loot loot_) {
    map_[col_ + Ncol_*row_].hasLoot = 1;
    map_[col_ + Ncol_*row_].loot = loot_;
  }
  void putEnemy(int col_, int row_) {
    map_[col_ + Ncol_*row_].hasEnemy = 1;
  }
};

#endif
