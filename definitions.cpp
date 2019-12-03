// Ruben Navarro
// 12/03/2019
// main.cpp
// CTCI - URLify
// Inserts a string into another string when there is a single space.

#include <string>
#include <iostream>

bool checkEmptyString(std::string s) {
    if (s.empty())
        return false;
    else
        return true;

}

std::string constructString(std::string s) {
    int i = 0;
    std::string s2 = "";
    for (auto c : s) {

        if (isspace(c) && i + 1 != s.length()) {
            if (s[i + 1] != ' ')
                s2 += "%20";
        }
        else
            s2 += c;
        ++i;
    }
return s2;
}
