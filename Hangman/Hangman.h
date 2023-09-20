//
// Created by Marthel Rodriguez on 9/18/23.
//

#ifndef GAMES_CS3A_REVIEW_HANGMAN_H
#define GAMES_CS3A_REVIEW_HANGMAN_H

#include "../Interfaces/GameInterface.h"
#include <array>
#include <string>
#include "../CustFunctions/FileIoFunctions.h"
#define MAX_NUM_OF_ATTEMPTS 7



class Hangman : public GameInterface {
private:
    const std::array<std::string,7> gHangmanPics = {"+---+\n|   |\n|\n|\n|\n|\n=========\n", "+---+\n|   |\nO   |\n|\n|\n|\n=========\n", "+---+\n|   |\nO   |\n|   |\n|\n|\n=========\n", "+---+\n|   |\nO   |\n/|   |\n|\n|\n=========\n", "+---+\n|   |\nO   |\n/|\\  |\n|\n|\n=========\n", "+---+\n|   |\nO   |\n/|\\  |\n/    |\n|\n=========\n", "+---+\n|   |\nO   |\n/|\\  |\n/ \\  |\n|\n=========\n"};
    std::vector<std::string> phrases;
    std::string selectedPhrase;
    std::vector<std::string> board;

    int numOfAttempts;
    std::vector<char> currentAttempt;
    std::vector<char> usedLetters;
    //convert it to an array.
    void printCurrentBoard(int index);
public:
    Hangman();
    Hangman(std::vector<std::string> &phrases);
    std::string getTitle();
    void start();
    void phrasePicker();
    void updateBoard();
    char getUserInput();
};

#endif //GAMES_CS3A_REVIEW_HANGMAN_H
