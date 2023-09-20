//
// Created by Marthel Rodriguez on 9/20/23.
//

#ifndef GAMES_CS3A_REVIEW_HANGMANLOGIC_H
#define GAMES_CS3A_REVIEW_HANGMANLOGIC_H

#include <string>
class HangmanLogic {
    int currentAttempt;
    //pass the gHangManPics.
public:
    void isGameLost();
    void getCurrentHangmanPic();
    void updateAttempt(std::string<char> attempt, char guess);
};


#endif //GAMES_CS3A_REVIEW_HANGMANLOGIC_H
