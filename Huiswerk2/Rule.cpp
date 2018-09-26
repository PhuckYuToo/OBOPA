#include "Rule.h"

#include <iostream>
#include <string>

Rule::Rule() {
    name = "Abstract Rule";
}

void Rule::applyRule(std::vector<std::vector<Cell>>& map, int x, int y){}