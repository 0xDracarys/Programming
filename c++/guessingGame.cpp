#include <iostream>
using namespace std;

int main(){

    int secretNumber = 10;
    int guessValue;
    int guessCount = 0;
    int guessLimit = 5;
    bool outOfGuesses = false;

    while(secretNumber != guessValue && !outOfGuesses){
        if(guessCount < guessLimit){
        cout << " Enter Guess : ";
        cin >> guessValue;
        guessCount++;
        }
        else {
        outOfGuesses = true;
    }
    }
    if(outOfGuesses){
        cout << "You loose";
    }
    else{
        cout << " You win ";
    }
    


   return 0;
    }