#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <random>
#include <string>
using namespace std;
// QA - check if we're really using all these libraries once we finish up w/ everything

int main()
{
	//declarations
	bool True = (false);
	int num = 0;
	int num1 = 0;
	int num2 = 0;
	char w[7];
	string level;
	default_random_engine eng;
	int RandomWord = eng();
	
	//words:
	char easy[8]{ 'b', 'a', 'l', 'l', /**/'f', 'o', 'u', 'r' };//3-4
	string easy1[2]{ "ball", "four" };
	char normal[9]{ 'l', 'e', 'a', 'f', /**/'b', 'o', 'a', 'r', 'd' };//4-5
	string normal1[2]{ "leaf", "board" };
	char hard[17]{ 'f', 'i', 'g', 'h', 't',/**/ 'f', 'l', 'o', 'w', 'e', 'r', /* */'a', 'c', 'c', 'e', 'p', 't' };//5-6
	string hard1[3]{ "fight", "flower", "accept" };
	char veryHard[13]{ 'a', 'c', 'c', 'e', 'p', 't',/**/ 'q', 'u', 'i', 'z', 'z', 'e', 'r' };//6-7+
	string veryHard1[2]{ "accept", "quizzer" };
	char veryHard2[14]{ 'f', 'i', 'z', 'z', 'i', 'n', 'g', /**/  'w', 'h', 'i', 'z', 'z', 'e', 'r' };//7-8+
	string veryHard3[2]{ "fizzing", "whizzer" };

	//char word[61]{ 'b', 'a', 'l', 'l', /*4*/'f', 'o', 'u', 'r', /*4/8*/ 'l', 'e', 'a', 'f', /*4/12*/'b', 'o', 'a', 'r', 'd', /*5/17*/ 'f', 'i', 'g', 'h', 't',/*5/22*/ 'f', 'l', 'o', 'w', 'e', 'r', /*6/28*/'a', 'c', 'c', 'e', 'p', 't', /*6/34*/ 'a', 'c', 'c', 'e', 'p', 't',/*6/40*/ 'q', 'u', 'i', 'z', 'z', 'e', 'r', /*7/47*/ 'f', 'i', 'z', 'z', 'i', 'n', 'g',/*7/54*/ 'w', 'h', 'i', 'z', 'z', 'e', 'r' /*7/61*/ };
	
//magic. don't touch.
	cout << setw(7) << "__" << endl;
	cout << setw(5) << "|" << setw(3) << "|" << endl;
	cout << setw(5) << "|" << setw(4) << "\\O/" << endl;
	cout << setw(5) << "|" << setw(3) << "|" << endl;
	cout << setw(5) << "|" << setw(2) << "/" << setw(2) << "\\" << endl;
	cout << setw(10) << "|_____" << endl;

	cout << setw(48) << "_________________________________" << endl;
	cout << setw(16) << "|" << setw(32) << "|" << endl;
	cout << setw(16) << "|" << setw(19) << "MENU GAME" << setw(13) << "|" << endl;
	cout << setw(16) << "|" << setw(32) << "|" << endl;
	cout << setw(16) << "|" << setw(19) << "level - 1 (Easy)" << setw(13) << "|" << endl;
	cout << setw(16) << "|" << setw(21) << "level - 2 (Normal)" << setw(11) << "|" << endl;
	cout << setw(16) << "|" << setw(19) << "level - 3 (Hard)" << setw(13) << "|" << endl;
	cout << setw(16) << "|" << setw(24) << "level - 4 (Very Hard)" << setw(8) << "|" << endl;
	cout << setw(16) << "|" << setw(28) << "level - 5 (Very Hard - 1)" << setw(4) << "|" << endl;
	cout << setw(48) << "|_______________________________|" << endl;

	// cout << "________________________________________________" << endl;
	//for (int i = 1; i <= 24; i++)
	//{
	//	cout << "|                                               |" << endl;
	//	// print box parameters for main game
	//}
	//cout << "_________________________________________________" << endl; 

//rules
	cout << "Rules: When asked start, echo start. otherwise, death." << endl;
	cout << "You want to end the game... perhaps a 0 would do... ? " << endl;
	cout << "So, start?\n" << endl;
	string start;
	cin >> start;


//Don't touch, this part officially WORKS. DONT. TOUCH. I WILL FIND YOU!!!!!!!!!!!!!!!!!!!!!!!!!!
	while ((start != "Start") || (start != "start") || (start != "START")){
		if ((start == "Start") || (start == "start") || (start == "START")){
			//start the game
			cout << "welcome" << endl;
			break;
		}
		else if(start == "0"){
			cout << "Bye." << endl;
			exit(0); //stops the game 
		}
		else{
			//restart the code
			cout << "Not quite. Are you sure you spelled it correctly? Or perhaps you meant to say 0?" << endl;
			cin >> start;
		}
	}
	

	cout << "Now, choose your level. You may choose 1 through 4. Which level is how hard, though, even we don't know." << endl;
	cout << "level - ";
	cin >> level;


	//here the magic ends.


	cout << endl;
	// level - 1,2,3,4
	RandomWord = (RandomWord * RandomWord); 
	while ((RandomWord <= 10) && (RandomWord >= 0)) 
	{
		RandomWord = RandomWord / 10;
	}
	
	// random_int < 10 and random_int > 0 
	if ((level == "easy") || (level == "1")) 
	{
		if (string(easy1[RandomWord]) == "ball")
		{
			for (int i = 0; i <= 3; i++) 
			{
				w[i] = easy[i];
				num1 = 4;
			}
		}
		else {
			for (int i = 4; i <= 7; i++) 
			{
				w[num] = easy[i];
				num = num + 1;
				num1 = 8;
			}
		}
	}
	// easy: word ("ball" and "four")
	// w[i]- is list for characters on words 
	if ((level == "normal") || (level == "2")) 
	{
		if (string(normal1[RandomWord]) == "leaf")
		{
			for (int i = 0; i <= 3; i++) 
			{
				w[i] = easy[i];
				num1 = 4;
			}
		}
		else {
			for (int v = 4; v <= 8; v++) 
			{
				w[int(num)] = easy[v];
				num = num + 1;
				num1 = 5;
			}
		}
	}
	if ((level == "hard") || (level == "3")) 
	{
		if (string(hard1[int(RandomWord)]) == "fight")
		{
			for (int i = 0; i <= 4; i++) 
			{
				w[i] = easy[i];
				num1 = 5;
			}
		}
		if (string(hard1[int(RandomWord)]) == "flower")
		{
			for (int v = 5; v <= 10; v++) 
			{
				w[int(num)] = easy[int(v)];
				num = num + 1;
				num1 = 6;
			}
		}
		else 
		{
			for (int c = 11; c <= 16; c++) 
			{
				w[num] = easy[int(c)];
				num = num + 1;
				num1 = 6;
			}
		}
	}
	if ((level == "Very Hard") || (level == "4")) 
	{
		if (string(veryHard1[int(RandomWord)]) == "accept")
		{
			for (int i = 0; i <= 5; i++) 
			{
				w[i] = easy[i];
				num1 = 6;
			}
		}
		else {
			for (int v = 6; v <= 12; v++) 
			{
				w[num] = easy[int(v)];
				num = num + 1;
				num1 = 7;
			}
		}
	}
	if ((level == "Very Hard - 1") || (level == "5"))
	{
		if (string(veryHard3[int(RandomWord)]) == "fizzing")
		{
			for (int i = 0; i <= 6; i++) 
			{
				w[i] = easy[i];
				num1 = 7;
			}
		}
		else 
		{
			for (int v = 7; v <= 13; v++) 
			{
				w[int(num)] = easy[int(v)];
				num = num + 1;
				num1 = 7;
			}
		}
	}	


cout << level << endl;

/*
int index;
int counter = 0;
while (counter < 1)
{
	string character;
	cout << "Character-";
	cin >> character;
	cout << endl;
	for (int v = 0; v <= 6; v++)
	{
		if (character == w[v])
		{
			cin << index;

			cout << "True-" << character << endl;
			break;
		}

		// True - a
		else
		{
			cout << "False-" << character << endl;
			break;
		}
		// False - a

	}

	counter++;
} */
/*char character;
cout << "What's your guess?" << endl;
cin >> character;*/


//char character;
	cout << "character -";
	char character;
	cout << endl;
	// hp percentage here, let's just set it to 6 for texting
	for (int v=0; v<=6; v++)
	{
	
		cout << "What's your guess?" << endl;
		cin >> character;
		if (character == w[v]){
			cout << character << "is in word" << endl;
			//cout the place of the char in the word, somehow visually? have an idea 4 this
		}
		else{
			cout << character << "isn't in the word" << endl;
			// make a vector which adds the character to it, later make an output of that vector as tried letters not in word
		}


		/*while(character) <= 7){
			if (character == w[v]) 
			{				
				cout << "True-" << character << endl;
				break;
			}
			// True - a
			else 
			{
				cout << "False-" << character << endl;
				break;
			}
			// False - a
		}
		*/
	}











}