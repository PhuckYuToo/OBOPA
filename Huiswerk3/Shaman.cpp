#include "Shaman.h"

Shaman::Shaman(NPC *n) : Decorator(n) {}

void Shaman::render() {
    std::cout << "Shaman ";
    Decorator::render();
}