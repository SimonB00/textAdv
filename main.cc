#include <iostream>
#include <cassert>
#include <string>
#include "enemy.h"
#include "map.h"
#include "player.h"

int main() {
std::cout << "Choose player name: " << '\n';
std::string playername;
std::cin >> playername;
player name(playername);
name.pickClass();
name.getStats();
name.getPlayerStatus();
name.takeDamage(100);
name.getPlayerStatus();
name.heal(50);
name.Attack();
}
