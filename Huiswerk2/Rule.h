#pragma once

#include <vector>
#include <string>
#include <iostream>
#include "Cell.h"

class Cell;

class Rule {
public:
    std::string name;
    Rule();
    virtual void applyRule(std::vector<std::vector<Cell>>&, int, int);
};