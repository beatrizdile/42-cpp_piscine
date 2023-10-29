#ifndef Room_HPP
#define Room_HPP

#include <vector>
class Person;

class Room
{
	private:
		int id;
		std::vector<Person *> occupants;
	
	public:
		Room(int id);
		bool canEnter(Person *person);
		void enter(Person *person);
		void exit(Person *person);
		const int &getId() const;
		void printOccupant();
};

#endif