#pragma once

#include "NPC.h"

class Decorator : public NPC {
public:
    NPC* npc;
    Decorator(NPC* n);
    virtual ~Decorator();
    virtual void render();
};