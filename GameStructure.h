#pragma once
#include <iostream>
#include <string>
using namespace std;

class GameStructure
{
 public:
       
     GameStructure(string name);
        int attack();
       void healthLost(int hitImpact);
       void help();
     
private:
    string name; 
    int health;


protected:
    int hp;

   
};


