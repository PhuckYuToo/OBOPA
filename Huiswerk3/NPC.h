#pragma once

#include <string>
#include <iostream>

class NPC {
public:
    std::string name;
    virtual void render() {
        std::cout << name << std::endl;
    }
};