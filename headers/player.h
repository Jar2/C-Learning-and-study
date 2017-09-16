#include <iostream>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H
int player()
{
    string mystr;
	// about the player or what ever!
	cout << "Welcome to the game, Press any key to continue: " << endl;
	// the game what is the players name is going to be;
	cout << "what is your name: ";
	getline(cin, mystr);
	cout << "Hello " << mystr << endl;
}


#endif
