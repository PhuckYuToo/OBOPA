#pragma once

#include <string>

class Dinosaur {
private:
	std::string name;

public:
	Dinosaur();
	Dinosaur(const std::string &name);
	
	std::string getName();
};