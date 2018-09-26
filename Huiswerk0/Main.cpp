#include <iostream>
#include "Dinosaur.h"
#include "Park.h"

int main()
{
	Park jurassicPark = Park();

	jurassicPark.addDinosaur(Dinosaur("Allosaurus"));
	jurassicPark.addDinosaur(Dinosaur("Stegosaurus"));
	jurassicPark.addDinosaur(Dinosaur("Diplodocus"));

	jurassicPark.list();

	jurassicPark.openGate();

	jurassicPark.list();

    return 0;
}

