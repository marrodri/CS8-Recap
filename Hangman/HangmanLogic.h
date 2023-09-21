//
// Created by Marthel Rodriguez on 9/20/23.
//

#ifndef GAMES_CS3A_REVIEW_HANGMANLOGIC_H
#define GAMES_CS3A_REVIEW_HANGMANLOGIC_H

#include <string>
#include <array>
#include <iostream>
class HangmanLogic {
    int currentAttempt;
    std::vector<char> currentGuess;
    std::vector<char> usedLetters;
public:
    HangmanLogic();
    // update the attempt if its good or not. if not, increment the attempt and
    //show the new hangman board.
    void updateAttempt(std::string &answerPhrase, char guess);
    // when the user has reached the max amount of attempts, stop and say 'game over'
    bool isGameEnded();
    // check the letter is not used yet.
    bool isValidLetter(char guess);
    // check if the currentAttempt has all the characters displayed and
    // there's no '_' left.
    bool hasPlayerWon();

    /**
     * getters
     * */
     int getCurrentAttempt();
     std::vector<char> getUsedLetters();
     std::vector<char> getCurrentGuess();
};


#endif //GAMES_CS3A_REVIEW_HANGMANLOGIC_H
