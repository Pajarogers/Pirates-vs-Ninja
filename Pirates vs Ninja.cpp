/*  
Paja Rogers
Course: CS275
Assignment: Object Oriented Programming
*/

#include <iostream>
using namespace std;
#include "GameStructure.h"
#include "Character.h"
#include "Pirates.h"
#include "Ninjas.h"
#include "GameRules.h"
#include "NinjaMaster.h"
#include "RiddlesN.h"


// functions for game intro and help option
void help()
{
    cout << "the answer key is provid above\n";
}
void intro()
{
    cout << "      In the forbidden tomb of Yojo Girlon, there is a golden scroll that has the power to heal. \n";
    cout << "  As legend tells there was a master ninja daughter name Yojo felled in love with a village boy named Dre. \n";
    cout << "  The love was forbidden, and Dre was outcast to the sea of no returns. Dre became the first pirate of the  \n";
    cout << "  sea of no return. Dre became the first pirate of the sea of no return. He never forgets about his love\n";
    cout << "  and returns years later with a gift a golden scroll that had the powers to heal. Dre is now known as\n";
    cout << "  captain Noheart, presents the gift to his love and left to return to the sea. It has been said that  \n";
    cout << "  the golden scroll is in the forbidden tomb of Yojo." << endl;
    cout << " \n";
    
}



int main()
{
    //declareing string, int for program 
    int scoreN = 0;
    string charName;
    int na;
    int ma;
    int charAnswer;
    int a = 1;
    int score(20);//attach power
    int ha(100);// health life
    int ga = ha - score; // score
    

    // entry to game...
    cout << "   \n   \n";
    cout << "                                        Pirates vs Ninjas" << endl;
    cout << "   \n   \n";
    intro();
    cout << "\n";
    cout << "    Enter your name...." << endl;
    cin >> charName;
    cout << "   \n   \n";
    cout << "   Captain Dogear told you" << " pirate" << " " << charName << ".\n";
    cout << "   To retrieve the lost golden scroll of Yojo." << endl;
    cout << "   That is located in the tomb forbidden tomb of Yojo.\n ";
    cout << "  To do this you must beat the ninjas that is protecting the tomb.\n ";
    cout << "   \n   \n";
    gameRules();

    cout << "\n";

    cout << "  Pirate " << charName << endl;
    cout << "\n\n";
    tombEntrance();
    cout <<"Your riddle:"<< riddle[1] << endl;
    cout << "\n";
    cout << "1.)" << riddleA[1] << "   " << "2.)" << riddleA[16] << "  " << "3.)" << riddleA[10] << endl;
    cout << " Choice your answer...1, 2 or 3\n";
    cout << "               You can exit by pressing 0\n";
    cout << "\n";
    cin >> charAnswer;// user answer
    while (a < charAnswer)// while for wrong anser
    {

        cout << "   Wrong answer" << "  You was hit with a ninja star \n";
        cout << "   Choose again...\n";
        cin >> charAnswer;
        

    }
    // if statement output for corret answer
    if (a == charAnswer) {
        cout << "   Your answer was correct..." << endl;
        cout << "   Ninja attack\n";
        cout << "   Your may enter the tomb... \n";

    }// exit program
     else if (charAnswer == 0)
    {
        return 0;
    }
    // starting level one
    level1();
    cout << "   Your riddle:"<<riddle[2] << endl;
    cout << "\n";
    cout << "1.)" << riddleA[2] << "   " << "2.)" << riddleA[11] << "  " << "3.)" << riddleA[17] << endl;
    cout << "\n";
    cout << "    Choice your answer... 1, 2 or 3\n";
    cout << "               You can exit by pressing 0\n";
    cout << "\n";
    cin >> charAnswer;
    while (a< charAnswer)
    {

        cout << "   Wrong answer" << "  You was hit with a ninja star \n";
        cout << "   Choose again...\n";
        cin >> charAnswer;
        cout << "  \n";


    }

    if (a == charAnswer) {
        cout << "   Your answer was correct..." << endl;
        cout << "   Ninja attack\n";
        cout << "   Next riddle...\n";
        cout << "\n";

    }
    else if (charAnswer == 0)
    {
        return 0;
    }
    cout << "   Your riddle:" << riddle[3] << endl;
    cout << "\n";
    cout << "1.)" << riddleA[3] << "   " << "2.)" << riddleA[12] << "  " << "3.)" << riddleA[18] << endl;
    cout << "\n";
    cout << "   Choice your answer... 1, 2 or 3\n";
    cout << "               You can exit by pressing 0\n";
    cout << "\n";
    cin >> charAnswer;
    while (a < charAnswer)
    {

        cout << "   Wrong answer" << "  You was hit with a ninja star \n";
        cout << "   Choose again...\n";
        cin >> charAnswer;
        cout << "\n";


    }

    if (a == charAnswer) {
        cout << "   Your answer was correct..." << endl;
        cout << "   Ninja attack\n";
        cout << "   Next Level..\n";
        

    }
    else if (charAnswer == 0)
    {
        return 0;
    }
    //starting level 2
    level2;
    cout << "   Your riddle:" << riddle[6] << endl;
    cout << "\n";
    cout << "1.)" << riddleA[6] << "   " << "2.)" << riddleA[12] << "  " << "3.)" << riddleA[19] << endl;
    cout << "\n";
    cout << "    Choice your answer... 1, 2 or 3\n";
    cout << "               You can exit by pressing 0\n";
    cout << "\n";
    cin >> charAnswer;
    while (a < charAnswer)
    {

        cout << "   Wrong answer" << "  You was hit with a ninja star \n";
        cout << "   Choose again...\n";
        cin >> charAnswer;
        cout << "  \n";


    }

    if (a == charAnswer) {
        cout << "   Your answer was correct..." << endl;
        cout << "   Ninja attack\n";
        cout << "   Next riddle...\n";
        cout << "\n";

    }
    else if (charAnswer == 0)
    {
        return 0;
    }
    cout << "   Your riddle:" << riddle[7] << endl;
    cout << "\n";
    cout << "1.)" << riddleA[7] << "   " << "2.)" << riddleA[15] << "  " << "3.)" << riddleA[19] << endl;
    cout << "\n";
    cout << "   Choice your answer... 1, 2 or 3\n";
    cout << "               You can exit by pressing 0\n";
    cout << "\n";
    cin >> charAnswer;
    while (a < charAnswer)
    {

        cout << "   Wrong answer" << "  You was hit with a ninja star \n";
        cout << "   Choose again...\n";
        cin >> charAnswer;
        cout << "\n";


    }

    if (a == charAnswer) {
        cout << "   Your answer was correct..." << endl;
        cout << "   Ninja attack\n";
        cout << "   Next Level..\n";

    }
    else if (charAnswer == 0)
    {
        return 0;
    }
    // starting level 3
    level3;
    cout << "   Your riddle:" << riddle[4] << endl;
    cout << "\n";
    cout << "1.)" << riddleA[4] << "   " << "2.)" << riddleA[19] << "  " << "3.)" << riddleA[3] << endl;
    cout << "\n";
    cout << "    Choice your answer... 1, 2 or 3\n";
    cout << "               You can exit by pressing 0\n";
    cout << "\n";
    cin >> charAnswer;
    while (a < charAnswer)
    {

        cout << "   Wrong answer" << "  You was hit with a ninja star \n";
        cout << "   Choose again...\n";
        cin >> charAnswer;
        cout << "  \n";


    }

    if (a == charAnswer) {
        cout << "   Your answer was correct..." << endl;
        cout << "   Ninja attack\n";
        cout << "   Next riddle...\n";
        cout << "\n";

    }
    else if (charAnswer == 0)
    {
        return 0;
    }
    cout << "   Your riddle:" << riddle[8] << endl;
    cout << "\n";
    cout << "1.)" << riddleA[8] << "   " << "2.)" << riddleA[20] << "  " << "3.)" << riddleA[19] << endl;
    cout << "\n";
    cout << "   Choice your answer... 1, 2 or 3\n";
    cout << "               You can exit by pressing 0\n";
    cout << "\n";
    cin >> charAnswer;
    while (a < charAnswer)
    {

        cout << "   Wrong answer" << "  You was hit with a ninja star \n";
        cout << "   Choose again...\n";
        cin >> charAnswer;
        cout << "\n";


    }

    if (a == charAnswer) {
        cout << "   Your answer was correct..." << endl;
        cout << "   Ninja attack\n";
     

    }
   
    cout << "Congrats you may enter and retrive the golden scroll";
    cout << " Thank you for playing\n";
};
 






    

  