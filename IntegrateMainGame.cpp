#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <random>
#include <string>
#include <vector>
using namespace std;
// QA - check if we're really using all these libraries once we finish up w/ everything

int main()
{
    
//randomize this char array based on predefined lvl

    // random declarations
	int length;
    string word;
    int health = 10;
    string inputLetter;
    bool gameEnded = false;
    
    
    //level declarations
    cout << "Enter your level: ";
    string level;
    cin >> level;
    cout << endl;

  // ask them if they want the first or second word; 
    cout << "Choose one your fate. 1 or 2? - ";
    int fateChooser;
    cin >> fateChooser;
    cout << endl;
    if (level == "easy" || level == "1") //level check;
    {
        if(fateChooser == 1)
        {
            word = "ball";
        }    
        else
        {
            word = "four" ;
        }
        length = 4;
    }
    else if (level == "normal" || level == "2")
    {
        if(fateChooser == 1)
        {
            word =  "board";
        }    
        else
        {
            word = "fight";
        }
        length = 5;
    }
    else if (level == "hard" || level == "3")
    {
        if(fateChooser == 1)
        {
            word = "accept";
        }    
        else
        {
            word = "merrow";
        }
        length = 6;
    }
    else if (level == "veryHard" || level == "4")
    {
        if(fateChooser == 1)
        {
            word = "eknruy";
        }    
        else
        {
            word = "mrkdnu";
        }
        length = 6;
    }
    else if (level == "veryHard1" || level == "5")
    {
        if(fateChooser == 1)
        {
            word = "fizzing";
        }    
        else
        {
            word = "whizzer";
        }
        length = 7;
    }
    
   //word
    char wordToChar[8] = {every letter of word};

    while(health > 0) // vuvejdane na bukvi
    {
        
        cin >> inputLetter;
        cout << endl;
        
        for(int i = 0; i < length; i++) // proverka za bukvite
	    {

		    if(inputLetter == wordToChar[i])
		    {
			    cout << "You guessed correctly! Congratulations!";
		    }

		    else //loosing hp part
		    {
                if (level == "easy" || level == "1")
                {
                    health -= 1;    
                }
                else if (level == "normal" || level == "2")
                {
                    health -= 2;
                }
                else if (level == "hard" || level == "3")
                {
                    health -= 3;
                }
                else if (level == "veryHard" || level == "4")
                {
                    health -= 3.5;
                }
                else if (level == "veryHard1" || level == "5")
                {
                    health -= 4;
                }
            
			    cout << "Try again. You have " << health <<  " health left." << endl;
                cout << inputLetter << " is not a correct letter." << endl;
		    }
            
            if(health <= 0)//dying part
            {
                health = 0;
                cout << "You have 0 health left. You've lost.";
                gameEnded = true;
                break;
            }
            
            else
            {
                cout << "You have " << health << " health left.";
            }
        }

        if(gameEnded)
        {
            break;
        }
	} 
} 