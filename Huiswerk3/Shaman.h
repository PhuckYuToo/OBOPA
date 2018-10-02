#pragma once

#include "Decorator.h"

class Shaman : public Decorator {
public:
    Shaman(NPC* n);
    void render();
};