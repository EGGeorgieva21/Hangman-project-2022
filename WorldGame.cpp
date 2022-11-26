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
}