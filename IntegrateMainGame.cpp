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
    //cout << "___                __"
    //cout << "| |                | |"
    //cout << "| |                | |"
    //cout << "| |                | |"
    //cout << "| |                | |     ________."
    //cout << "| |----------------| |    / _____  |"
    //cout << "| |                | |   / /     | |"
    //cout << "| |----------------| |  /_/      | |"
    //cout << "| |                | |      _____| |"
    //cout << "| |                | |   / /     | |"
    //cout << "| |                | |  | |      | |"
    //cout << "|_|                |_|   \_\_____|_|"


//randomize this char array based on predefined lvl

    // random declarations
    string word;
    double health = 16;
    string level;
    string guess;
    bool gameEnded = false;
    
    
    //level declarations
    cout << "Enter your level (1 ~ 5): ";
    cin >> level;
    cout << endl;

  // ask them if they want the first or second word; 
    cout << "Choose one your fate. 1 or 2? - ";
    int fateChooser;
    cin >> fateChooser;
    cout << endl;
    //checks the difficulty level entered
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
    }
    
    string guess;
    while(health > 0 || gameEnded != false) // vuvejdane na bukvi
    { 
        cout << "Enter what you think the word is: ";
        cin >> guess;
        cout << endl;
        
        
            if(guess == word)
            {
                cout << "Grats, ya won" << endl;
                gameEnded = true;

                cout << "You guessed: " << guess << endl; 
                cout << "And the word was: " << word << endl;
                break;
            }
            
		    else //losing hp part 
		    {
                if (level == "easy" || level == "1")
                {
                    health -= 1;
                    cout << guess << " is not a the correct word." << endl;
			        cout << "You have " << health <<  " health left. Feel threatened." << endl;  
                    break;  
                }
                else if (level == "normal" || level == "2")
                {
                    health -= 2;
                    cout << guess << " is not the correct word." << endl;
			        cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    break;
                }
                else if (level == "hard" || level == "3")
                {
                    health -= 3;
                    cout << guess << " is not the correct word." << endl;
			        cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    break;
                }
                else if (level == "veryHard" || level == "4")
                {
                    health -= 3.5;
                    cout << guess << " is not the correct word." << endl;
			        cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    break;
                }
                else if (level == "veryHard1" || level == "5")
                {
                    health -= 4;
                    cout << guess << " is not the correct word." << endl;
			        cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    break;
                }
		    }
            
            if(health <= 0)//dying part
            {
                health = 0;
                cout << "You have 0 health left. You've lost." << endl;
                gameEnded = true;
                break;
            }
    }
    
}