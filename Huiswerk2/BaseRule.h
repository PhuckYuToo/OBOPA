#pragma once

#include "Rule.h"

class BaseRule : public Rule {
public:
    BaseRule();
    void applyRule(std::vector<std::vector<Cell>>&, int, int) override;
};