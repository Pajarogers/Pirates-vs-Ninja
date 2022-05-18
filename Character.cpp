#include "Character.h"
using namespace std;

Character::Character(string name) :GameStructure(name) {
	
};

void Character::healthLost(int hitImpact) {
	this->health -= hitImpact;
	if (this->health < 0)
	{
		this->health = 0;
	}

}
int Character::attack() {
	return this->hp;
}

void Character::talkN()
{
	cout << "   You may enter and reteive the golden scroll \n";
	
}

void Character::talkP()
{
	cout << "   Gost of Yojo. I am here to retreive the golden scroll \n";
}
void Character::help() {
	cout << "    For a hint press 1...\n";
}
