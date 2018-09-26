#pragma once

class Cell {
protected:
    bool alive;
    int neighbors;
public:
    int x;
    int y;
    bool nextState;

    Cell();

    void setPos(int, int);
    void kill();
    void birth();
    bool isAlive();
    void update();
    void setAlive(bool);
    void setNeighbors(int);
    int getNeighbors();
};