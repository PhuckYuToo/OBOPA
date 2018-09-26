#pragma once

#include "Rule.h"

class DarwinRule : public Rule {
public:
    DarwinRule();
    void applyRule(std::vector<std::vector<Cell>>&, int, int) override;
};