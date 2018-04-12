#include "stdafx.h"
#include "GameList.h"
#include <iostream>

GameList::GameList()
{
	listSize = 0;
}

bool GameList::detectDupe(Game dupeGame)
{
	for (int i = 0; i < listSize; i++)
	{
		if (dupeGame.getID() == gList[i].getID())
		{
			cout << "Sorry, the ID you've entered matches that of " << gList[i].getName() << ", which is already in the list." << endl;
			return false;
		}
	}
	return true;
}

int GameList::addGameListItem()
{
	Game newGame;
	newGame.addGame();
	if (detectDupe(newGame))
	{
		gList[listSize] = newGame;
		listSize++;
		return 0;
	}
	else
	{
		return ERROR2;
	}
}

int GameList::getListSize()
{
	return listSize;
}

ostream & operator<<(ostream &os, const GameList &gamelistDisplay)
{
	for (int i = 0; i < gamelistDisplay.listSize; i++)
	{
		os << "Item #" << i+1 << ":" << endl;
		os << gamelistDisplay.gList[i];
	}
	return os;
}