#include <iostream>

#include "App.h"
#include "CustFunctions/CustFunctions.h"
#include <fstream>

int main(){
    App app;
    app.run();
}
/**
 * TicTacToe mainGame
 * */
//int main()
//{
////    Player p;
////    std::cin >> p;
//    TicTacToe game;
//    game.start();
//    return 0;
//}

/***
 * Choose your own adventure main.
 * */
//int main() {
//
//    char newGame = ' ';
//    srand(time(0));
//
//    while(newGame != 'n'){
//        UniqueAdventure game;
//        game.runGame();
//        std::cout << "Start a new game?(y/n)" << std::endl;
//        std::cin >> newGame;
//    }
//
//    return 0;
//}


//hangman
//int main(){
//    std::ifstream fin;
//    std::ofstream fout;
//
//    fout.open("numbers.txt");
//    //fout file
//    if(fout.fail()){
//        std::cout << "could not open file";
//    }
//    openFile(fin, "numbers.txt");
//    int next;
//    while(!fin.eof()){
//        fin >> next;
//        //what is next type.
//        std::cout << next << ", ";
//    }
//}