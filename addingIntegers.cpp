// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-10
// This programs adds two integers together

#include <iostream>
#include <iomanip>

int main() {
    // This function adds two integers together
    int int1;
    int int2;
    int total;

    // Input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> int1;
    std::cout << "Enter the second number to add (integer): ";
    std::cin >> int2;

    // Process
    total = int1 + int2;

    // Output
    std::cout << "" << std::endl;
    std::cout << int1 << " + " << int2 << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Your answer is " << std::fixed
    << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
