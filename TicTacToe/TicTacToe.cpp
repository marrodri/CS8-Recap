//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "TicTacToe.h"
TicTacToe::TicTacToe(){}


void TicTacToe::start() {
    //logic for running the game

    bool player1Turn = true;
    getPlayerMarks();
    int space;
    while(!end() && !isWinner(player1) && !isWinner(player2) ){
        space = -1;
        std::cout<< grid;
        if(player1Turn){
            while(!gameLogic.isValid(grid, space)){
                std::cout<< "player 1: please select a space: ";
                space = player1.choose();
                if(!gameLogic.isValid(grid, space)){
                    std::cout << "Space is invalid, please select another one\n";
                }
            }
            this->grid.set(space, player1.getLetter());
        }
        else{
            while(!gameLogic.isValid(grid, space)){
                std::cout<< "player 2: please select a space: ";
                space = player2.choose();
                if(!gameLogic.isValid(grid, space)){
                    std::cout << "Space is invalid, please select another one\n";
                }
            }
            this->grid.set(space, player2.getLetter());
        }
        player1Turn = !player1Turn;
    }
    if (isWinner(player1)){
        displayWinner(player1);
    }
    else if (isWinner(player2)){
        displayWinner(player2);
    }
    else{
        std::cout <<"DRAW. nobody wins. Tough luck!\n";
    }
}

bool TicTacToe::end() {
    return gameLogic.isFilled(grid);
}

//done
std::string TicTacToe::getTitle() {
    return "TicTacToe";
}

//done.
bool TicTacToe::isWinner(Player player) {
    return (gameLogic.isDiagonal(this->grid, player.getLetter()) ||
            gameLogic.isVertical(this->grid, player.getLetter())||
            gameLogic.isHorizontal(this->grid, player.getLetter()));

}

//done.
void TicTacToe::displayWinner(Player player) {
    std::cout << "Player " << player.getLetter() << " wins!!!\n";
}

void TicTacToe::getPlayerMarks() {
    char mark='0';
    while(isdigit(mark)){
        std::cout << "Player 1 select your mark: ";
        std::cin >>mark;
        if(isdigit(mark)){
            std::cout << "That mark is not usable, please select a valid one\n";
        }
        else{
            player1.setLetter(mark);
        }
    }
    mark = '0';
    while(mark == player1.getLetter() || isdigit(mark)){
        std::cout << "Player 2 select your mark: ";
        std::cin >>mark;
        if(mark == player1.getLetter() || isdigit(mark)){
            std::cout << "That mark is not usable, please select a valid one\n";
        }
        else{
        player2.setLetter(mark);
        }
    }
}
