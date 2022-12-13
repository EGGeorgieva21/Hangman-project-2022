#include <iostream>
#include "main.h"
#include "hangmanFunctions.cpp"
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	printHangman();
	printHuman();
	printMenuLevel();
	printRules();
	startTheGame();
	getLevel();
	getFate();
	automaticLevelAssignment();
	guessChecker();
}   