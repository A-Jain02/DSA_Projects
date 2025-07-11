#include <iostream> // Required for input and output operations

int main() {
    int num1, num2, sum; // Declare integer variables to store the numbers and their sum

    // Prompt the user to enter two integers
    std::cout << "Enter the first integer: ";
    std::cin >> num1; // Read the first integer from the user

    std::cout << "Enter the second integer: ";
    std::cin >> num2; // Read the second integer from the user

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0; // Indicate successful program execution
}
