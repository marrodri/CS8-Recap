//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_STUPIDGAME_H
#define GAMES_CS3A_REVIEW_STUPIDGAME_H

#include <iostream>
#include "../CustFunctions/CustFunctions.h"
#include "../Interfaces/GameInterface.h"
#include "Layer.h"
#define MAX_LAYER 5

class StupidGame : public  GameInterface{
private:
    Layer layers[MAX_LAYER];
    int currentLayer =0;
public:
    StupidGame();
    void start();
    std::string getTitle();
    void stop();
    void youWon();

    void intro();
    void run();


};


#endif //GAMES_CS3A_REVIEW_STUPIDGAME_H
