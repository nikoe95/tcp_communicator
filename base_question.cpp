#include "base_question.h"

BaseQuestion::BaseQuestion()
{

}

std::string BaseQuestion::createQuestionMessage()
{
    std::string message = "field:" + _questionField + "_difficulty:" + _questionDifficulty + "!";
    return message;
}

void BaseQuestion::matchQuestionDifficulty(unsigned int questionDifficulty)
{
    if(questionDifficulty == 1)
        _questionDifficulty = QuestionsDifficulties.easy;
    else if(questionDifficulty == 2)
        _questionDifficulty = QuestionsDifficulties.medium;
    else if(questionDifficulty == 3)
        _questionDifficulty = QuestionsDifficulties.hard;
    else
        _questionDifficulty = QuestionsDifficulties.unrecognized;
}
