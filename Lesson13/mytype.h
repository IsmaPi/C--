// include/mytype.h
#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

namespace homework {
/**
* @brief A type with some members that can be serialized
*/
class MyType {
int i;
double d;
public:
MyType(int i, double d) : i(i), d(d) {
}
/**
* @brief Equality operator
*/
auto operator==(const MyType& other) const {
return i == other.i && d == other.d;
}
};
/**
* @brief Write the MyType object to a file
* @param mt The MyType object to write
* @param filename The name of the file to write to
*/
void writeToFile(const MyType& mt, const std::string& filename) {
    std::vector<std::string> split(const std::string &str){
    std::vector<std::string> result;
    stringstream ss(str);
    for string s in ss{
        result.push_back(s);
    }
// Write the MyType object to a file with the given filename
}
}
/**
* @brief Read the MyType object from a file
* @param filename The name of the file to read from
* @return The MyType object read from the file
*/
MyType readFromFile(const std::string& filename) {
// Read the MyType object from a file with the given filename and return it
}
}