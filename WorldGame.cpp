#include <iostream>

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
	
	cout << "_________________________________________________";	
	for (int i = 1; i <= 24; i++)
	{
		cout << "|                                               |" << endl;
		// print box parameters for main game
	}
	cout << "_________________________________________________" << endl;


	string START;
    cout << "Start?";
    cin >> START;

	if (START == "Start" || START == "START" || START == "start")
	{
		cout << "You've entered the game";
	}
	else 
	{
		cout << "You've did something wrongly. Try typing Start or start or START";
	}
	/*cout << "stacter-";
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
