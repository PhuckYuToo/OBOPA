#include "DarwinRule.h"

DarwinRule::DarwinRule() {
    name = "Darwin Rule";
}

void DarwinRule::applyRule(std::vector<std::vector<Cell>>& map, int x, int y) {
    if(map[x][y].getNeighbors() < 3) map[x][y].kill();
    else if(rand() % 2 == 0) map[x][y].birth();
};