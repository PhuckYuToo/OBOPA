#include "Child.h"

Child::Child(std::string name) {
    this->name = name;
}

Child::Child(const Child& other) {
    this->name = other.name;
}

std::ostream& operator<<(std::ostream& os, const Child& child) {
    os << "name: " << child.name;
    return os;
}