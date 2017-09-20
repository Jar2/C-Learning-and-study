#include <iostream>
#include <cstdio>
#include <stack>
#include "textgamedata.h"
#include "player.h"
#include "locations.h"
#include "rooms.h"
#include "invent.h"
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
	// Call the Rooms class in the rooms.h file
	// and too call it you just write the classes name and a subname like Rooms area; simple
	// How to make a stack.
	// 1. make the stack.
	// 2. if the player wants to go to a room. make that room ontop of the stack
	// 3. when the room ontop of the stack is finished. top it off the stack.
	// 4 Rinse and repeat
class Stack : public Rooms
{
	public:
	int roomStack()
	{
		stack<int> stacks;
		// make the stack or the rooms
		Rooms areas; // call the class.... i dont know if i am doing it right 
		stacks.push(areas.StorePrint());
		stacks.push(areas.DownedPlanePNT());
		stacks.push(areas.gameDevShackPNT());
		stacks.push(areas.playersShackPNT());
		stacks.push(areas.OfficePrint());
		//Make the player move around the place and shit like that so the stack can fucking work!
		// I think with the area.top(); function? I have no idea.
		cout << "the space on the stack: " << stacks.size() << endl;
		cout << "Top room: " << stacks.top() << endl;

		stacks.pop();

		cout << "Top element: " << stacks.top() << endl;

	}
};
int main()
{
	Stack rooms;
	bool running = true;

	while(running)
	{

		{
			cout << rooms.roomStack() << endl;
		cout << "Where do you want to go? there are, D, B, P, F\n";
		char placestogo;
	 
		cin >> placestogo;
		switch(placestogo) 
			{
		case 'X':
			// this is going to quit the game!
			running = false; 
			break;
		case 'D':
			// This is going to make the player go to the desert!
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
		case 'L':
			break;
				rooms.roomStack();
			}
		}
	}
	return 0;
}
