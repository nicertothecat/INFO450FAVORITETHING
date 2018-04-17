#include "stdafx.h"
#include "Game.h"
#include <string>

using namespace std;
const int ERROR2 = 2;

class GameList
{
private:

	Game gList[100];
	//listSize keeps track of how many spaces in the array are full and makes it easy to expose that to other classes.
	int listSize;

public:
	GameList();
	int addGameListItem(); //Function to add a game to the list
	bool detectDupe(Game dupeGame); //Detects if a game's UID matches one that was already entered in the list
	int getListSize(); //Exposes list size

	friend ostream & operator<<(ostream &os, const GameList &gamelist); //Makes it easy to display the games list
};

