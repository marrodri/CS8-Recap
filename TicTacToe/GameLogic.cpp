//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "GameLogic.h"

//checks grid if there's no more spaces
bool GameLogic::isFilled(const Grid &grid) {
    char num = '1';
    for(int i = 0; i < 3;i++){
        for(int j=0; j<3;j++){
            //when grid has a number.
            if(num == grid[i][j].getLetter()){
                return false;
            }
            num++;
        }
    }
    return true;
}

//checks grid for a horizontal win
bool GameLogic::isHorizontal(const Grid &grid, const Letter &letter) {
    for(int i = 0; i < 3;i++){
        if(grid[i][0].getLetter()==letter.getLetter()
           &&grid[i][1].getLetter()==letter.getLetter()
           &&grid[i][2].getLetter()==letter.getLetter()){
            return true;
        }
    }
    return false;
}

//checks grid for a vertical win
bool GameLogic::isVertical(const Grid &grid, const Letter &letter) {
    for(int i = 0; i < 3;i++){
        if(grid[0][i].getLetter()==letter.getLetter()
        &&grid[1][i].getLetter()==letter.getLetter()
        &&grid[2][i].getLetter()==letter.getLetter())
        return true;
    }
    return false;
}

//checks grid for a diagonal win
bool GameLogic::isDiagonal(const Grid &grid, const Letter &letter) {
    if(grid[0][0].getLetter() == letter.getLetter()
    && grid[1][1].getLetter() == letter.getLetter()
    && grid[2][2].getLetter() == letter.getLetter()){
        return true;
    }
    if(grid[0][2].getLetter() == letter.getLetter()
    && grid[1][1].getLetter() == letter.getLetter()
    && grid[2][0].getLetter() == letter.getLetter()){
        return true;
    }
    return false;
}

/*checks if selected space is a valid number or it's not taken.*/
bool GameLogic::isValid(const Grid &grid, int space) {
    return ((space >= 1 && space <= 9) && isdigit(grid[(space-1)/3][(space-1)%3].getLetter()));
//    if (space < 1 || space > 9){
//        return false;
//    }
//    if(!isdigit(grid[(space-1)/3][(space-1)%3].getLetter())){
//        return false;
//    }
//    return true;
}
