#ifndef player_h
#define player_h

#include <string>

struct position{
  int x,y;
};
struct stats {
    int attack, defence, speed, mana; 
};


class player{
private:
  position pos_;
  std::string Class;
  int level_;
  int health_;
  int stamina_;
  stats playerStats = {10, 10, 10, 10};

public:
  void pickClass() {
    std::string choice;
    std::cout << "Please pick a class:" << '\n';
    std::cout << "WARRIOR" << '\n';
    std::cout << "WIZARD" << '\n';
    std::cout << "EXPLORER" << '\n';
    std::cout << "OUTCAST" << '\n';
    std::cin >> choice;
    
    switch(choice) {
      case "WARRIOR":
            Class = "WARRIOR"
            health_ = 150;
            stamina_ = 200;
            playerStats.attack = 50;
            playerStats.defence = 100;
            playerStats.speed = 50;
            playerStats.mana = 10;
            break
      case "WIZARD":
            Class = "WIZARD"
            health_ = 70;
            stamina_ = 150;
            playerStats.attack = 150;
            playerStats.defence = 80;
            playerStats.speed = 100;
            playerStats.mana = 150;
            break
      case "EXPLORER":
            Class = "EXPLORER"
            health_ = 100;
            stamina_ = 90;
            playerStats.attack = 40;
            playerStats.defence = 130;
            playerStats.speed = 200;
            playerStats.mana = 10;
            break
      case "OUTCAST":
            Class = "OUTCAST"
            health_ = 50;
            stamina_ = 50
            playerStats.attack = 50;
            playerStats.defence = 50;
            playerStats.speed = 50;
            playerStats.mana = 10;
            break

    };
  };

  void levelUp() {
    level_ += 1;
    playerStats.attack += 10;
    playerStats.defence += 10;
    playerStats.speed += 10;
    playerStats.mana += 10;
  };

  int getHealth() {
    return health_;
  };

  void getStats(){
    std::cout << stamina_<< '\n';
    std::cout << playerStats.attack << '\n';
    std::cout << playerStats.defence << '\n';
    std::cout << playerStats.speed << '\n';
    std::cout << playerStats.mana << '\n';

  };

  void takeDamage(int enemyAtk) {
    health_ -= (enemyAtk - playerStats.defence);
  };

  void heal(int healingValue) {
     health_ += healingValue;
  };

};

#endif
