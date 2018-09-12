#pragma once

#include "Dinosaur.h"
#include <iostream>

class Park {
private:
	Dinosaur dinosaurs[5];
	int count = 0;

public:
	void addDinosaur(Dinosaur dinosaur);

	void list();

	void openGate();
};