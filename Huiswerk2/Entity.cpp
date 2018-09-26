#include "Entity.h"

Entity::Entity() {}

void Entity::initShape(int i) {
    shape.resize(i);
    for(int l = 0; l < i; l++) shape[l].resize(i);
    for(int l = 0; l < shape.size(); l++) for(int k = 0; k < shape[l].size(); k++) shape[l][k] = 0;
}

void Entity::initShape(int i, int j) {
    shape.resize(i);
    for(int l = 0; l < i; l++) shape[l].resize(j);
    for(int l = 0; l < shape.size(); l++) for(int k = 0; k < shape[l].size(); k++) shape[l][k] = 0;
}