#include "Soldier.h"

Soldier::Soldier(NPC *n) : Decorator(n) {}

void Soldier::render() {
    std::cout << "Soldier ";
    Decorator::render();
}