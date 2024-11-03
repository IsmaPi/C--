#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <numeric>

int sum_of_elements_by_value(const std::vector<int> v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    std::cout << "Sum of elements by value: " << sum << std::endl;

    return sum;
}

int sum_of_elements_by_reference(const std::vector<int>& v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    std::cout << "Sum of elements by reference: " << sum << std::endl;

    return sum;
}

int sum_of_elements_by_ptr(const int* ptr, const int size){
    if (ptr == nullptr || size == 0){

        std::cout << "Invalid pointer or memory has been freed " << std::endl;

        return 0;

    } else {
    
        int sum = 0;
        for (int i = 0; i < size; i++){
            sum += ptr[i];
        }
        std::cout << "Sum of elements by pointer: " << sum << std::endl;

        return sum;
    
    }
}

int main() {

    std::vector<int> v(1000);
    std::cout << sizeof(v) << std::endl;

    // The size printed will be 24, which is the size of the vector object itself, not the size of the elements it contains (it only has a pointer and a size inside).

    std::array<int, 1000> arr;
    std::cout << sizeof(arr) << std::endl;

    // The size printed will be 4000, which is due to the fact that each of the 1000 integers in the array takes up 4 bits (so )

    // Milestone 2

    constexpr int size = 1000;
    std::vector<int> v_2(size); // A vector with 1000 elements
    std::iota(v_2.begin(), v_2.end(), 0); // Fill the vector with 0, 1, 2, 3, ...
    std::cout<<sum_of_elements_by_value(v_2)<<std::endl;
    std::cout<<sum_of_elements_by_reference(v_2)<<std::endl;
    auto* ptr = v_2.data();
    // auto* ptr = &v_2[0]; // This is equivalent
    v_2.clear();
    std::cout<<sum_of_elements_by_value(v_2)<<std::endl;
    std::cout<<sum_of_elements_by_ptr(ptr, size)<<std::endl;

    // The sum of the elements when we clear the vector is 0, since the vector is empty. The sum of the elements when we use the pointer is the same as the sum of the elements by value, since the pointer points to the same memory location as the vector.

    std::vector<int> v_3(size); // A vector with 1000 elements
    std::iota(v_2.begin(), v_3.end(), 0); // Fill the vector with 0, 1, 2, 3, ...
    std::cout<<sum_of_elements_by_value(v_3)<<std::endl;
    std::cout<<sum_of_elements_by_reference(v_3)<<std::endl;
    v_3.clear();
    auto* ptr_2 = v_3.data();
    std::cout<<sum_of_elements_by_value(v_3)<<std::endl;
    std::cout<<sum_of_elements_by_ptr(ptr_2, size)<<std::endl;

    // The sum of elements by ptr gives the error of munmap_chunk(): invalid pointer, which is due to the fact that the vector has been cleared and the pointer is pointing to an invalid memory location.

    // Milestone 3

    int cast_var = 2;

    std::cout << "Variable to be cast: " << cast_var << std::endl;

    //C-style cast

    float cast_var_float = (float)cast_var;
    std::cout << "C-style cast: " << std::fixed << std::setprecision(1) << cast_var_float << std::endl;

    //Static cast

    float cast_var_float_static = static_cast<float>(cast_var);
    std::cout << "Static cast: " << std::fixed << std::setprecision(1) << cast_var_float_static << std::endl;

    //Reinterpret cast

    float cast_var_float_reinterpret = reinterpret_cast<float&>(cast_var);
    std::cout << "Reinterpret cast: " << std::fixed << std::setprecision(1) << cast_var_float_reinterpret << std::endl;

    return 0;

}