#include <string>
#include <vector>
#include <sstream>
#include <iostream>

#pragma once
#include <vector>
namespace homework{
/**
* @brief Metafunction for summing the elements of a vector holding
elements of any type↪→
* @param s The vector to sum
* @param v The initial value of the sum
* @tparam T The type of the elements in the vector
* @return The sum of the elements in the vector, plus the initial value
*/

template <typename T>
T sum(const std::vector<T>& s, T v){
    T sum = v;
    for (T i : s){
        sum += i;
    }
    return sum, v;
} // namespace homework