#pragma once
#include <iostream>
#include <iomanip>
#include <string>   
using namespace std;
//how to use vector library? more research here.
//To explain, for the sake of functionality, this file will store all our variables/functions declarations. 
//Don't define here - do that in hangmanFunctions.cpp
//And make sure your names are understandable ^^.

// global declarations
string start;
string word;
double health = 16;
string level;  
bool gameEnded = false;
int fateChooser;

void printingHangman();
void printingHuman();
void printingMenuLevel();
void printingRules();
void startingTheGame();
void choosingLevel();
void choosingFate();
void automaticLevelAssignment();
void guessChecker();