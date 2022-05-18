#include "Ninjas.h"
using namespace std;


Ninjas::Ninjas(string name) :Character(name)
{
	this->hp = 5;
};

void Ninjas::healthLost(int hitImpact) {}

int Ninjas::attack() {
	return this->hp;
}

