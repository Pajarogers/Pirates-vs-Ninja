#include "NinjaMaster.h"
using namespace std;


NinjaMaster::NinjaMaster(string name) :Character(name)
{
	this->hp = 25;
};

void NinjaMaster::healthLost(int hitImpact) {}

int NinjaMaster::attack() {
	return this->hp;
}
void NinjaMaster::talkN()
{
	cout << "   You may enter and reteive the golden scroll \n";

}