#pragma once
#include "Character.h"

class Pirates :
    public Character
{
    
    public:

        Pirates(string name);
        int attack();
        void healthLost(int hitImpact);
        void help();
        void talkP();
       
      

    private:
        string name;
        
    };



