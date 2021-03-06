// INFO450FavoriteThing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameList.h"
#include <iostream>

int main()
{
	//We start by initializing a currently blank list of games and a boolean that will be used to fuel the user input loop.
	GameList faveList;
	bool addGames = true;
	//Then we introduce the user to the program
	cout << "Welcome to the video game list program! Here we will create a list of your favorite video games, up to 100." << endl;
	cout << "We'll start you off with adding your first game. Press enter the start." << endl;
	//This loop is the bulk of the program. We ask the user to input games continually until they are done.
	do {
		char addGamesInput;
		faveList.addGameListItem();
		//Here we make sure that the loop ends if the limit of the game list array is reached
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
	//Finally we display the list of games the user entered. Very functional.
	cout << "Thanks! Here's all the games on your list." << endl << endl;
	cout << faveList;
    return 0;
}

