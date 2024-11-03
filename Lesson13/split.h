// include/split.h
#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
namespace homework{
/**
* @brief Returns a vector of whitespace-separated substrings from the
argument string↪→
* @param str The string to split
* @return A vector of whitespace-separated substrings
*/

    std::vector<std::string> split(const std::string &str){
    std::vector<std::string> result;
    std::stringstream ss(str);
    for string s in ss{
        result.push_back(s);
    }
// Write the MyType object to a file with the given filename
}

std::vector<std::string> split(const std::string& str);
} // namespace homework