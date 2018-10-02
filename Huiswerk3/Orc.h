#pragma once

#include "NPC.h"

class Orc : public NPC {
public:
    Orc() {}
    void render() {
        std::cout << "Orc" << std::endl;
    }
};