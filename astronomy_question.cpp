#include "astronomy_question.h"

AstronomyQuestion::AstronomyQuestion(unsigned int questionDifficulty)
{
    _questionField = QuestionFields.astronomy;
    matchQuestionDifficulty(questionDifficulty);
}
