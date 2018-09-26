#include "Park.h"

Park::Park() {

}

void Park::list() {
	std::cout << "----- In the park" << std::endl;

	for (int i = 0; i < count; ++i)
	{
		std::cout << dinosaurs[i].getName() << std::endl;
	}

	std::cout << "-----" << std::endl;
}

void Park::openGate() {
	for (int i = 0; i < count; ++i) {
		if (dinosaurs[i].getName() == "Stegosaurus") {
			std::cout << "Escaped: " << dinosaurs[i].getName() << std::endl;
		
			for (int j = 0; j < count; ++j) {
				dinosaurs[j] = dinosaurs[j - 1];
			}
			count--;
		}
	}
	count--;
}

void Park::addDinosaur(Dinosaur dinosaur) {
	dinosaurs[count] = dinosaur;
	count++;
}