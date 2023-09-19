//
// Created by Marthel Rodriguez on 9/18/23.
//

#include "Layer.h"


Layer::Layer() {

}

Layer::Layer(std::string &question, char expectedAnswer) {
    this->question = question;
    this->expectedAnswer = expectedAnswer;
}

std::string Layer::getQuestion() {
    return question;
}
char Layer::getExpectedAnswer() const{
    return expectedAnswer;
}
