#include <iostream>
#include "hangmanFunctions.h"
#include "hangmanFunctions.cpp"
#include <iomanip>
#include <string>
using namespace std;

//rename functions again 
// rename files again

int main()
{

 printingHangman();
 printingHuman();
 printingMenuLevel();
 printingRules();
 startingTheGame();
    cout << "Enter your level (1 ~ 5): ";
 getLevel();
 choosingFate();
 automaticLevelAssignment();
 guessChecker();


}   