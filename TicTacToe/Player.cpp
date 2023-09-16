//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "Player.h"

Player::Player() : Letter()
{

}

Player::Player(const Letter& mark) : Letter(mark.getLetter())
{

}

int Player::choose()
{
    int choice;
    std::cin >> choice;
    return choice;
}