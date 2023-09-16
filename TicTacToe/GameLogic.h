//
// Created by Marthel Rodriguez on 9/16/23.
//

#ifndef GAMES_CS3A_REVIEW_GAMELOGIC_H
#define GAMES_CS3A_REVIEW_GAMELOGIC_H

#include "Grid.h"

class GameLogic {
public:
    bool isFilled(const Grid& grid);
    bool isHorizontal(const Grid& grid, const Letter& letter);
    bool isVertical(const Grid& grid, const Letter& letter);
    bool isDiagonal(const Grid& grid, const Letter& letter);
    bool isValid(const Grid& grid, int space);

};


#endif //GAMES_CS3A_REVIEW_GAMELOGIC_H
