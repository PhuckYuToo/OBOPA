#include "HardcoreRandomRule.h"

HardcoreRandomRule::HardcoreRandomRule() {
    name = "Custom Rule";
}

void HardcoreRandomRule::applyRule(std::vector<std::vector<Cell>>& map, int x, int y) {
    int random = rand() % 5;

    //Hardcore desert survival mode
    if(random > (x+y)%24) map[x][y].kill();
};