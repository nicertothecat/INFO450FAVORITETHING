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
	int addGame();
	string getID();
	string getName();
	friend ostream & operator<<(ostream &os, const Game &game);
};

