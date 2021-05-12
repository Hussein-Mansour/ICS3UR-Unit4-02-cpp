// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Wed/May12/2021
// This program uses a while loop

#include <iostream>

int main() {
    // this function multiplies all the whole numbers up to that number
    std::string  positive;
    int positiveInt;

    // input
    std::cout << "Enter a positive integer:";
    std::cin >> positive;

    // process & output
    try {
        positiveInt = std::stoi(positive);

        if (positiveInt < 0) {
        std::cout << "you did not enter a positive integer." << std::endl;
        } else if (positiveInt == 0) {
        std::cout << "0 ! = 1" << std::endl;
        } else {
            int loopCounter = 1;
            int factorial = 1;

            do {
                factorial = factorial * positiveInt;
                positiveInt = positiveInt - 1;
                loopCounter = loopCounter;
                std::cout << positive << " ! = " << factorial << std::endl;
            } while (loopCounter <= positiveInt);
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input!" << std::endl;
    }

std::cout << "\n\nDone." << std::endl;
}
