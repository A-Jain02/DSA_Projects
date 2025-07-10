#include "problems.h"
#include <vector>
#include <cstdlib>

std::string getRandomProblem() {
    std::vector<std::string> problems = {
        "Find the factorial of a number.",
        "Reverse a string.",
        "Check if a number is prime.",
        "Find the nth Fibonacci number.",
        "Check if a string is a palindrome."
    };
    return problems[rand() % problems.size()];
}