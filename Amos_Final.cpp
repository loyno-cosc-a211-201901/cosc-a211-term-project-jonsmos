/* Program namespace: HANGMAN
Purpose: Simple Game
Author: [Jon_paul Amos]
Date Last Modified: [12-9-2019] */

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>


using namespace std;

int main()
{
    // Where we start
    char start{};

    cout << " HANGMAN 2 "<< endl;
    cout << "____________________ "<< endl;
    cout << "|              }     "<< endl;
    cout << "|              o     "<< endl;
    cout << "|              |     "<< endl;
    cout << "|            / | \\  "<< endl;
    cout << "|           /  |  \\ "<< endl;
    cout << "|            /   \\  "<< endl;
    cout << "|           /     \\ "<< endl;
    cout << "|                    "<< endl;
    cout << "|___________________ "<< endl;
cout << "\nHello! Press a key to start playing!\n";
cin >> start;

// GAME
// Set variables used thorughout game
const string text= "/Users/bethanygetachew/Documents/GitHub/cosc-a211-term-project-jonsmos/build/Final.txt"; //opens up the text file
int tries(6); // number of tries by user
char guess;
bool correctGuess = false;
char oldGuesses[7];
oldGuesses[0]= '\0';
for (int i =1; i<6; i++)
{
    oldGuesses[i] = '-';
}
oldGuesses[6] = '\0';
string word;
string wordList[99];


//Get random number
srand(time(NULL)); // creates a random number
ifstream randomWord; 
randomWord.open(text); // reads in the file (words)

for (int i = 0; i < 99; i++)
{
randomWord >> wordList[i]; // filling the array
}

int randomNum = rand() % 100; // returns a random number
word = wordList[randomNum];
randomWord.close();

//make the word a mystery
string unknownWord(word.length(), '_');






while (tries >= 0)
{
    // reset our bool
    correctGuess = false;
    // display info related to the word
cout << "You are guessing:\n";
cout << unknownWord << endl;
cout << "\n There are " << unknownWord.length() << " letters in the word\n\n";
cout << "You have " << tries << " guesses left\n";
if(oldGuesses[0]== '\0')
{
    cout << endl;
}
else
{
    cout << "You have guessed: "<< oldGuesses << endl;
}

cout << "\nGuess a letter: ";
cin >> guess;

// check the guess
for(int i = 0; i < unknownWord.length(); i++) // for the length of the word
{
    
    if(word[i] == guess) // check if the word have guess in it
    {
        unknownWord[i] = guess;
        cout << "Good job " << guess << " is one of the letters!"<< endl;
        correctGuess = true;
    }
}
if (word == unknownWord)
{
    cout << "\nYou've gotten the word right"  << endl;
    break;
}
if (correctGuess == false)
{
    tries--;
    cout<< "Sorry, " << guess << " is not in the word"<< endl;
}


    switch(tries) // open up a switch statement for the tries
    {
    case 6: // user has 6 letters 
    cout << "____________________ "<< endl;
    cout << "|              )     "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|___________________ "<< endl;
    {

break;
    }
    case 5: // user has 5 more letters left
    {
    cout << "____________________ "<< endl;
    cout << "|              )     "<< endl;
    cout << "|              o     "<< endl;
    cout << "|                     "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|___________________ "<< endl;
    if (correctGuess == false)
    {
        oldGuesses[0] = guess;
    }
        break;
    }
    case 4: //user has 4 more letters left
    {
    cout << "____________________ "<< endl;
    cout << "|              )     "<< endl;
    cout << "|              o     "<< endl;
    cout << "|              |     "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|___________________ "<< endl;
       if (correctGuess == false)
    {
        oldGuesses[1] = guess;
    }
        break;
    }
    case 3: // user has three more letters left
    {
    cout << "____________________ "<< endl;
    cout << "|              )     "<< endl;
    cout << "|              o     "<< endl;
    cout << "|              |     "<< endl;
    cout << "|            / |     "<< endl;
    cout << "|           /        "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|___________________ "<< endl;
       if (correctGuess == false)
    {
        oldGuesses[2] = guess;
    }
        break;
    }
    case 2: // user has two more letters left
    {
    cout << "____________________ "<< endl;
    cout << "|              )     "<< endl;
    cout << "|              o     "<< endl;
    cout << "|              |     "<< endl;
    cout << "|            / | \\  "<< endl;
    cout << "|           /  |  \\ "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|                    "<< endl;
    cout << "|___________________ "<< endl;
       if (correctGuess == false)
    {
        oldGuesses[3] = guess;
    }
        break;
    }
    case 1: // user has one more letter left
    {
    cout << "____________________ "<< endl;
    cout << "|              )     "<< endl;
    cout << "|              o     "<< endl;
    cout << "|              |     "<< endl;
    cout << "|            / | \\  "<< endl;
    cout << "|           /  |  \\ "<< endl;
    cout << "|            /       "<< endl;
    cout << "|           /        "<< endl;
    cout << "|                    "<< endl;
    cout << "|___________________ "<< endl;
       if (correctGuess == false)
    {
        oldGuesses[4] = guess;
    }
    break;
    }
    case 0: // user has lost the game
    {
    cout << "____________________ "<< endl;
    cout << "|              )     "<< endl;
    cout << "|              o     "<< endl;
    cout << "|              |     "<< endl;
    cout << "|            / | \\  "<< endl;
    cout << "|           /  |  \\ "<< endl;
    cout << "|            /   \\  "<< endl;
    cout << "|           /     \\ "<< endl;
    cout << "|                    "<< endl;
    cout << "|___________________ "<< endl;
    cout << "\n GAME OVER"<< endl;
    break;
    }
    default:
    cout << "Error has occurred\n\n";
}
}
return 0;

}  
