#include "GameStructure.h"
using namespace std;


GameStructure::GameStructure(string name)
{
	this->name = name;
	this->health = 100;
	this->hp = 10;
}

void GameStructure::healthLost(int hitImpact) {
	this->health -= hitImpact;
	if (this->health < 0)
	{
		this->health = 0;
	}
	
}
int GameStructure::attack() {
	return this->hp;
}
void GameStructure::help()
{
	cout << "    For a hint press 1...\n";
}