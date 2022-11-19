#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

#define SCREEN_WIDTH 20
#define SCREEN_HEIGHT 20
#define MENU_WIDTH 20

using namespace std;

int main()
{
	//tring people[5]{"( )","_____|_____","|   |","|   |","____",}
	string START;
	string text = " "; 
	string boxSpace = "                                                 ";
	string box = "_________________________________________________";
	string box1 = "|";
	string spaceBox = "                                               ";
	string valueNumZnak;
	string SpaceMenu = " |";  
	string space1 = " |";
	string space2 = "_______________";   
	string space = "                |";
	string spaceO = "                ";
	string space3 = "               |";  
	string Menu = "   MENU GAME  ";
	string level1 = "  level-1 (+) ";
	string level2 = "  level-2 (-) ";
	string level3 = "  level-3 (.) ";
	string level4 = "  level-4 (:) ";

	//system("color 4f");
	//HANDLE value = GetStdHandle(STD_OUTPUT_HANDLE);
	//SetConsoleTextAttribute(value, 9);
	HANDLE color14 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color14, 9);
	cout << spaceO;
	//HANDLE color12 = GetStdHandle(STD_OUTPUT_HANDLE);
	//SetConsoleTextAttribute(color12, 17); 
	cout << space2 << endl;
	cout << space3 << space3 << endl;
	cout << space3;
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 9);
	cout << Menu;
	HANDLE color1 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color1, 9);
	cout << SpaceMenu << endl;
	cout << space3;
	HANDLE color2 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color2, 10);
	cout << level1;
	HANDLE color3 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color3, 9);
	cout << space1 << endl;
	cout << space3;
	HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color4, 13);
	cout << level2;
	HANDLE color5 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color5, 9);
	cout << space1 << endl;
	cout << space3;
	HANDLE color6 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color6, 12);
	cout << level3;
	HANDLE color7 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color7, 9);
	cout << space1 << endl;
	cout << space3;
	HANDLE color8 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color8, 11);
	cout << level4;
	HANDLE color9 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color9, 9);
	cout << space1 << endl;
	cout << space3 << space2 << "|" << endl;
	HANDLE color13 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color13, 15);
	cout << box << endl;
	cout << boxSpace << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box << endl;
	cout << spaceO << "      ";
	HANDLE color15 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color15, 12);
	cin >> START;
	HANDLE color16 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color16, 15);
	cout << spaceO << "      " << endl;
	if (START == "Start" || START == "START" || START == "start") {

	}
	else {
		cout << "Error";
	}
}