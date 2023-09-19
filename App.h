//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_APP_H
#define GAMES_CS3A_REVIEW_APP_H
#include "StupidGame/StupidGame.h"
#include "TicTacToe/TicTacToe.h"
#include "UniqueAdventure/UniqueAdventure.h"
#include "Interfaces/GameInterface.h"
class App {
private:
    GameInterface* games;
    StupidGame stupidGame;
    UniqueAdventure uniqueAdventure;
    TicTacToe ticTacToe;
public:
    App();

    void run();
    void exit();

};


#endif //GAMES_CS3A_REVIEW_APP_H
