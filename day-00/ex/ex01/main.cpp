#include "Graph.hpp"
#include <iostream>

int main()
{
	Graph graph(8, 1);

	graph.addVector(2, 3);
	graph.addVector(5, 5);
	graph.addVector(1, 5);
	graph.printMap();
}
