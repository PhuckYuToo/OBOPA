#pragma once

#include "NPC.h"

class Decorator : public NPC {
protected:
    NPC* npc;
public:
    void render() {
        npc->render();
    }
};