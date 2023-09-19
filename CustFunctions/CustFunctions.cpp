//
// Created by Marthel Rodriguez on 9/18/23.
//

#include "CustFunctions.h"

//print message to console.
void output(std::string message) {
    std::cout << message;
}

//get
char getCharInput() {
    char in;
    std::cin >> in;
    return in;
}

std::string getStringInput() {
    //check previous code for saving the input.
    return std::string();
}

int getRandomIntFromRange(int min, int max) {
    //rand (high -low + 1) +low
    return (rand() % (36-5+1) + 5);
}


bool openFile(std::ifstream& fin, std::string filename){
    fin.open(filename);
    return !fin.fail();
}
