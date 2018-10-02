#pragma once

#include "NPC.h"

class Elf : public NPC {
public:
    Elf() {}
    void render() {
        std::cout << "Elf" << std::endl;
    }
};