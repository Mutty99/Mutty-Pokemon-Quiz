//
// Created by fraer on 11/11/2021.
//

#include "Question.h"

void Question::QuestionGUI(Question& current) {
    std::cout << current.getDescription() << std::endl;
    std::cout << "1) " << current.getFirst() << std::endl;
    std::cout << "2) " << current.getSecond() << std::endl;
    std::cout << "3) " << current.getThird() << std::endl;
    std::cout << "4) " << current.getFourth() << std::endl;
    current.setMyAnswer();
    if (current.getMyAnswer() == current.getTrueAnswer()) {
        std::cout << "\nESATTO! =)\n\n";
        current.setCorrect(true);
    }
    else
        std::cout << "\nSBAGLIATO! D=\n\n";
}

void Question::SquadGUI(Question &current) {
    std::cout << current.getDescription() << std::endl;
    std::cout << "1) " << current.getFirst() << std::endl;
    std::cout << "2) " << current.getSecond() << std::endl;
    std::cout << "3) " << current.getThird() << std::endl;
    std::cout << "4) " << current.getFourth() << std::endl;
    current.setMyAnswer();
    if (current.getMyAnswer() == current.getTrueAnswer())
        current.setCorrect(true);
}

const std::string &Question::getDescription() const {
    return description;
}

int Question::getMyAnswer() const {
    return myAnswer;
}

void Question::setMyAnswer() {
    int m , easterEgg = 5;
    std::cin >> m;
    while(true) {
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            if (easterEgg == 0) {
                std::cout << "Ti stai divertendo, vero?\n";
                easterEgg = 5;
            }
            else {
                std::cout << "Risposta non valida.\n" << std::endl;
                easterEgg--;
            }
            std::cin >> m;
        }
        if(!std::cin.fail())
            break;
    }
    Question::myAnswer = m;
}

int Question::getTrueAnswer() const {
    return trueAnswer;
}

const std::string &Question::getFirst() const {
    return first;
}

const std::string &Question::getSecond() const {
    return second;
}

const std::string &Question::getThird() const {
    return third;
}

const std::string &Question::getFourth() const {
    return fourth;
}

bool Question::isCorrect() const {
    return correct;
}

void Question::setCorrect(bool c) {
    Question::correct = c;
}