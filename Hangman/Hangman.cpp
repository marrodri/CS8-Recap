//
// Created by Marthel Rodriguez on 9/18/23.
//



#include "Hangman.h"

Hangman::Hangman(){
    std::ifstream fin;
    openFile(fin, "idioms.txt");
    std::string next;
    while(getline(fin, next)){
        phrases.push_back(next);
    }
    //build the board
    for(int i =0; i< MAX_NUM_OF_ATTEMPTS; i++){
        board.push_back(gHangmanPics[i]);
    }
    //pick random word
    selectedPhrase = getRandomPhrase();

    //set attempt
    for(char letter: selectedPhrase){
        if(isalpha(letter)){
            currentAttempt.push_back('_');
        }
        else{
            currentAttempt.push_back(letter);
        }
    }
    std::cout<< "selectedPhrase: " << selectedPhrase <<"\n";


}


std::string Hangman::getTitle() {
    return "Hangman";
}

void Hangman::start() {
    //build the logic for running hangman
    std::cout << "building the logic of hangman\n";
    while(!hangmanLogic.hasPlayerWon() && hangmanLogic.isGameEnded()){
        printCurrentBoard(hangmanLogic.getCurrentAttempt());

    }
}

std::string Hangman::getRandomPhrase() {
    return phrases[(rand() % phrases.size()) - 1];
}


void Hangman::printCurrentBoard(int index){
    std::cout << board[index] <<"\n";
}

char Hangman::getUserCharInput() {
    char in;
    std::cin >> in;
    return in;
}

void Hangman::printCurrentHangmanPic() {
    std::cout << gHangmanPics[hangmanLogic.getCurrentAttempt()-1];
}

void Hangman::printCurrentGuess() {
    std::cout<< "hidden Attempt: ";
    for(char letter: hangmanLogic.getCurrentGuess()){
        std::cout << letter << " ";
    }
}


