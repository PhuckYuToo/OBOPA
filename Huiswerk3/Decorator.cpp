#include "Decorator.h"

void Decorator::render() {
    npc->render();
}

Decorator::Decorator(NPC* n) {
    npc = n;
}

Decorator::~Decorator() {
    if(npc) delete npc;
}