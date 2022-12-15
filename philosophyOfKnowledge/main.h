#pragma once
#include <iostream>
#include <iomanip>
#include <string>   
using namespace std;

//Global declarations
static string start;
static string word;
static int level;
static double health = 16.0;
static int fateChooser;

void printHangman();
void printHuman();
void printMenuLevel();
void printRules();
void startTheGame();
void getLevel();
void getFate();
void automaticLevelAssignment();
void guessChecker();