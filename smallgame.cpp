#include <iostream>
#include <string>
#include <cstdlib>
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

	struct Forest
	{
	//	cout << "using the goto statement!\n";
	//	cout << "Welcome to this place! please expolore now!\n";
	};

	struct Plains
	{
	//	cout << "using the goto statement!\n";
	//	cout << "Welcome to this place! please expolore now!\n";
	};
	struct Desert
	{
	//	cout << "using the goto statement!\n";
	//	cout << "Welcome to this place! please expolore now!\n";
	};
	struct Beach
	{
	//	cout << "using the goto statement!\n";
	//	cout << "Welcome to this place! please expolore now!\n";
	};
	// about the player or what ever!
	cout << "Welcome to the game, Press any key to continue: " << endl;
	string mystr;
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
	
