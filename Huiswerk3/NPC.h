#pragma once

#include <string>
#include <iostream>

class NPC {
public:
    std::string name;
    NPC();
    virtual ~NPC();
    virtual void render() = 0;
};