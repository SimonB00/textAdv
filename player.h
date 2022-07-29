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
  int maxHealth_;
  int stamina_;
  bool died = false;
  stats playerStats = {10, 10, 10, 10};

public:
  std::string playerName;
  player(std::string name) {
    playerName = name;
  };
  void pickClass() {
    int choice;
    std::cout << "Please pick a class (type number):" << '\n';
    std::cout << "1 - WARRIOR" << '\n';
    std::cout << "2 - WIZARD" << '\n';
    std::cout << "3 - EXPLORER" << '\n';
    std::cout << "4 - OUTCAST" << '\n';
    std::cin >> choice;
    
    switch(choice) {
      case 1:
            Class = "WARRIOR";
            maxHealth_ = 150;
            health_ = 150;
            stamina_ = 200;
            playerStats.attack = 50;
            playerStats.defence = 100;
            playerStats.speed = 50;
            playerStats.mana = 10;
            break;
      case 2:
            Class = "WIZARD";
            maxHealth_ = 70;
            health_ = 70;
            stamina_ = 150;
            playerStats.attack = 150;
            playerStats.defence = 80;
            playerStats.speed = 100;
            playerStats.mana = 150;
            break;
      case 3:
            Class = "EXPLORER";
            maxHealth_ = 100;
            health_ = 100;
            stamina_ = 90;
            playerStats.attack = 40;
            playerStats.defence = 130;
            playerStats.speed = 200;
            playerStats.mana = 10;
            break;
      case 4:
            Class = "OUTCAST";
            maxHealth_ = 50;
            health_ = 50;
            stamina_ = 50;
            playerStats.attack = 50;
            playerStats.defence = 50;
            playerStats.speed = 50;
            playerStats.mana = 10;
            break;

    };
  };

  void levelUp() {
    level_ += 1;
    maxHealth_ += 10;
    playerStats.attack += 10;
    playerStats.defence += 10;
    playerStats.speed += 10;
    playerStats.mana += 10;
  };

  void getPlayerStatus() {
    std::cout << "HEALTH:" << health_ << '\n';
    std::cout << "STAMINA:" << stamina_ << '\n';
  };

  void getStats(){
    std::cout << playerName << '\n';
    std::cout << "CLASS:" << Class << '\n';
    std::cout << "HEALTH:" <<  maxHealth_ << '\n';
    std::cout << "STAMINA:" <<  stamina_<< '\n';
    std::cout << "ATTACK:" <<  playerStats.attack << '\n';
    std::cout << "DEFENCE:" <<  playerStats.defence << '\n';
    std::cout << "SPEED:" <<  playerStats.speed << '\n';
    std::cout << "MANA:" <<  playerStats.mana << '\n';

  };
  
  //correggere la matematica dubbia ovvero aggiungere difesa
  void takeDamage(int enemyAtk) {
    health_ -= (enemyAtk - playerStats.defence);

    if(health_ == 0) {
      died = true;
    };
  };

  void heal(int healingValue) {
    if(health_ < maxHealth_){
     health_ += healingValue;
    } else if (health_ >= maxHealth_) {
      health_ = maxHealth_;
    };
    std::cout << "You have " << health_ << " points" << '\n';
  };

  int Attack() {
    return playerStats.attack;
   };

};

#endif
