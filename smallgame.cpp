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
//make a simple
/*
class arrayStack
{
	public:
		void push()
		{
		}
		void pop()
		{
		}
	
};
*/
int main()
{
	// Call the Rooms class in the rooms.h file
	// and too call it you just write the classes name and a subname like Rooms area; simple
	stack<int> stacks;

	cout << "poping the rooms!\n";

	while(!stacks.empty())
	{
		cout << ' ' << stacks.top();
		stacks.pop();
	}
	
	bool running = true;

	while(running)
	{

		{

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
		case 'O':
			break;

			}
		}
	}
	return 0;
}
