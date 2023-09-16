#include <iostream>

#include "StupidGame/StupidGame.h"
#include "TicTacToe/TicTacToe.h"
#include "UniqueAdventure/Game.h"

/**
 * TicTacToe mainGame
 * */
//int main()
//{
////    Player p;
////    std::cin >> p;
//    TicTacToe game;
//    game.start();
//    return 0;
//}

/***
 * Choose your own adventure main.
 * */
int main() {

    char newGame = ' ';
    srand(time(0));

    while(newGame != 'n'){
        Game game;
        game.runGame();
        std::cout << "Start a new game?(y/n)" << std::endl;
        std::cin >> newGame;
    }

    return 0;
}