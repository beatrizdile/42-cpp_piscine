#include <iostream>
#include "Worker.hpp"
#include "Shovel.hpp"
#include "Workshop.hpp"
#include "Tool.hpp"

int main()
{
	Workshop *workshop1 = new Workshop();
	Worker *worker1 = new Worker(0, 0);
	Worker *worker2 = new Worker(0, 0);
	Shovel *shovel1 = new Shovel();
	Shovel *shovel2 = new Shovel();

	worker1->getTool(shovel1);

	workshop1->registerWorker(worker1);
	workshop1->registerWorker(worker2);
	workshop1->executeWorkDay();
	worker2->getTool(shovel2);
	workshop1->executeWorkDay();
	workshop1->releaseWorker(worker2);
	workshop1->executeWorkDay();

	delete workshop1;
	delete worker1;
	delete worker2;
	delete shovel1;
	delete shovel2;
}