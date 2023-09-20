//
// Created by Marthel Rodriguez on 9/19/23.
//

#ifndef GAMES_CS3A_REVIEW_APPLICATION_H
#define GAMES_CS3A_REVIEW_APPLICATION_H
#include <iostream>
#include "Interfaces/GameInterface.h"
class Application {
private:
    std::vector<GameInterface*> games;
    int getUserInput();
    void startGame(int index);
public:
    void displayMenu();
    void addGame(GameInterface &game);
    void run();

};


#endif //GAMES_CS3A_REVIEW_APPLICATION_H
