#include "stdafx.h"
#include <string>

using namespace std;


class Game
{
private:
	string id;
	string name;
	string platform;
	double msrp;
	int year;
	char rating;

public:
	Game();
	Game(string gameid, string gamename, string gameplat, double gameprice, int gameyear, char gamerating);
	int addGame(); //Method to allow user input in a game's info
	string getID(); //Exposes ID, useful for checking dupes
	string getName(); //Exposes name
	friend ostream & operator<<(ostream &os, const Game &game); //Makes it easy to display a game's info
};

