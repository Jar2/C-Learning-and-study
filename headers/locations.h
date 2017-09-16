#include <iostream>
using namespace std;
#ifdef LOCATIONS_H
#define LOCATIONS_H;
int locations()
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
}

#endif
