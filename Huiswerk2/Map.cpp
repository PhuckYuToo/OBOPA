#include "Map.h"
#include <iostream>
#include <ctime>
#include "Cell.h"
#include "BaseRule.h"
#include "HardcoreRandomRule.h"
#include "DarwinRule.h"
#include "Entities.h"

Map::Map(int i, int l) {
    this->evoluteSpeed = l;
    this->mapSize = i;
    this->evolution = 0;
    this->timer = 0;

    map.resize(mapSize);
    for (int x = 0; x < mapSize; x++)
    {
        map[x].resize(mapSize);
        for (int y = 0; y < mapSize; y++)
        {
            Cell cell = Cell();
            cell.setPos(x, y);
            map[x][y] = cell;
        }
    }
    initMap();
}

void Map::initMap() {
    //Start Cell
    for(int i = 0; i < mapSize - 1; i++)
    for(int j = 0; j < mapSize - 1; j++){
        int randVal = rand() % 4;
        if(randVal == 0) map[i][j].setAlive(true);
    }

    //HIER KAN JE ALTERNATIEVE REGELS AAN/UIT ZETTEN\\
    //**********************************************\\

    //Baserules (Overpopulation, underpopulation, survival and reproduction)
    addRule(new BaseRule());

    //Alternatieve rules (Random kills / Disease)
    //addRule(new HardcoreRandomRule());

    //Darwin Rule (Survival of the fittest / larger organisms survive)
    //addRule(new DarwinRule());

    spawn(new Entity_Block(), 6, 6);
    spawn(new Entity_Blinker(), 12, 12);
    spawn(new Entity_Glider(), 22, 34);
    spawn(new Entity_Flower(), 32, 22);
}

void Map::next() {
    for(int x = 0; x < mapSize; x++) {
        for (int y = 0; y < mapSize; y++)
        {
            //Count the neighbors of each cell
            countNeighbors(x, y);

            //Following the rules?
            for (int i = 0; i < rules.size(); i++) if (i < rules.size()) rules[i]->applyRule(map, x, y);
        }
    }

    //Mark cells for the next state (LIVE || DIE, wait until next generation)
    for(int x = 0; x < mapSize; x++) for(int y = 0; y < mapSize; y++) map[x][y].update();

    std::cout << "Evolution: " << evolution << std::endl;
    evolution++;
}

void Map::draw() {
    timer++;

    glPushMatrix();
    for(int x = 0; x < mapSize; x++) for (int y = 0; y < mapSize; y++) drawCell(x, y);
    glPopMatrix();

    if(timer > evoluteSpeed)
    {
        next();
        timer = 0;
    }
}

void Map::drawCell(double x, double y) {
    if(!map[x][y].isAlive()) return;
    glBegin(GL_QUADS);
    glColor3f(1, 0.4f, 0.4f);
    glLoadIdentity();
    if(x == 0 || x == mapSize - 1 || y == 0 || y == mapSize - 1)
    {
        glLineWidth(4.0);
        glColor3f(0.55, 0.35, 0.35);
    }
    else
    {
        glColor3f(0.6, 0.4, 0.4);
        glLineWidth(2.0);
    }

    glVertex2d(x,y); glVertex2d(x+1,y);
    glVertex2d(x+1,y); glVertex2d(x+1,y+1);
    glVertex2d(x+1,y+1); glVertex2d(x,y+1);
    glVertex2d(x,y+1); glVertex2d(x,y);
    glEnd();
}

void Map::addRule(Rule* rule) {
    rules.push_back(rule);
}

void Map::countNeighbors(int x, int y) {
    int neigh = 0;
    for(int i = -1; i < 2; i++) {
        for (int j = -1; j < 2; j++) {
            if ((i == 0 && j == 0) || (x + i) > map.size() - 1 || (x + i) < 0 || (y + j) < 0 || (y + j) > map.size() - 1) continue;
            if (map[x + i][y + j].isAlive()) neigh++;
        }
    }
    map[x][y].setNeighbors(neigh);
}

void Map::spawn(Entity* ent, int x, int y) {
    for(int i = 0; i <  ent->shape.size(); i++)
        for(int j = 0; j < ent->shape[i].size(); j++)
        {
            if((x+i) > mapSize || (y+j) > mapSize) continue;
            map[x+i][y+j].setAlive(ent->shape[i][j]);
        }
}