#include <iostream>
#include"hangmanFunctions.h"

#include <iomanip>
#include <cmath>
#include <windows.h>
#include <random>
using namespace std;
// QA - check if we're really using all these libraries once we finish up w/ everything



int main()
{
	
	string robot1[12]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      /   \\\n  ", "   /     \\\n", "    /       \\\n"};
	string robot2[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "     _|___|_\n", "     | | | |\n", "     | | | |\n", "----------------------------------------------------" };
	string robot3[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "     _|___|_\n", "     | | | \n", "     | | | \n", "----------------------------------------------------" };
	string robot4[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "     _|___|_\n", "     | | \n", "      | | \n", "----------------------------------------------------" };
	string robot5[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "     _|___|_\n", "     | \n", "       | \n", "----------------------------------------------------" };
	string robot6[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "      |   |\n", "----------------------------------------------------" };
	
	cout << setw(41) << "_________________________" << endl;
	cout << setw(16) << "|" << setw(26) << "|" << endl;
	cout << setw(16) << "|" << setw(17) << "MENU GAME" << setw(9) << "|" << endl;
	cout << setw(16) << "|" << setw(26) << "|" << endl;
	cout << setw(16) << "|" << setw(18) << "level - 1 (Easy)" << setw(8) << "|" << endl;
	cout << setw(16) << "|" << setw(20) << "level - 2 (Normal)" << setw(6) << "|" << endl;
	cout << setw(16) << "|" << setw(18) << "level - 3 (Hard)" << setw(8) << "|" << endl;
	cout << setw(16) << "|" << setw(23) << "level - 4 (Very Hard)" << setw(3) << "|" << endl;
	cout << setw(42) << "|_________________________|" << endl;
	
	if (button == "ON") {
		HANDLE color2 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(color2, 15);
		cout << "Color for game" << endl;
		cout << "1 - dark_blue" << endl;
		cout << "2 - dark_green" << endl;
		cout << "3 - dark_sky_blue" << endl;
		cout << "4 - dark_red" << endl;
		cout << "5 - dark_purple" << endl;
		cout << "6 - dark_brown" << endl;
		cout << "7 - dark_white" << endl;
		cout << "8 - dark_grey" << endl;
		cout << "9 - blue" << endl;
		cout << "10 - green" << endl;
		cout << "11 - sky blue" << endl;
		cout << "12 - red" << endl;
		cout << "13 - purple" << endl;
		cout << "14 - yellow" << endl;
		cout << "15 - white" << endl;
		cout << "write a number-";
		cin >> color;
		switch (color)
		{
		case 1: system("color 01"); break;
		case 2: system("color 02"); break;
		case 3: system("color 03"); break;
		case 4: system("color 04"); break;
		case 5: system("color 05"); break;
		case 6: system("color 06"); break;
		case 7: system("color 07"); break;
		case 8: system("color 08"); break;
		case 9: system("color 09"); break;
		case 10: system("color 0A"); break;
		case 11: system("color 0B"); break;
		case 12: system("color 0C"); break;
		case 13: system("color 0D"); break;
		case 14: system("color 0E"); break;
		case 15: system("color 0F"); break;
		default: cout << "Error"; break;
		}
	}
	else { 
		cout << "Goodbye";
		HANDLE color3 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(color3, 15);
	}

	cout << "_________________________________________________";
	
	// print box parameters for main game
	for (int i = 1; i <= 24; i++)
	{
		cout << "|                                               |" << endl;
	}
	
	cout << "_________________________________________________";
	
			HANDLE color15 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color15, 12);
			
			HANDLE color16 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color16, 15);
			cout << setw(6) << "Start/Quit" << endl;
			cin >> START;


	if (START == "Start" || START == "START" || START == "start")
	{
		cout << "You've entered the game";
	}
	else 
	{
		cout << "Error";
	}
	/*cout << "Character-";
	cin >> character;
	cout << endl;
	for (int i = 0; i <= 52; i++) {
		if (char (RandomInt == word[i])){
			break;
		}
		else {
			RandomInt = 0;
			break;
		}
	}
	RandomInt = int(RandomInt * RandomInt);
	while ((RandomInt > 0) && (RandomInt < 10)) {
		RandomInt = RandomInt / 10;
	} 
	//while (RandomInt > 0);
	if ((RandomInt > 0) && (RandomInt < 1)) {
		RandomInt = (RandomInt * 10);
	}
	else {
		cout << endl;
	}
	while (T != true) {
		for (int i = 0; i <= 60; i++) {
			if ((char(RandomInt == word[i])) && (char(RandomInt == alphabet[i]))) {
				for (int a = 0; a <= 13; a++) {
					if ((char(RandomInt == easy[a])) && (int(RandomInt >= 0)) && (int(RandomInt <= 3))) {
						while ((nume <= 3) && (nume >= 0)) {
							w[a] = easy[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == easy[a])) && (int(RandomInt >= 4)) && (int(RandomInt <= 7))) {
						while ((nume >= 4) && (nume <= 7)) {
							w[a] = easy[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == normal[a])) && (int(RandomInt >= 0)) && (int(RandomInt <= 3))) {
						while ((nume >= 0) && (nume <=3)) {
							w[a] = normal[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == normal[a])) && (int(RandomInt >= 4)) && (int(RandomInt <= 8))) {
						while ((nume >= 4) && (nume <= 8)) {
							w[a] = normal[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == hard[a])) && (int(RandomInt >= 0)) && (int(RandomInt <= 4))) {
						while ((nume >= 0) && (nume <= 4)) {
							w[a] = hard[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == hard[a])) && (int(RandomInt >= 5)) && (int(RandomInt <= 10))) {
						while ((nume >= 5) && (nume <= 10)) {
							w[a] = hard[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == hard[a])) && (int(RandomInt >= 11)) && (int(RandomInt <= 16))) {
						while ((nume >= 11) && (nume <= 16)) {
							w[a] = hard[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == veryHard[a])) && (int(RandomInt >= 0)) && (int(RandomInt <= 5))) {
						while ((nume >= 0) && (nume <= 5)) {
							w[a] = veryHard[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == veryHard[a])) && (int(RandomInt >= 6)) && (int(RandomInt <= 12))) {
						while ((nume >= 6) && (nume <= 12)) {
							w[a] = veryHard[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == veryHard2[a])) && (int(RandomInt >= 0)) && (int(RandomInt <= 6))) {
						while ((nume >= 0) && (nume <= 6)) {
							w[a] = veryHard2[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					if ((char(RandomInt == veryHard2[a])) && (int(RandomInt >= 7)) && (int(RandomInt <= 13))) {
						while ((nume >= 7) && (nume <= 13)) {
							w[a] = veryHard2[a];
							nume = nume + 1;
						}
						T = (true);
						break;
					}
					else {
						cout << "Error" << endl;
						break;
					}
				}
			}
			else {
				RandomInt = char(int(RandomInt + 1));
				cout << "error character" << endl;
				break;
			}
		}
	}
	cin >> character;
	while (Tru != true) {
		for (int x = 0; x <= 51; x++) {
			if (char(character == alphabet[x])) {
				while (Tr != true) {
					for (int v = 0; v <= nume; v++) {
						if (char(character == w[v])) {
							cout << "correct is -" << character << endl;;
							break;
						}
						else {
							cout << "is not correct -" << character << endl;
							break;
						}
					}
				}
				Tru = (true);
			}
			else {
				Tru = (false);
			}
		}
	}*/
}
