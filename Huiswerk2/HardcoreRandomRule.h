#pragma once

#include "Rule.h"

class HardcoreRandomRule : public Rule {
public:
    HardcoreRandomRule();
    void applyRule(std::vector<std::vector<Cell>>&, int, int) override;
};