#pragma once
#include "Character.h"
class NinjaMaster :
 

    public Character
{
public:

    NinjaMaster(string name);
    int attack();
    void healthLost(int hitImpact);
    void talkN();


private:
    string name;
    int health;

};
