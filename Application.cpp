//
// Created by Marthel Rodriguez on 9/19/23.
//

#include "Application.h"



void Application::displayMenu()
{
    std::cout << "Hi, please make a selection:\n";
//    GameInterface *g: games)
    char num = '1';
    for(int i=0; i<games.size(); i++){
        std::cout << "Game "<<num<<") "<< games[i]->getTitle() << std::endl;
        num++;
    }
}



void Application::addGame(GameInterface &game){
    games.push_back(&game);
}

int Application::getUserInput() {
    int index;
    std::cout <<"Select the game:";
    std::cin >> index;
    return index;
}

void Application::run() {
    int index=0;
    displayMenu();
    index = getUserInput();
    startGame(index);
}

void Application::startGame(int index) {
    games[index-1]->start();
}
