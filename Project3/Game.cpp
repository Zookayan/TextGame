#include "Functions.h"
#include "Game.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

Game::Game()
{
	choice = 0;
	playing = true;
}

Game::~Game()
{

}

//Functions
void Game::mainMenu();
{
	cout << "MAIN MENU" << endl;
}