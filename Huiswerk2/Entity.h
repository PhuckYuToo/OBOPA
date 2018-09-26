#pragma once

#include <iostream>
#include <vector>

class Entity {
public:
    Entity();
    std::vector<std::vector<int>> shape;
protected:
    void initShape(int, int);
    void initShape(int);
};