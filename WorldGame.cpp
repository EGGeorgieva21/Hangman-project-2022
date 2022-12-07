#include <iostream>
#include "hangmanFunctions.h"
#include "hangmanFunctions.cpp"
#include <iomanip>
#include <string>
using namespace std;
// QA - check if we're really using all these libraries once we finish up w/ everything

int main()
{

 printingHangman();
 printingHuman();
 printingMenuLevel();
 printingRules();
 startingTheGame();
 choosingLevel();
 choosingFate();
 automaticLevelAssignment();
 guessChecker();

}   