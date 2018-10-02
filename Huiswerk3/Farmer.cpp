#include "Farmer.h"

Farmer::Farmer(NPC *n) : Decorator(n) {}

void Farmer::render() {
    std::cout << "Farmer ";
    Decorator::render();
}