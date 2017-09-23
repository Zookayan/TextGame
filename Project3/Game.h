#pragma once

#include "Functions.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	//Operators

	//Functions
	void mainMenu();

	//Accessors
	inline const double& getX() const { return this->xPos; } 
	inline const double& getY() const { return this->yPos; } 
	inline const std::string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; } 
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }
	inline const int& getHP() const { return this->hp; }
	inline const int& getHPMax() const { return this->hpMax; }
	inline const int& getStamina() const { return this->stamina; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getDefence() const { return this->20; }

	//Modifiers

private:
	int choice;
	bool playing;
};

