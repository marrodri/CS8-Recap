//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "App.h"
#include "StupidGame/StupidGame.h"
#include "TicTacToe/TicTacToe.h"
#include "UniqueAdventure/UniqueAdventure.h"

App::App() {
}

void App::run() {
    char in = ' ';
    while(in != 'n'){
        output("Hi there, please select an option\n");
        output("1) "+stupidGame.getTitle()+"\n");
        output("2) "+ticTacToe.getTitle()+"\n");
        output("3) "+uniqueAdventure.getTitle()+"\n");
        output("n) exit program\n1");
        output("User input: ");
        in = getCharInput();
        if(in == '1'){
            output("================Stupid Game: START=======================\n");
            output("=========================================================\n");
            stupidGame.start();
            output("================Stupid Game: EXITING=====================\n");
            output("=========================================================\n");
        }
        if(in == '2'){
            output("=========Tic Tac Toe selected: START=====================\n");
            output("=========================================================\n");
            ticTacToe.start();
            output("=========Tic Tac Toe Adventure: EXITING==================\n");
            output("=========================================================\n");
        }
        if(in == '3'){
            output("=========Unique Adventure selected: START================\n");
            output("=========================================================\n");
            uniqueAdventure.start();
            output("=========Unique Adventure selected: EXITING===============\n");
            output("=========================================================\n");
        }
    }
    output("Exiting game, thank you for playing :)");

}

void App::exit() {

}

