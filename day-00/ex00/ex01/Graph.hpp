#ifndef GRAPH_HPP
#define GRAPH_HPP
#include <iostream>
#include <vector>

class Graph
{
	private:
		struct Vector2{
			float x;
			float y;
		};
		bool findPosition(float x, float y);
		std::vector<Vector2 *> listVector2;
		Vector2						  size;
	public:
		Graph(float x, float y);
		~Graph();
		void printMap();
		void addVector(float x, float y);
};

#endif