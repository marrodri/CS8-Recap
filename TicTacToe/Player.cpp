//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "Player.h"

//:Letter(mark.getLetter) is almost equivalent to this->Letter.
Player::Player(const Letter &mark) :Letter(mark.getLetter()){
}

Player::Player() {

}

//this looks good.
int Player::choose() {
    int choice;
    std::cin >> choice;
    return choice;
}

