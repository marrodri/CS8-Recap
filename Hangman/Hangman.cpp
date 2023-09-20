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
    selectedPhrase = phrases[(rand() % phrases.size()) - 1];

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

    std::cout<< "hidden Attempt: ";
    for(char letter: currentAttempt){
        std::cout << letter << " ";
    }

}


std::string Hangman::getTitle() {
    return "Hangman";
}

void Hangman::start() {
    //build the logic for running hangman
    std::cout << "building the logic of hangman\n";
}

void Hangman::phrasePicker() {
}

void Hangman::updateBoard() {

}

void Hangman::printCurrentBoard(int index){
    std::cout << board[index] <<"\n";
}

char Hangman::getCharInput(){}
