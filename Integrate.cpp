#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <random>

using namespace std;

int main()
{
	string character;
	string alphabet[52]{ "a", "A", "b", "B", "c", "C", "d", "D", "e", "E", "f", "F", "g", "G", "h", "H", "i", "I", "j", "J", "k", "K", "l", "L", "m", "M", "n", "N", "o", "O", "p", "P", "q", "Q", "r", "R", "s", "S", "t", "T", "u", "U", "v", "V", "w", "W", "x", "X", "y", "Y", "z", "Z" };
	//string name;
	string button;
	int color;
	//system("color 4");
	int num = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	
	//Words degree
	/*string easy[2]{"ball", "four"};//3-4
	string normal[2]{ "leaf", "board"};//4-5
	string hard[3]{ "fight", "flower", "accept" };//5-6
	string veryHard[2]{ "accept", "quizzer" };//6-7+
	string veryHard1[3]{ "fizzing", "whizzer"};//7-8+*/

	string easy[8]{ "b", "a", "l", "l", /**/"f", "o", "u", "r" };//3-4
	string normal[9]{ "l", "e", "a", "f", /**/"b", "o", "a", "r", "d"};//4-5
	string hard[17]{ "f", "i", "g", "h", "t",/* */ "f", "l", "o", "w", "e", "r", /* */"a", "c", "c", "e", "p", "t"};//5-6
	string veryHard[13]{ "a", "c", "c", "e", "p", "t",/* */ "q", "u", "i", "z", "z", "e", "r" };//6-7+
	string veryHard1[14]{ "f", "i", "z", "z", "i", "n", "g",/* */ "w", "h", "i", "z", "z", "e", "r" };//7-8+
	string Start;
	string box = "_______________________________________________________________________________________________________________________";
	string spaceBox = "                                                                                                                     ";
	string box1 = "|"; 
	string rules[7]{ "Rules", "_____________________", "|", "TEXT", "|", "|____________________", "____________________|"};
	string menu[5]{"Menu Game", "level-1 (Easy)", "level-2 (Normal)", "level-3 (Hard)", "level-4 (Very Hard)"};
	string robot1[12]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      /   \\\n  ", "   /     \\\n", "    /       \\\n"};
	string robot2[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "     _|___|_\n", "     | | | |\n", "     | | | |\n", "----------------------------------------------------" };
	string robot3[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "     _|___|_\n", "     | | | \n", "     | | | \n", "----------------------------------------------------" };
	string robot4[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "     _|___|_\n", "     | | \n", "      | | \n", "----------------------------------------------------" };
	string robot5[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "     _|___|_\n", "     | \n", "       | \n", "----------------------------------------------------" };
	string robot6[15]{ "_________________\n", "        |\n" , "      __|__\n", "     (- _ -)\n", "  _____ | _____\n", " /    |   |    \\\n"," |    |   |    |\n", " |    |   |    |\n", "      |___|\n", "      |   |\n", "      |   |\n", "      |   |\n", "----------------------------------------------------" };
	cout << "(ON/OFF) - ";
	HANDLE color1 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color1, 12);
	cin >> button;
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
	/*for (int num; num <= 11; num++) {
		cout << robot1[num] << endl;
	}
	for (int num1; num1 <= 11; num1++) {
		cout << robot2[num1] << endl;
	}
	for (int num2; num2 <= 11; num2++) {
		cout << robot3[num2] << endl;
	}
	for (int num3; num3 <= 11; num3++) {
		cout << robot4[num3] << endl;
	}
	for (int num4; num4 <= 11; num4++) {
		cout << robot5[num4] << endl;
	}*/
	//for (int num = 0; num <= 14; num++) {
	//	cout << robot2[num];
	//}
	// BOX cod dont deluet !!!! (63-93) color: red;
	/*cout << box << endl;
	cout << " " << spaceBox << " " << endl;
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
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box1 << spaceBox << box1 << endl;
	cout << box << endl;*/
	/*cout << " " << rules[0] << "                                                                      " << " " << endl;//98
	cout << " " << rules[1] << rules[1]<< "                                                          " << robot1[0] << " " << endl;//98
	cout << " " << rules[2] << "                   " << rules[4] << "                                                                               " << robot1[1] << " " << endl;//98
	cout << " " << rules[2] << "                  " << rules[3] << "                  " << rules[4] << "                                                             " << robot1[3] << " " << endl;//98
	cout << " " << rules[2] << "       " << rules[3] << "       " << rules[4] << "                                " << robot1[4] << " " << endl;//98
	cout << " " << rules[2] << "       " << rules[3] << "       " << rules[4] << "                                " << robot1[5] << " " << endl;//98
	cout << " " << rules[2] << "       " << rules[3] << "       " << rules[4] << "                                " << robot1[6] << " " << endl;//98
	cout << " " << rules[2] << "       " << rules[3] << "       " << rules[4] << "                                " << robot1[7] << " " << endl;//98
	cout << " " << rules[2] << "       " << rules[3] << "       " << rules[4] << "                                " << robot1[8] << " " << endl;//98
	cout << " " << rules[2] << "       " << rules[3] << "       " << rules[4] << "                                " << robot1[9] << " " << endl;//98
	cout << " " << rules[2] << "       " << rules[3] << "       " << rules[4] << "                                " << robot1[10] << " " << endl;//98
	cout << " " << rules[5] << rules[6] << "                                " << robot1[11] << " " << endl;//98*/
	/*Sleep(1000);
	cout << "Color for game" << endl;
	cout << "1 - dark_blue" << endl;
	cout << "2 - dark_green" << endl;
	cout << "3 - dark_sky_blue" << endl;
	cout << "4 - dark_red"<< endl;
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
	}*/
	//string character;
	//string alphabet[52]
	while (num1 <= 51) {
		if ((string (character) == alphabet[num1]) && (string (character) == easy[num1]) && (num1 >= 0) && (num1 <= 3)){
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		if ((string(character) == alphabet[num1]) && (string(character) == easy[num1]) && (num1 >= 4) && (num1 <= 7)) {
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		if ((string(character) == alphabet[num1]) && (string(character) == normal[num1]) && (num1 >= 0) && (num1 <= 3)) {
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		if ((string(character) == alphabet[num1]) && (string(character) == normal[num1]) && (num1 >= 4) && (num1 <= 8)) {
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		if ((string(character) == alphabet[num1]) && (string(character) == hard[num1]) && (num1 >= 0) && (num1 <= 4)) {
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		if ((string(character) == alphabet[num1]) && (string(character) == hard[num1]) && (num1 >= 5) && (num1 <= 10)) {
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		if ((string(character) == alphabet[num1]) && (string(character) == hard[num1]) && (num1 >= 11) && (num1 <= 15)) {
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		if ((string(character) == alphabet[num1]) && (string(character) == hard[num1]) && (num1 >= 5) && (num1 <= 10)) {
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		if ((string(character) == alphabet[num1]) && (string(character) == hard[num1]) && (num1 >= 5) && (num1 <= 10)) {
			HANDLE color4 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color4, 10);
			cout << character;
			num1 = num1 + 1;
		}
		else {
			HANDLE color5 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(color5, 12);
			cout << character << " -1p"; break;
		}
	}
}


