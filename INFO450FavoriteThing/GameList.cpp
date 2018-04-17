#include "stdafx.h"
#include "GameList.h"
#include <iostream>

GameList::GameList()
{
	
	listSize = 0;
}

bool GameList::detectDupe(Game dupeGame)
{
	//Simple loop that iterates through the list to see if there is a matching ID and if so, return false
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
	//We have to make sure the game wasn't already entered, based on UID
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
	//We make use of Game's display output and augment it by showing item numbers to make it readable
	for (int i = 0; i < gamelistDisplay.listSize; i++)
	{
		os << "Item #" << i+1 << ":" << endl;
		os << gamelistDisplay.gList[i];
	}
	return os;
}