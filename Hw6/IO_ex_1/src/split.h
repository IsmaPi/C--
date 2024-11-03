#pragma once
#include <sstream>
#include <string>
#include <vector>
namespace homework{
/**
* @brief Returns a vector of whitespace-separated substrings from the
argument string↪→
* @param str The string to split
* @return A vector of whitespace-separated substrings
*/

    std::vector<std::string> split(const std::string& str) {
        std::istringstream iss(str);
        std::vector<std::string> result;
        std::string word;
        while (iss >> word) {
            result.push_back(word);
        }
        return result;

    }

} // namespace homework