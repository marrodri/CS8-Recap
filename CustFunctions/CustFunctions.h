//
// Created by Marthel Rodriguez on 9/18/23.
//

#ifndef GAMES_CS3A_REVIEW_CUSTFUNCTIONS_H
#define GAMES_CS3A_REVIEW_CUSTFUNCTIONS_H

#include <iostream>
#include <fstream>

//this is a class with a set of custom functions.
//Its purpose is to be used across the whole app with the goal
//of saving repetitive code

    /*IO functions*/
    void output(std::string message);
    char getCharInput();
    std::string getStringInput();
    int getIntInput();

    /*file functions*/
    bool openFile(std::ifstream& fin, std::string filename);


    /*random functions from range*/
    int getRandomIntFromRange(int min, int max);



#endif //GAMES_CS3A_REVIEW_CUSTFUNCTIONS_H
