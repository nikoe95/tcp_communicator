#include "nature_question.h"

NatureQuestion::NatureQuestion(unsigned int questionDifficulty)
{
    _questionField = QuestionFields.nature;
    matchQuestionDifficulty(questionDifficulty);
}


