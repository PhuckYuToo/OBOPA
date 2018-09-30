#pragma once

#include "Decorator.h"

class Shaman : public Decorator {
public:
    Shaman(NPC* n) {
        npc = n;
        npc->name += "Shaman ";
    }
};