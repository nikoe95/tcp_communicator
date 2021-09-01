#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>

/* Interface for message classes */

class BaseQuestion
{
public:
    explicit BaseQuestion();

    std::string createQuestionMessage();
    void matchQuestionDifficulty(unsigned int questionDifficulty);

protected:

    struct questionField
    {
        const std::string astronomy {"1"};
        const std::string nature {"2"};
        const std::string physics {"3"};
        const std::string maths {"4"};
        const std::string chemistry {"5"};
        const std::string unrecognized {"6"};
    } QuestionFields;

    struct questionDifficulty
    {
        const std::string easy {"1"};
        const std::string medium {"2"};
        const std::string hard {"3"};
        const std::string unrecognized {"4"};

    } QuestionsDifficulties;


    std::string _questionField;
    std::string _questionDifficulty;
};

#endif // MESSAGE_H
