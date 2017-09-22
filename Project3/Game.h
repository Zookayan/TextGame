#pragma once
class Game
{
public:
	Game();
	virtual ~Game();

	//Operators

	//Functions
	void mainMenu();

	//Accessors
	inline bool getPlaying(); const { return this->playing; }

	//Modifiers

private:
	int choice;
	bool playing;
};

