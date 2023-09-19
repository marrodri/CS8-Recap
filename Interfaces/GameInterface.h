//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_GAMEINTERFACE_H
#define GAMES_CS3A_REVIEW_GAMEINTERFACE_H

#include <string>
#include <iostream>
class GameInterface{
public:
    virtual std::string getTitle()=0;
    virtual void start()=0;
};

#endif //GAMES_CS3A_REVIEW_GAMEINTERFACE_H


