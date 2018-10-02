#pragma once

#include "Decorator.h"

class Soldier : public Decorator {
public:
    Soldier(NPC* n);
    void render();
};