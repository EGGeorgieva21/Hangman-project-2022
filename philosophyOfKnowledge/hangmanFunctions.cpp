#include <iostream>
#include "main.h"
#include <iomanip>
#include <string>
using namespace std;

//Prints the game title in big letters
void printHangman()
{
    cout << setw(10) << "   _ _                 _ _" << endl;
    cout << setw(10) << "  | | \\               | | \\" << endl;
    cout << setw(10) << "  | | |               | | |" << endl;
    cout << setw(10) << "  | | |               | | |" << endl;
    cout << setw(10) << "  | | |               | | |     ________._    _ _  ___________ _     ____________ _ _    _ _ _  _ _ _  _ _       __________    _ _  __________ _" << endl;
    cout << setw(10) << "  | | |               | | |    / _____  | \\  | | \\/ /_______  | \\   / /          \\ \\ \\  | | / /| | / /| | \\     / _____  | \\  | | \\/ _______  | \\" << endl;
    cout << setw(10) << "  | |-----------------| | |   / / /   | | |  | | / /        | | |  / /           | | |  | |/ / | |/ / | | |    / /     | | |  | | / /       | | |" << endl;
    cout << setw(10) << "  | |-----------------| | |  /_/_/    | | |  | |/ /         | | |  | |           | | |  | | /  | | /  | | |   /_/      | | |  | |/ /        | | |" << endl;
    cout << setw(10) << "  | | |               | | |           | | |  | | /          | | |  \\ \\           | | |  | |/|  | |/|  | | |            | | |  | | /         | | |" << endl;
    cout << setw(10) << "  | | |               | | |    _______| | |  | |/|          | | |   \\_\\_________/| | |  | | |  | | |  | | |   _________| | |  | |/|         | | |" << endl;
    cout << setw(10) << "  | | |               | | |   / /     | | |  | | |          | | |   _            | | |  | | |  | | |  | | |  / /       | | |  | | |         | | |" << endl;
    cout << setw(10) << "  | | |               | | |  | |      | | |  | | |          | | |  \\ \\           / / /  | | |  | | |  | | |  | |       | | |  | | |         | | |" << endl;
    cout << setw(10) << "  |_|_/               |_|_/   \\_\\_____|_|_/  |_|_/          |_|_/   \\ \\_________/ / /   |_|_/  |_|_/  |_|_/  \\_\\_______|_|_/  |_|_/         |_|_/" << endl;
    cout << setw(10) << "                                                                     \\___________/_/" << endl;
}

//Prints the little human
void printHuman() 
{
    cout << "  ____________________" << endl;
    cout << "  |__________________|" << endl;
    cout << "  ||        |" << endl;
    cout << "  ||       ( )" << endl;
    cout << "  ||      __|__" << endl;
    cout << "  ||     /|   |\\" << endl;
    cout << "  ||    / |   | \\" << endl;
    cout << "  ||    | |___| |" << endl;
    cout << "  ||    ( |   | )" << endl;
    cout << "  ||      |   |" << endl;
    cout << "  ||      |   |" << endl;
    cout << "  ||      |   |" << endl;
    cout << "  ||      /   \\" << endl;
    cout << "  ||__.__________.____" << endl;
    cout << "  |                  |" << endl;
    cout << "  |                  |" << endl;
    cout << "  |__________________|" << endl;
}

//Prints the level menu 
void printMenuLevel()
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

//Prints the rules
void printRules() 
{ 
    cout << "Rules: When asked start, echo start. otherwise, death. Words must be lowercase. If you want to end the game... perhaps a 0 would do... ? " << endl;
	cout << "So, start? ";
	cin >> start;
}

//The part of the code when you type "start" to start the game
void startTheGame() 
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

//Choose your level
void getLevel() 
{
    cout << "Enter your level (1 ~ 5): ";
    cin >> level;
    cout << endl;

    while (level < 1 && level > 5) 
    {
        cout << "You have to enter a level between 1 and 5: ";
        cin >> level;
    }
}

//Choose your fate
void getFate()
{
    cout << "Choose one your fate. 1 or 2? - ";
    cin >> fateChooser;
    cout << endl;

    while (fateChooser != 1 && fateChooser != 2)
    {
        cout << "You have to enter either 1 or 2: ";
        cin >> fateChooser;
        cout << endl;
    }
   
}

//Assigns a the word to the level
void automaticLevelAssignment()
{
    switch (level)
    {
    case 1:

        if(fateChooser == 1)
        {
            cout << "Your hint is: round, smooth. Monkeys all around the world worship it. They run around and kick it... It even has its own sport dedicated to it. " << endl;
            word = "ball";
        }    
        else
        {
            cout << "Your hint is: A very, very small human. " << endl;
            word = "baby";
        }
        
        break;

    case 2:

        if(fateChooser == 1)
        {
            cout << "Your hint is: An item often used in schools and other professional fascilities, with the intention to torture its readers. " << endl;
            cout << "A black marker is used to add information to it. It usually hangs on a wall, where its knowledge can be displayed to all who dare look. ";
            word =  "board";
        }    
        else
        {
            cout <<"Your hint is: This is a measurement for bread. Good luck. And no, the word is not piece. ";
            word = "slice";
        }
        break;

    case 3:

        if(fateChooser == 1)
        {
            cout << "What button always comes before the decline button on a pop-up asking for some sort of permission? ";
            word = "accept";
        }    
        else
        {
            cout<< "A fancy word for cloth. ";
            word = "fabric"; 
        }
        break;

    case 4:

        if(fateChooser == 1)
        {
            cout << "Long eared angels. Fluffy as a cloud, these little cottonballs love jumping, carrots, and are a great house pet. Write the word in plural. ";
            word = "rabbits";
        }    
        else
        {
            cout << "A tool you use for cleaning, with a purpose of sucking up dust. ";
            word = "vacuum";
        }
        break;

    case 5:

        if(fateChooser == 1)
        {
            cout << "A vegetable, having thick green or purple leaves surrounding a spherical heart or head of leaves. ";
            word = "cabbage";
        }    
        else
        {
            cout << "Addicts who spends their time in casinos, betting money and playiing games, trying to win more money. More often or not, they rob themselves and end up on the streets. Word is in singular. ";
            word = "gambler";
        }
        break;
    }
}

//Checks if your word is the needed word
void guessChecker()
{
    int damage = level + 0.5;
    string guess;

    while(health > 0)
    { 
        cout << "Enter what you think the word is: ";
        cin >> guess;
        cout << endl;
        
            if(guess == word)
            {
                cout << "Grats, ya won" << endl;
                cout << "You guessed: " << guess << endl; 
                cout << "And the word was: " << word << endl;
                break;
            }
            
            //losing hp part 
		    else 
		    {
                health -= damage;
                cout << guess << " is not a the correct word." << endl;
                cout << endl;

                    //dying part
			        if(health <= 0)
                    {
                        cout << "You have 0 health left. You've lost." << endl;
                        break;
                    }
                    else
                    {
			            cout << "You have " << health <<  " health left. Feel threatened." << endl;
                        cout << endl;
                    }
		    }
    }
}