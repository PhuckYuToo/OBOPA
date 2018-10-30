#pragma once

#include <string>
#include <ostream>

class Child {
public:
    Child(std::string name);
    Child(const Child& other);

    friend std::ostream& operator<<(std::ostream& os, const Child& child);

private:
    std::string name;
};