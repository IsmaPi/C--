#include <iostream>

int main(){

    float num1;
    float num2;
    char op;

    std::cout << "Enter your operation: " << std::endl;
    std::cin >> num1 >> op >> num2;

    if (op == '+'){
        std::cout << num1 + num2 << std::endl;
    } else if (op == '-'){
        std::cout << num1 - num2 << std::endl;
    } else if (op == '*'){
        std::cout << num1 * num2 << std::endl;
    } else if (op == '/'){
        std::cout << num1 / num2 << std::endl;
    } else {
        std::cout << "Invalid operator" << std::endl;
    }

    return 0;


}