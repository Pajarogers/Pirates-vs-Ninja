#pragma once
#include "GameStructure.h"
#include <string>
using namespace std;
#include "GameStructure.h"

class Character :
    public GameStructure
{
public:

    Character(string name);
    int attack();
    void healthLost(int hitImpact);
    void talkN();
    void talkP();
    void help();


private:
    string name;
    int health;

    
  

};

