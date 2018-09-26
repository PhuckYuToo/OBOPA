#include "Entities.h"

Entity_Block::Entity_Block() {
    initShape(2);
    for(int i = 0; i < 2; i++) for(int j = 0; j < 2; j++) shape[i][j] = 1;
}

Entity_Blinker::Entity_Blinker() {
    initShape(3, 1);
    for(int i = 0; i < 3; i++) shape[i][0] = 1;
}

Entity_Glider::Entity_Glider() {
    initShape(3);
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            if((j == 2) || (i == 1 && j == 0) || (i == 2 && j == 1)) shape[i][j] = 1;
        }
}

Entity_Flower::Entity_Flower() {
    initShape(5, 7);
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 7; j++) {
            if((i == 2 && j == 0) || ((i == 1 || i == 3) && j == 1) || ((j == 2 || j == 3 || j == 4) && (i == 0 || i == 4)) ||
                    (j == 5 && (i == 1 || i == 3)) || (j == 6 && i == 2)) shape[i][j] = 1;
        }
}