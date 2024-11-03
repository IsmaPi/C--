#include <iostream>
#include <iomanip>

double calculate(double num1, double num2, char op){
    double result = 0;
    switch (op)
    {
    case '+':
        return num1 + num2;
        break;

    case '-':
        return num1 - num2;
        break;

    case '*':
        return num1 * num2;
        break;

    case '/':
        return num1 / num2;
        break;
    
    default:
        std::cout << "Invalid operator" << std::endl;
        break;
    }
}

int main(){

    std::cout << "Enter your operation: " << std::endl;
    std::cin >> num1 >> op >> num2;

    if (! (std::cin >> num1)){
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    if (! (std::cin >> num2)){
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    if (! (std::cin >> op)){
        std::cout << "Invalid input" << std::endl;
        return 1;
    }
    
    double result

    return 0;

}