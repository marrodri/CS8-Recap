
//app test.
//#include "App.h"
//int main(){
//    App app;
//    app.run();
//}

//hangman
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

#include "Hangman/Hangman.h"
//int main()
//{
//    srand(time(0));
//    std::ifstream fin;
//
//    std::ofstream fout;
//    fout.open("numbers.txt");
//    if(fout.fail())
//    {
//        std::cout << "Could not open file";
//        exit(1);
//    }
//    for (int i = 0; i < 100; ++i)
//    {
//        // rand() % (high - low) + low;
//        //write to file.
//        fout << (rand() % (36 - 5 + 1) + 5) << std::endl;
//    }
//
//    //reading the file created.
//    openFile(fin, "numbers.txt");
//    int next;
//    while( fin >> next )
//    {
//        std::cout << next << ", ";
//    }
//    return 0;
//}

int main(){
    srand(time(0));
    Hangman hangman;
    hangman.start();
//    Pacman p;
//    TicTacToe tictactoe;
//    Application console;
//    console.addGame(tictactoe);
//    console.addGame(p);
//    console.run();
}


