//
// Created by fraer on 11/11/2021.
//

#ifndef QUIZ_QUESTION_H
#define QUIZ_QUESTION_H

#include <iostream>
#include <string>
#include <limits>

class Question {
public:
    Question(std::string description, std::string first, std::string second, std::string third, std::string fourth, int trueAnswer, int myAnswer = 0,
             bool correct = false) :
    description(std::move(description)), first(std::move(first)), second(std::move(second)), third(std::move(third)), fourth(std::move(fourth)),
    trueAnswer(trueAnswer), myAnswer(myAnswer), correct(correct) {}

    static void QuestionGUI(Question& current);

    static void SquadGUI(Question& current);

    const std::string &getDescription() const;

    int getMyAnswer() const;

    void setMyAnswer();

    int getTrueAnswer() const;

    const std::string &getFirst() const;

    const std::string &getSecond() const;

    const std::string &getThird() const;

    const std::string &getFourth() const;

    bool isCorrect() const;

    void setCorrect(bool correct);

private:
    int myAnswer, trueAnswer;
    bool correct;
    std::string description, first, second, third, fourth;
};


#endif //QUIZ_QUESTION_H
