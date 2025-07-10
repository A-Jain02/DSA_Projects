#include <iostream>
#include "problems.h"
#include "judge.h"

int main() {
    std::cout << "=== Multiplayer Coding Game (CLI) ===\n";
    std::string question = getRandomProblem();
    std::cout << "Problem: " << question << "\n";

    std::string answer1, answer2;
    std::cout << "\nPlayer 1, enter your answer: ";
    std::getline(std::cin, answer1);
    std::cout << "Player 2, enter your answer: ";
    std::getline(std::cin, answer2);

    int score1 = judgeAnswer(question, answer1);
    int score2 = judgeAnswer(question, answer2);

    std::cout << "\nScores:\nPlayer 1: " << score1 << "\nPlayer 2: " << score2 << "\n";
    if (score1 > score2)
        std::cout << "🏆 Player 1 wins!\n";
    else if (score2 > score1)
        std::cout << "🏆 Player 2 wins!\n";
    else
        std::cout << "🤝 It's a tie!\n";

    return 0;
}