#ifndef
#define

#include <vector>

struct tile{
  bool loot, enemy;
  bool walkable;
};

template <int Nx, int Ny>
class map{
private:
  std::vector<tile> map_;
public:
  map() : map_(Nx*Ny,{0,0,1}) {}

  void makeNotWalkable(int x_, int y_) {
    map_[x_ + Nx*y_].walkable = 0;
  }
  void putLoot(int x_, int y_) {
    map_[x_ + Nx*y_].loot = 1;
  }
  void putEnemy(int x_, int y_) {
    map_[x_ + Nx*y_].enemy = 1;
  }
};

#endif
