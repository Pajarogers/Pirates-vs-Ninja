#pragma once
#include "Character.h"


class Ninjas :
    public Character
{
public:

 Ninjas(string name);
 int attack();
 void healthLost(int hitImpact);


private:
    string name;
    int health;

};


