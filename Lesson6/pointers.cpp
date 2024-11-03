#include <iostream>
#include <iomanip>
#include <array>
#include <vector>

void pointers(){

    int a = 15;
    int * ptr_to_a = &a;
    int value_at_ptr_to_a = *ptr_to_a;

    std::cout << "a: " << a << std::endl;

}

void stack_memory(){

    int a = 15;
    std::array<int, 10> arr;

}

void heap_memory(){

    std::vector<int> vec;
    vec.resize(1000);

    int* ptr_to_int = new int[1000];

    delete ptr_to_int;
}

void casting(){

    int a = 15;
    float b = static_cast<float>(a);
    std::cout<< "b: " << b << std::endl;

}

void bad_reinterpret(){

    int a = 1065353216;
    float* ptr_to_a_as_float_ptr = reinterpret_cast<float*>(&a);
    float a_as_float = *ptr_to_a_as_float_ptr;
    std::cout << "Bad reinterpret: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << std::fixed << std::setprecision(3) << "a_as_float: " << a_as_float << std::endl;
    
}

void mischievous_stack(){



}

void costness(){

    const int a = 15;   //If we try to change the value of a, the compiler will throw an error.
    int b = 1;
    const int* ptr_to_a = &b;   //If we try to change the value of the pointer to b, the compiler will throw an error.

    constexpr int c = 15;   //If we try to change the value of c, the compiler will throw an error.

}

constexpr int square(int x){
    return x * x;
}

int main(){

    //pointers();
    //casting();
    //bad_reinterpret();
    //mischievous_stack();
    //costness();

    return 0;
}