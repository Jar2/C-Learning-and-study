#include <iostream>
using namespace std;
#ifdef INVENT_H
#define INVENT_H
int inventorySystem()
{
/*
	 * MAKE AN INVENTORY SYSTEM!!!!
	 */
	class inventory
	{
		public:
			int inventWidth;
			int inventHeight;
			int inventSize;
			int inventSort;
			void printInvent()
			{

			}
			// code here
	};

	//The initializer of the inventory space!
	inventory inventory1;
	double volume = 0.0;
	inventory1.inventHeight = 10;
	inventory1.inventWidth = 10;

	volume = inventory1.inventWidth + inventory1.inventHeight;
	// of the the inventory system
	//
	// Item pick up system it will use the inventory.

}

#endif
