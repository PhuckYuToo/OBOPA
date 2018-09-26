#include "Cell.h"
#include <iostream>

Cell::Cell() {
    kill();
    neighbors = 0;
    alive = false;
}

void Cell::kill() {
    nextState = false;
}

void Cell::birth() {
    nextState = true;
}

bool Cell::isAlive() {
    return alive;
}

void Cell::setAlive(bool i) {
    alive = nextState = i;
}

void Cell::update() {
    alive = nextState;
}

void Cell::setPos(int xPos, int yPos) {
    x = xPos;
    y = yPos;
}

void Cell::setNeighbors(int i) {
    neighbors = i;
}

int Cell::getNeighbors() {
    return neighbors;
}