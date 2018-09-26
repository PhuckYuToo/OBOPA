#include "BaseRule.h"

BaseRule::BaseRule() {
    name = "Base Rule";
}

void BaseRule::applyRule(std::vector<std::vector<Cell>>& map, int x, int y) {
    //Underpopulation
    if(map[x][y].getNeighbors() < 2) map[x][y].kill();
    //Overpopulation
    if(map[x][y].getNeighbors() > 3) map[x][y].kill();
    //Next generation
    if(map[x][y].isAlive() && (map[x][y].getNeighbors() == 3 || map[x][y].getNeighbors() == 2)) map[x][y].birth();
    //Reproduction
    if(!map[x][y].isAlive() && map[x][y].getNeighbors() == 3) map[x][y].birth();
};