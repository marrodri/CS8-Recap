//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_LETTER_H
#define GAMES_CS3A_REVIEW_LETTER_H


#include <iostream>

class Letter
{
private:
    char letter;
public:
    Letter(char letter);
    Letter();
    char getLetter() const;

    void setLetter(char letter);

    friend std::ostream &operator<<(std::ostream &os, const Letter &letter);
    friend std::istream & operator >> (std::istream & in, Letter &player);
};


#endif //GAMES_CS3A_REVIEW_LETTER_H
