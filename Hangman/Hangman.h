//
// Created by Marthel Rodriguez on 9/18/23.
//

#ifndef GAMES_CS3A_REVIEW_HANGMAN_H
#define GAMES_CS3A_REVIEW_HANGMAN_H

#include "../Interfaces/GameInterface.h"
class Hangman : public GameInterface {
public:
    std::string getTitle();
    void start();
};


#endif //GAMES_CS3A_REVIEW_HANGMAN_H
