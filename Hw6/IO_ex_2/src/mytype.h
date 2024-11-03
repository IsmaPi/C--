#pragma once
#include <iostream>
#include <fstream>
namespace homework {
/**
* @brief A type with some members that can be serialized
*/
class MyType {
int i;
double d;
    /**
    * @brief Equality operator
    */
public:
    MyType(int i = 0, double d = 0.0) : i(i), d(d) {}
    bool operator==(const MyType& other) const {
        return i == other.i && d == other.d;
    }
    friend std::ostream& operator<<(std::ostream& os, const MyType& mt) {
        os << mt.i << " " << mt.d;
        return os;
    }

    friend std::istream& operator>>(std::istream& is, MyType& mt) {
        is >> mt.i >> mt.d;
        return is;
    }
};
/**
* @brief Write the MyType object to a file
* @param mt The MyType object to write
* @param filename The name of the file to write to
*/
void writeToFile(const MyType& mt, const std::string& filename) {
    std::ofstream outFile(filename);
    outFile << mt;
}
/**
* @brief Read the MyType object from a file
* @param filename The name of the file to read from
* @return The MyType object read from the file
*/
MyType readFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    MyType mt;
    inFile >> mt;
    return mt;
}

} // namespace homework