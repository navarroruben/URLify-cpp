// Ruben Navarro
// 12/03/2019
// main.cpp
// CTCI - URLify
// Inserts a string into another string when there is a single space.

#include <iostream>
#include "prototypes.h"

int main() {

    std::string str = "Mr John Smith    ";

    // ensures that string is not empty
    if (!checkEmptyString(str)) {
        printf("String must not be empty\n");
        return 0;
    }

    // constructs and outputs the new modified string
    std::cout << "Original String: " << str << std::endl;
    std::cout << "Modified String: " << constructString(str) << std::endl;

    return 0;
}