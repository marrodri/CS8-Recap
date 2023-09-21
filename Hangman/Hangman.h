//
// Created by Marthel Rodriguez on 9/18/23.
//

#ifndef GAMES_CS3A_REVIEW_HANGMAN_H
#define GAMES_CS3A_REVIEW_HANGMAN_H

#include "../Interfaces/GameInterface.h"
#include <array>
#include <string>
#include "../CustFunctions/FileIoFunctions.h"
#include "HangmanLogic.h"





class Hangman : public GameInterface {
private:
    const std::array<std::string,7> gHangmanPics = {"+---+\n|   |\n|\n|\n|\n|\n=========\n", "+---+\n|   |\nO   |\n|\n|\n|\n=========\n", "+---+\n|   |\nO   |\n|   |\n|\n|\n=========\n", "+---+\n|   |\nO   |\n/|   |\n|\n|\n=========\n", "+---+\n|   |\nO   |\n/|\\  |\n|\n|\n=========\n", "+---+\n|   |\nO   |\n/|\\  |\n/    |\n|\n=========\n", "+---+\n|   |\nO   |\n/|\\  |\n/ \\  |\n|\n=========\n"};
    std::vector<std::string> phrases;
    std::string answerPhrase;
    std::vector<std::string> board;
    HangmanLogic hangmanLogic;


    //convert it to an array.
    void printCurrentBoard(int index);
public:
    Hangman();
    Hangman(std::vector<std::string> &phrases);
    std::string getTitle();
    void start();
    std::string getRandomPhrase();
    char getUserCharInput();
    //print the current attempt of the hangman board.
    void printCurrentHangmanPic();
    void printCurrentGuess();
};

#endif //GAMES_CS3A_REVIEW_HANGMAN_H
