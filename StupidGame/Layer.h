//
// Created by Marthel Rodriguez on 9/18/23.
//

#ifndef GAMES_CS3A_REVIEW_LAYER_H
#define GAMES_CS3A_REVIEW_LAYER_H

#include <string>
class Layer {
private:
    std::string question;
    char expectedAnswer;

public:
    Layer();
    Layer(std::string &question, char expectedAnswer);
    std::string getQuestion();
    char getExpectedAnswer() const;
};


#endif //GAMES_CS3A_REVIEW_LAYER_H
