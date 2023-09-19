//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "Grid.h"

//grid is constructed with selected params.
// it's similar to: new std::Vector<std::Vector<Letter>>(3, std::vector<Letter>(3, Letter()))
Grid::Grid():grid(3, std::vector<Letter>(3, Letter())) {
    char num = '1';
    for(int i = 0; i < 3;i++){
        for(int j=0; j<3;j++){
            grid[i][j].setLetter(num);
            num++;
        }
    }
}

//for fetching the row
std::vector<Letter> &Grid::operator[](unsigned int index) {
    return this->grid[index];
}

const std::vector<Letter> &Grid::operator[](unsigned int index) const {
    return this->grid[index];
}

void Grid::set(int space, const Letter &letter) {
    this->grid[(space - 1)/3][(space - 1) % 3]= letter;
}

 std::ostream& operator<<(std::ostream& out, const Grid& grid){
     for(int i = 0; i < 3;i++){
         out << "[ ";
         for(int j=0; j<3;j++){
             out<<grid[i][j].getLetter();
             if(j !=2){
                 out << " , ";
             }
         }
         out << " ]\n";
     }
     return out;
}