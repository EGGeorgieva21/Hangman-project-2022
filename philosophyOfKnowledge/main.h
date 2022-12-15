#pragma once
#include <iostream>
#include <iomanip>
#include <string>   
using namespace std;

//Global declarations
string start;
string word;
int level;
double health = 16;
int fateChooser;

void printHangman();
void printHuman();
void printMenuLevel();
void printRules();
void startTheGame();
void getLevel();
void getFate();
void automaticLevelAssignment();
void guessChecker();