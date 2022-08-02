#include <iostream>
#include <cassert>
#include <string>
#include "enemy.h"
#include "map.h"
#include "player.h"

int main() {
std::string name;
int colC = 0;
int rowC = 0;
std::cout << "Insert name: " << '\n';
std::cin >> name;
player p(name);
p.setPos(colC, rowC);
char direction;
p.pickClass();
std::cout << "This is before moving" << '\n';
std::cout << "Colonna: " << colC << '\n';
std::cout << "Riga: " << rowC << '\n';
char confirm;
std::cout << "Move?" << '\n';
std::cin >> confirm;
if (confirm == 'y') {
	std::cout << "Where to move? " << '\n';
	std::cin >> direction;
    p.movePlayer(direction, colC, rowC);
    colC = p.getPosition('x');
    rowC = p.getPosition('y');
};
std::cout << "This is after moving" << '\n';
std::cout << "Colonna: " << colC << '\n';
std::cout << "Riga: " << rowC << '\n';
}
