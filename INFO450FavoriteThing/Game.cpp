#include "stdafx.h"
#include "Game.h"
#include <iostream>

Game::Game()
{
}


Game::Game(string gameid, string gamename, string gameplat, double gameprice, int gameyear, char gamerating)
{
	id = gameid;
	name = gamename;
	platform = gameplat;
	msrp = gameprice;
	year = gameyear;
	rating = gamerating;
}

int Game::addGame()
{
	cin.clear();
	cin.ignore();
	cout << "You're adding a new game to the system!" << endl << "What's the name of the game?" << endl;
	getline(cin, name);
	cout << "What's the unique ID for " << name << " ?" << endl;
	getline(cin, id);
	cout << "What platform is " << name << " available on?" << endl;
	getline(cin, platform);
	cout << "What is the MSRP (market suggested retail price) for " << name << "?" << endl;
	cin >> msrp;
	cout << "What is the release year of " << name << "?" << endl;
	cin >> year;
	cout << "What is the ESRB maturity rating for " << name << "?";
	cin >> rating;
	cout << "Thank you! The information you entered for " << name << " has been saved." << endl;
	return 0;
}

string Game::getID()
{
	return id;
}

string Game::getName()
{
	return name;
}
ostream & operator<<(ostream &os, const Game &gameDisplay)
{
	os << "Name: " << gameDisplay.name << endl;
	os << "ID: " << gameDisplay.id << endl;
	os << "Platform: " << gameDisplay.platform << endl;
	os << "MSRP: $" << gameDisplay.msrp << endl;
	os << "Release year: " << gameDisplay.year << endl;
	os << "ESRB rating: " << gameDisplay.rating << endl;
	return os;
}