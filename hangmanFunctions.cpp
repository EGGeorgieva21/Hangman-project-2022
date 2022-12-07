#include <iostream>
#include "hangmanFunctions.h"
#include <iomanip>
#include <string>
using namespace std;
//Add any extra libraries as needed.
// Feel free to define your functions here. Add comments to say what they do, if necessary.


void printingHangman() //prints the game title in big letters
{
     cout << setw(10) << " _                  _" << endl;
     cout << setw(10) << "| |                | |" << endl;
     cout << setw(10) << "| |                | |" << endl;
     cout << setw(10) << "| |                | |" << endl;
     cout << setw(10) << "| |                | |     ________.   _    _________     ___________  _    _   _  _   _  _      ________.   _    _________" << endl;
     cout << setw(10) << "| |                | |    / _____  |  | |  / ______  |   / /       \\ \\| |  | | / /| | / /| |    / _____  |  | |  / ______  |" << endl;
     cout << setw(10) << "| |----------------| |   / /     | |  | | / /      | |  / /           | |  | |/ / | |/ / | |   / /     | |  | | / /      | |" << endl;
     cout << setw(10) << "| |----------------| |  /_/      | |  | |/ /       | |  | |           | |  | | /  | | /  | |  /_/      | |  | |/ /       | |" << endl;
     cout << setw(10) << "| |                | |           | |  | | /        | |  \\ \\           | |  | |/   | |/   | |           | |  | | /        | |" << endl;
     cout << setw(10) << "| |                | |    _______| |  | |/         | |   \\_\\_______/_/| |  | |    | |    | |    _______| |  | |/         | |" << endl;
     cout << setw(10) << "| |                | |   / /     | |  | |          | |   _            | |  | |    | |    | |   / /     | |  | |          | |" << endl;
     cout << setw(10) << "| |                | |  | |      | |  | |          | |  | |           / /  | |    | |    | |  | |      | |  | |          | |" << endl;
     cout << setw(10) << "|_|                |_|   \\_\\_____|_|  |_|          |_|  \\ \\__________/ /   |_|    |_|    |_|   \\_\\_____|_|  |_|          |_|" << endl;
     cout << setw(10) << "                                                         \\____________/" << endl;
}

void printingHuman() //Prints the little human
{
    cout << setw(7) << "__" << endl;
	cout << setw(5) << "|" << setw(3) << "|" << endl;
	cout << setw(5) << "|" << setw(4) << "\\O/" << endl;
	cout << setw(5) << "|" << setw(3) << "|" << endl;
	cout << setw(5) << "|" << setw(2) << "/" << setw(2) << "\\" << endl;
	cout << setw(10) << "|_____" << endl;
}


void printingMenuLevel() //Prints the level menu 
{
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
    cout << endl;
}

void printingRules() //Prints the rules
{ 
    cout << "Rules: When asked start, echo start. otherwise, death. If you want to end the game... perhaps a 0 would do... ? " << endl;
	cout << "So, start? ";
	cin >> start;
}

void startingTheGame() //The part of the code when you type "start" to start the game
{
    while ((start != "Start") || (start != "start") || (start != "START"))
    {
		if ((start == "Start") || (start == "start") || (start == "START"))
        {
			//start the game
			cout << "welcome" << endl;
			break;
		}
		else if(start == "0")
        {
			cout << "Bye." << endl;
			exit(0); //stops the game 
		}
		else
        {
			//restart the code
			cout << "Not quite. Are you sure you spelled it correctly? Or perhaps you meant to say 0? (your options are /start/ and /0/)" << endl;
			cin >> start;
		}
	}
}

void choosingLevel() //Choosing your level
{
    cout << "Enter your level (1 ~ 5): ";
    cin >> level;
    cout << endl;
    if (level != 1 && level != 2 && level != 3 && level != 4 && level != 5)
    {
        cout << "Choose a level between 1 ~ 5.";
        exit(0);
    }
}

void choosingFate()
{
    cout << "Choose one your fate. 1 or 2? - ";
    cin >> fateChooser;
    cout << endl;
    if (fateChooser != 1 && fateChooser != 2)
    {
        cout << "Choose a fate between 1 and 2.";
        exit(0);
    }
}

void automaticLevelAssignment()
{
    if (level == "easy" || level == "1") //level check;
    {
        if(fateChooser == 1)
        {
            cout << "Your hint is: round, smooth. Monkeys all around the world worship it. They run around and kick it... It even has its own sport dedicated to it." << endl;
            word = "ball";
        }    
        else
        {
            cout << "Your hint is: A very, very small human. Some are against its death while it is still in primal form. Those guys are weirdoes, do not listen to them." << endl;
            word = "baby";
        }
    }
    else if (level == "normal" || level == "2")
    {
        if(fateChooser == 1)
        {
            cout << "Your hint is: An item often used in schools and other professional fascilities, with the intention to torture its readers." << endl;
            cout << "A black marker is used to add information to it. It usually hangs on a wall, where its knowledge can be displayed to all who dare look.";
            word =  "board";
        }    
        else
        {
            cout <<"Your hint is: This is a measurement for bread. Good luck. And no, the word is not piece.";
            word = "slice";
        }
    }
    else if (level == "hard" || level == "3")
    {
        if(fateChooser == 1)
        {
            cout << "What button always comes before the decline button on a pop-up asking for some sort of permission?";
            word = "accept";
        }    
        else
        {
            cout<< "A fancy word for cloth.";
            word = "fabric"; 
        }
    }
    else if (level == "veryHard" || level == "4")
    {
        if(fateChooser == 1)
        {
            cout << "Long eared angels. Fluffy as a cloud, these little cottonballs love jumping, carrots, and are a great house pet. Write the word in plural.";
            word = "rabbits";
        }    
        else
        {
            cout << "A tool you use for cleaning, with a purpose of sucking up dust.";
            word = "vacuum";
        }
    }
    else if (level == "veryHard1" || level == "5")
    {
        if(fateChooser == 1)
        {
            cout << "A vegetable, having thick green or purple leaves surrounding a spherical heart or head of leaves.";
            word = "cabbage";
        }    
        else
        {
            cout << "Addicts who spends their time in casinos, betting money and playiing games, trying to win more money. More often or not, they rob themselves and end up on the streets. Word is in singular.";
            word = "gambler";
        }
    }
}

void guessChecker() //Checks if your word is the needed word
{
    while(health > 0 || gameEnded != false)
    { 
        cout << "Enter what you think the word is: ";
        string guess;
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
                    cout << endl;
			        if(health <= 0)//dying part
                    {
                        health = 0;
                        cout << "You have 0 health left. You've lost." << endl;
                        gameEnded = true;
                        break;
                    }
                    else
                    {
			            cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    }
                }
                else if (level == "normal" || level == "2")
                {
                    health -= 2;
                    cout << guess << " is not the correct word." << endl;
                    cout << endl;
			        if(health <= 0)//dying part
                    {
                        health = 0;
                        cout << "You have 0 health left. You've lost." << endl;
                        gameEnded = true;
                        break;
                    }
                    else
                    {
			            cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    }
                    
                }
                else if (level == "hard" || level == "3")
                {
                    health -= 3;
                    cout << guess << " is not the correct word." << endl;
                    cout << endl;
			        if(health <= 0)//dying part
                    {
                        health = 0;
                        cout << "You have 0 health left. You've lost." << endl;
                        gameEnded = true;
                        break;
                    }
                    else
                    {
			            cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    }
                   
                }
                else if (level == "veryHard" || level == "4")
                {
                    health -= 3.5;
                    cout << guess << " is not the correct word." << endl;
                    cout << endl;
                    if(health <= 0)//dying part
                    {
                        health = 0;
                        cout << "You have 0 health left. You've lost." << endl;
                        gameEnded = true;
                        break;
                    }
                    else
                    {
			            cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    }
                    
                }
                else if (level == "veryHard1" || level == "5")
                {
                    health -= 4;
                    cout << guess << " is not the correct word." << endl;
                    cout << endl;
                    if(health <= 0)//dying part
                    {
                        health = 0;
                        cout << "You have 0 health left. You've lost." << endl;
                        gameEnded = true;
                        break;
                    }
                    else
                    {
			            cout << "You have " << health <<  " health left. Feel threatened." << endl; 
                    }
                    
                }
		    }
    }
}