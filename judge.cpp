#include "judge.h"
#include <string>
#include <algorithm>

int judgeAnswer(const std::string& problem, const std::string& answer) {
    // Very basic scoring logic
    std::string lower_answer = answer;
    std::transform(lower_answer.begin(), lower_answer.end(), lower_answer.begin(), ::tolower);

    if (problem.find("factorial") != std::string::npos && lower_answer.find("for") != std::string::npos)
        return 10;
    if (problem.find("reverse") != std::string::npos && lower_answer.find("reverse") != std::string::npos)
        return 10;
    if (problem.find("prime") != std::string::npos && lower_answer.find("if") != std::string::npos)
        return 10;
    if (problem.find("fibonacci") != std::string::npos && lower_answer.find("fib") != std::string::npos)
        return 10;
    if (problem.find("palindrome") != std::string::npos && lower_answer.find("==") != std::string::npos)
        return 10;

    return 5;
}