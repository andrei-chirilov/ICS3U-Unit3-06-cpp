// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program plays the guessing game


#include <iostream>
#include <string>

main() {
    // this function uses a try statement
    std::string integer_as_string;
    int random_number;
    int integer_as_number;

    srand(time(0));  // seed random number generator
    random_number = rand_r() % 10 + 1;

    // input
    std::cout << "can you guess the number I chose between 1-10?";
    std::cout << " ";
    std::cout << "Enter the number you think I guessed: ";
    std::cin >> integer_as_string;

    // process & output
    try {
        integer_as_number = std::stoi(integer_as_string);
        if (random_number == integer_as_number) {
            std::cout << "you guessed it :) ";
    } else {
        std::cout << "The correct number was: " << random_number << std::endl;
        }
    }
    catch (std::invalid_argument) {
        std::cout << "That was not a valid number";
    }
}
