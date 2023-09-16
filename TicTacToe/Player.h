//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_PLAYER_H
#define GAMES_CS3A_REVIEW_PLAYER_H


#include "Letter.h"
#include <iostream>
class Player : public Letter
{

public:
    Player(const Letter& mark);
    Player();
    int choose();


};



#endif //GAMES_CS3A_REVIEW_PLAYER_H
