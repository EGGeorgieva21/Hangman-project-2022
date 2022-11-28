#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <random>
using namespace std;
// QA - check if we're really using all these libraries once we finish up w/ everything

int main()
{
	cout << setw(7) << "__" << endl;
	cout << setw(5) << "|" << setw(3) << "|" << endl;
	cout << setw(5) << "|" << setw(4) << "\\O/" << endl;
	cout << setw(5) << "|" << setw(3) << "|" << endl;
	cout << setw(5) << "|" << setw(2) << "/" << setw(2) << "\\" << endl;
	cout << setw(10) << "|_____" << endl;

	cout << setw(41) << "_________________________" << endl;
	cout << setw(16) << "|" << setw(26) << "|" << endl;
	cout << setw(16) << "|" << setw(17) << "MENU GAME" << setw(9) << "|" << endl;
	cout << setw(16) << "|" << setw(26) << "|" << endl;
	cout << setw(16) << "|" << setw(18) << "level - 1 (Easy)" << setw(8) << "|" << endl;
	cout << setw(16) << "|" << setw(20) << "level - 2 (Normal)" << setw(6) << "|" << endl;
	cout << setw(16) << "|" << setw(18) << "level - 3 (Hard)" << setw(8) << "|" << endl;
	cout << setw(16) << "|" << setw(23) << "level - 4 (Very Hard)" << setw(3) << "|" << endl;
	cout << setw(42) << "|_________________________|" << endl;

	/* cout << "________________________________________________" << endl;
	for (int i = 1; i <= 24; i++)
	{
		cout << "|                                               |" << endl;
		// print box parameters for main game
	}
	cout << "_________________________________________________" << endl; */

	cout << "Start?" << endl;
	char start[4];
	cin.getline(start, 4, '\n');
	int length = strlen(start);
	for (int i = 1; i <= length; i++)
	{
		cout << "You have started!"; break;
	}
	/*
	cout << "level - ";
	cin >> level;
	RandomInt = RandomInt * RandomInt;
	while (RandomInt <= 10) {
		RandomInt = RandomInt / 10;
	}
	if ((level == "easy") || (level == "1")) {
		if (easy1[RandomInt] == "ball") {
			for (int i = 0; i <= 3; i++) {
				w[i] = easy[i];
				num1 = 4;
			}
		}
		else {
			for (int i = 4; i <= 7; i++) {
				w[num] = easy[i];
				num = num + 1;
				num1 = 8;
			}
		}
	}
	if ((level == "normal") || (level == "2")) {
		if (normal1[RandomInt] == "leaf") {
			for (int i = 0; i <= 3; i++) {
				w[i] = easy[i];
				num1 = 4;
			}
		}
		else {
			for (int v = 4; v <= 8; v++) {
				w[int(num)] = easy[v];
				num = num + 1;
				num1 = 5;
			}
		}
	}
	if ((level == "hard") || (level == "3")) {
		if ((hard1[int(RandomInt)] == "fight")) {
			for (int i = 0; i <= 4; i++) {
				w[i] = easy[i];
				num1 = 5;
			}
		}
		if (hard1[RandomInt] == "flower") {
			for (int v = 5; v <= 10; v++) {
				w[int(num)] = easy[int(v)];
				num = num + 1;
				num1 = 6;
			}
		}
		else {
			for (int c = 11; c <= 16; c++) {
				w[num] = easy[int(c)];
				num = num + 1;
				num1 = 6;
			}
		}
	}
	if ((level == "Very Hard") || (level == "4")) {
		if ((veryHard1[int(RandomInt)] == "accept")) {
			for (int i = 0; i <= 5; i++) {
				w[i] = easy[i];
				num1 = 6;
			}
		}
		else {
			for (int v = 6; v <= 12; v++) {
				w[num] = easy[int(v)];
				num = num + 1;
				num1 = 7;
			}
		}
	}
	if ((level == "Very Hard - 1") || (level == "5")) {
		if (veryHard2[RandomInt] == "fizzing") {
			for (int i = 0; i <= 6; i++) {
				w[i] = easy[i];
				num1 = 7;
			}
		}
		else {
			for (int v = 7; v <= 13; v++) {
				w[int(num)] = easy[int(v)];
				num = num + 1;
				num1 = 7;
			}
		}
	}
	cout << "Character-";
	cin >> character;
	cout << endl;
	while (True != true) {
		for (int v = 0; v <= 6; v++) {
			if (character == w[v]) {
				cout << "True-" << character << endl; break;

				if (num2 == num1) {
					True = (true);
				}
				else {
					cout << "False-" << character << endl; break;
				}
			}
		}
	}
	*/
}
