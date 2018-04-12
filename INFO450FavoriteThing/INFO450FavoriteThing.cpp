// INFO450FavoriteThing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameList.h"
#include <iostream>

int main()
{
	GameList faveList;
	bool addGames = true;
	cout << "Welcome to the video game list program! Here we will create a list of your favorite video games, up to 100." << endl;
	cout << "We'll start you off with adding your first game. Press enter the start." << endl;
	do {
		char addGamesInput;
		faveList.addGameListItem();
		if (faveList.getListSize() >= 100)
		{
			addGames = false;
			break;
		}
		cout << "Add another game to the list? Enter Y for yes. Otherwise, we'll go ahead and show you what you've entered." << endl;
		cin >> addGamesInput;
		if (addGamesInput == 'y' || addGamesInput == 'Y')
		{
			addGames = true;
		}
		else
		{
			addGames = false;
		}
	} while (addGames == true);
	cout << "Thanks! Here's all the games on your list." << endl << endl;
	cout << faveList;
    return 0;
}

