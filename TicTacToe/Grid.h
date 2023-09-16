//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_GRID_H
#define GAMES_CS3A_REVIEW_GRID_H

#include "Letter.h"
#include <vector>
#include <iostream>
class Grid
{
private:
    std::vector<std::vector<Letter>> grid;

public:
    Grid();
    std::vector<Letter>& operator[](unsigned int index);
    const std::vector<Letter>& operator[](unsigned int index) const;
    friend std::ostream& operator<<(std::ostream& out, const Grid& grid);
    void set(int space, const Letter& letter);
};


#endif //GAMES_CS3A_REVIEW_GRID_H
