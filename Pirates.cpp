#include "Pirates.h"
using namespace std;
Pirates::Pirates(string name) :Character(name)
{
	this->hp = 20;
};
int Pirates::attack() {

	return this->hp;

}
void Pirates::healthLost(int hitImpact) {
	
}

void Pirates::help() {
	cout << "    For a hint press 0...\n";
}
void Pirates::talkP()
{
	cout << "   Gost of Yojo. I am here to retreive the golden scroll \n";
}

