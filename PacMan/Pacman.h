//
// Created by Marthel Rodriguez on 9/19/23.
//

#ifndef GAMES_CS3A_REVIEW_PACMAN_H
#define GAMES_CS3A_REVIEW_PACMAN_H

#include "../Interfaces/GameInterface.h"
class Pacman : public GameInterface{
public:
    std::string getTitle() override;

    void start() override;
};


#endif //GAMES_CS3A_REVIEW_PACMAN_H
