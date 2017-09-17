#include <iostream>
#include <stack>

using namespace std;
#ifndef ROOM_H
#define ROOM_H
string mystr;
string descriptions;
class Rooms
{

	public:
		void printDesc()
		{
			//TODO
		}
		void waitKey()
		{
			//TODO
		}
		void exit(int exit_id)
		{
			//TODO
		}


		// the real rooms now!!! TODO

		int officespullies;
		void OfficePrint()
		{
			cout << "Welcome to the office! " << mystr << endl;
		}

		// add more if you want like stuff that youll fine in the game.
		void StorePrint()
		{

			cout << "Welcome to the store! " << mystr << endl;
		}
		void DownedPlanePNT()
		{
			cout << "Welcome to the store! " << mystr << endl;
		}

		void gameDevShackPNT()
		{
			cout << "Welcome to the store! " << mystr << endl;
		}
		void playersShackPNT()
		{
			cout << "Welcome to the store! " << mystr << endl;
		}
};


/*
int testStack()
{
	stack<int> rooms;
	
	rooms.push(20);
	rooms.push(90);
	rooms.push(70);
	cout << rooms.size() << " size of element or room" << endl;
	cout << "top element " << rooms.top() << endl;
	
	rooms.pop();

	cout << rooms.size() << "elements on stack\n";
	cout << "top " << rooms.top() << "\n";
	return 0;
}
*/
#endif
