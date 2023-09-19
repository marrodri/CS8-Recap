//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_TICTACTOE_H
#define GAMES_CS3A_REVIEW_TICTACTOE_H

#include "Grid.h"
#include "GameLogic.h"
#include "Player.h"
#include <iostream>
#include "../Interfaces/GameInterface.h"
class TicTacToe :public  GameInterface{
    //Goes the main app right here!!!
private:
    Grid grid;
    GameLogic gameLogic;
    Player player1, player2;
public:
    TicTacToe();
    void start()override;
    bool end();

    std::string getTitle() override;
    bool isWinner(Player player);
    void displayWinner(Player player);
    void getPlayerMarks();
};

#endif //GAMES_CS3A_REVIEW_TICTACTOE_H
