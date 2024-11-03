#include "DynamicArray.h"
#include <iostream>
#include <random>

using namespace oop; 
DynamicArray createRandomArray(){
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> distribution(1,100);
    DynamicArray a(10);
    for(int i = 0; i < 10; i++){
        a[i] = distribution(generator);
    }
    return a;
}

int main() {
    DynamicArray a(10, 1);
    a[0] = 2; a[1] = 3;
    DynamicArray b = a; // Copy constructor
    DynamicArray c = createRandomArray(); // Move constructor
    DynamicArray d(b); // Copy constructor
    DynamicArray e(createRandomArray()); // Move constructor
    std::cout << a << std::endl; // Stream insertion operator
    DynamicArray f = a + b; // Concatenation operator
    return 0; // Destructor called on all objects, no memory leaks
}

