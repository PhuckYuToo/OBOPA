#pragma once
#include "GL/GLEW.h"
#include "GLFW/GLFW3.h"
#include <vector>
#include <iostream>
#include "Cell.h"
#include "Rule.h"
#include "Entity.h"

class Cell;
class Rule;

class Map {
public:
    int mapSize, evoluteSpeed;
    Map(int, int);

    void next();
    void draw();
    void addRule(Rule*);
    void countNeighbors(int, int);
    void spawn(Entity*, int, int);
private:
    std::vector<std::vector<Cell>> map;
    std::vector<Rule*> rules;
    int evolution;
    int timer;

    void initMap();
    void drawCell(double, double);
};