#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    // Get input from the user
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the calculation based on the chosen operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cerr << "Error: Division by zero is not allowed." << std::endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            std::cerr << "Error: Invalid operation." << std::endl;
            return 1; // Exit with an error code
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
