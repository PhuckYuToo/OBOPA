#pragma once

#include "Decorator.h"

class Soldier : public Decorator {
public:
    Soldier(NPC* n) {
        npc = n;
        npc->name += "Soldier ";
    }
};