//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "Letter.h"

/*constructors*/
Letter::Letter(char letter){
    this->letter = letter;
}

Letter::Letter(){}


/*getters and setters*/
char Letter::getLetter() const{
    return this->letter;
}

void Letter::setLetter(char letter){
    this->letter = letter;
}

/**operators*/
std::ostream &operator<<(std::ostream &os, const Letter &letter){
    os << letter.letter;
    return os;
}
std::istream & operator >> (std::istream & in, Letter &player){
    //why is this needed?
}