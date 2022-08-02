#ifndef
#define

#include <vector>

struct tile{
  bool loot, enemy;
  bool walkable;
};

template <int Nrow, int Ncol>
class map{
private:
  std::vector<tile> map_;
public:
  map() : map_(Nx*Ny,{0,0,1}) {}

  void makeNotWalkable(int col_, int row_) {
    map_[col_ + Ncol*row_].walkable = 0;
  }
  void putLoot(int col_, int row_) {
    map_[col_ + Ncol*row_].loot = 1;
  }
  void putEnemy(int col_, int row_) {
    map_[col_ + Ncol*row_].enemy = 1;
  }
};

#endif
