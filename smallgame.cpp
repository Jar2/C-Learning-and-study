#include <iostream>
#include <cstdio>
using namespace std;
/*
 * this game is going to be a small adventure game in the terminal where the player
 * can move around by typing commands into the terminal window or the appication.
 *
 * we are going to use some switch cases. if elses, ifs structs classes.
 *
 * the first thing that i am going to make is just the base of the game like
 * the move commands and the description of said landscapes thus so it can be a
 * nice little game with nice little stuff.
 */
//
//make a simple
//
int main()
{
	// make the items that the forest is going to use! like whatever!
	struct Village
	{
		int buyer;
		int seller;
		int blacksmith;
		int person;
		int pesent;
		int cook;
		int bucther;
		int police;
		int gaurd;
		int house;
		int castle;
		int dungeon;
		int caves;
	};
	struct Forest
	{
		int lake;
		int talltrees;
		int bears;
		int ants;
		int leaves;
	};

	struct Plains
	{
		int river;
		int wheat;
		int village;
		int grass;
		int farmer;
	};
	struct Desert
	{
		int desertSand;
		int catus;
		int deadbushes;
		int skull;
	
	};
	struct Beach
	{
		int sand;
		int beachball;
	};
	struct Player
	{
		int health;
		int armour;
		int mana;
	};
	/* making the definitions of the objects in the world with structs so you can use them
	 *
	 * TODO for the objects in the game or adventure
	 *
	 */
	// player!
	struct Player Player1;
	Player1.health = 100;
	Player1.armour = 20;
	Player1.mana   = 0;
	//TODO for objects.
	//For the beach section
	struct Beach Beachobj1;
	Beachobj1.sand = 0.5;
	Beachobj1.beachball = 0;
	// The forest
	struct Forest Forestobj1;
	Forestobj1.ants = 0;
	Forestobj1.leaves = 0;
	//The Plains
	struct Plains Plains1;
	Plains1.wheat = 20;
	Plains1.grass = 0;
	//The desert
	struct Desert Desertobj1;
	Desertobj1.desertSand = 0.5;
	Desertobj1.catus = 10;
	Desertobj1.deadbushes = 0.1;
	Desertobj1.skull = 5;
	// The Village
	// since they are all people and living things, or places.
	// I think i should make them their own class and functions
	//
	// TODO

	/*
	 * MAKE AN INVENTORY SYSTEM!!!!
	 */
	class inventory
	{
		public:
			int inventWidth;
			int inventHeight;
			int inventSize;
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
	//
	// //TODO
	//

	// about the player or what ever!
	string mystr;  //you need the string there to enter in someones name aka MisterJar
	cout << "Welcome to the game, Press any key to continue: " << endl;
	// the game what is the players name is going to be;
	cout << "what is your name: ";
	getline(cin, mystr);
	cout << "Hello " << mystr << endl;

/*This is the game loop where the game can run until infinty!!!!!*/
	bool running = true;

	while(running)
	{


		{
		
		cout << "Where do you want to go? there are, D, B, P, F\n";
		char placestogo;
	 
		cin >> placestogo;
		switch(placestogo) 
			{

			// this is going to quit the game!
		case 'X':
			running = false; 
			break;
			// This is going to make the player go to the desert!
		case 'D':
			cout << "You are now in the desert! welcome! " << endl;
			break;
		case 'F':
			// This is going to make the player go to the forest!
			cout << "welcome to the forest! " << endl;
			break;

		case 'P':
			// This is going to make the player go to the plains!
			cout << "wlecome to the plains" << endl;
			break;
		case 'B':
			// This is going to make the player go to the beach!
			cout << "wlecome to the beach" << endl;
			break;
			}
		}
	}
	return 0;
}
