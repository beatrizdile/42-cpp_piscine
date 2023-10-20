#include <iostream>
#include "Worker.hpp"
#include "Shovel.hpp"

int main()
{
	Worker *worker1 = new Worker();
	Worker *worker2 = new Worker();
	Shovel *shovel1 = new Shovel();
	Shovel *shovel2 = new Shovel();

	worker1->getTool(shovel1);
	std::cout << worker1->shovelInUse << "\n";
	delete worker1;
	worker2->getTool(shovel1);
	std::cout << worker2->shovelInUse << "\n";

	// worker2->getTool(shovel1);
	// std::cout << worker1->shovelInUse << "\n";
	// std::cout << worker2->shovelInUse << "\n";
	// worker1->getTool(shovel1);
	// worker2->getTool(shovel2);
	// std::cout << worker1->shovelInUse << "\n";
	// std::cout << worker2->shovelInUse << "\n";

	delete worker2;
	delete shovel1;
	delete shovel2;
}