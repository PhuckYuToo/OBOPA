#pragma once

#include "Decorator.h"

class Farmer : public Decorator {
public:
    Farmer(NPC* n);
    void render();
};