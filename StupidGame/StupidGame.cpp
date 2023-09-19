//
// Created by Marthel Rodriguez on 9/16/23.
//

#include "StupidGame.h"

StupidGame::StupidGame(){
    std::cout << "Constructing stupidGame\n";
    //set the layers.
    std::string messages[MAX_LAYER]={"LORD: I see that you want my mushroom. Well you really want the mushroom?",
                                     "LORD: But in reality you don't really want it, right?",
                                     "LORD: You want it that much?",
                                     "LORD: You want it absolutely positively no matter what?",
                                     "But really you don't want it, right?"};
    char expectedResponse[MAX_LAYER]={'y','n','y','y','n'};

    for(int i =0; i<MAX_LAYER;i++){
        layers[i] = Layer(messages[i], expectedResponse[i]);
    }
}

void StupidGame::start() {
    intro();
    //do you want to continue;
    run();
}

void StupidGame::intro(){
    output("Hi welcome to stupid game\n");
    output("This game is only about logic twist.\n");
    output("You're in a quest for a mushroom and you ask the lord\n");
    output("But the lord, will put you on test with some questions, \n");
    output("that will prove that you REALLY WANT the mushroom to win the game\n");
    output("Without further ado let's start!!!\n");
}

void StupidGame::run(){
    char in;
    for(int i =0; i < MAX_LAYER;i++){
        output(layers[i].getQuestion());
        output("\n");
        output("your response(y/n): ");
        in = getCharInput();
        if(in != layers[i].getExpectedAnswer()){
            //wrong answer and you loose the game.
            output("sorry you have lost the game, you're dead.");
            break;
        }
        if(i == (MAX_LAYER-1)){
            //you won the logic twisting game
            output("Lord: fine, here you go.");
            output("Congrats, you've got the mushroom from the LORD :D");
            output("You eat it, and it had killed you slowly either way. Too Bad xD");
            output("Anyhow, thanks for playing. ;)");
        }
    }
}

std::string StupidGame::getTitle() {
    return "Stupid Game";
}

