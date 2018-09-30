#include <iostream>
#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "Shaman.h"
#include "Farmer.h"
#include "Soldier.h"
#include <vector>

int main() {
    std::vector<NPC*> NPCs;

    std::cout << std::endl;

    NPCs.push_back(new Shaman(new Orc()));
    NPCs.push_back(new Farmer(new Orc()));
    NPCs.push_back(new Soldier(new Orc()));

    NPCs.push_back(new Shaman(new Elf()));
    NPCs.push_back(new Farmer(new Elf()));
    NPCs.push_back(new Soldier(new Elf()));

    for(auto& npc : NPCs) npc->render();

    for(auto npc : NPCs) delete npc;
    return 0;
}