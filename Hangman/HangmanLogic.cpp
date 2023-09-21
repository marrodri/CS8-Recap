//
// Created by Marthel Rodriguez on 9/20/23.
//

#include "HangmanLogic.h"
#define MAX_NUM_OF_ATTEMPTS 7

HangmanLogic::HangmanLogic():currentAttempt(0) {

}


void HangmanLogic::updateAttempt(std::string &answerPhrase, char guess) {
    bool characterFounded = false;
    if(!isValidLetter(this->usedLetters, guess)){
        std::cout<< "This letter has been used, please select another letter\n";
        return ;
    }
    //update the current guess when a character is founded in the answer.
    for(int i =0; i <answerPhrase.size();i++){
        if(answerPhrase[i] == guess){
            characterFounded = true;
            currentGuess[i] = guess;
        }
    }
    if(!characterFounded){
        currentAttempt++;
    }
}


bool HangmanLogic::isGameEnded() {
    return (currentAttempt == MAX_NUM_OF_ATTEMPTS);
}

bool HangmanLogic::isValidLetter(char guess) {
    for(char letter:usedLetters){
        if(letter == guess){
            return false;
        }
    }
    return false;
}

bool HangmanLogic::hasPlayerWon() {
    for(char letter:currentGuess){
        if(letter == '_'){
            return false;
        }
    }
    return true;
}

int HangmanLogic::getCurrentAttempt() {
    return currentAttempt;
}

std::vector<char> HangmanLogic::getUsedLetters(){
    return this->usedLetters;
}

std::vector<char> HangmanLogic::getCurrentGuess() {
    return this->currentGuess;
}
