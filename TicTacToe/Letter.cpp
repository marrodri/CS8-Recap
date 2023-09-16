//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "Letter.h"

Letter::Letter()
{

}
Letter::Letter(char letter) : letter(letter)
{
}
char Letter::getLetter() const
{
    return letter;
}

void Letter::setLetter(char letter)
{
    Letter::letter = letter;
}

std::ostream &operator<<(std::ostream &os, const Letter &letter)
{
    os <<  letter.letter;
    return os;
}

std::istream & operator >> (std::istream & in, Letter &player)
{
    in >> player.letter;
    return in;
}