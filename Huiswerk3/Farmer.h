#pragma once

#include "Decorator.h"

class Farmer : public Decorator {
public:
    Farmer(NPC* n) {
        npc = n;
        npc->name += "Farmer ";
    }
};