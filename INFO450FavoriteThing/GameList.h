#include "stdafx.h"
#include "Game.h"
#include <string>

using namespace std;
const int ERROR2 = 2;

class GameList
{
private:
	Game gList[100];
	int listSize;

public:
	GameList();
	int addGameListItem();
	bool detectDupe(Game dupeGame);
	int getListSize();

	friend ostream & operator<<(ostream &os, const GameList &gamelist);
};

