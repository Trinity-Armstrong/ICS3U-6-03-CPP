// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: December 2019
// This program identifies the smallest of 10 random numbers

#include <iostream>
#include <ctime>
#include <array>

template<size_t N>
int Identify(std::array<int, N> arrayOfNumbers) {
    // This function identifies the smallest number in a list

    // Variables
    int smallestNumber = 1000;

    // Process
    for (int counter : arrayOfNumbers) {
        if (counter < smallestNumber) {
            smallestNumber = counter;
        }
    }

    // Output
    return smallestNumber;
}

int main() {
    // This function creates an array of 10 numbers then prints out the smallest

    // Seed
    unsigned int seed = time(NULL);

    // Variables and array declaration
    int randomNumbers;
    int smallest;
    std::array<int, 10> numberArray;

    // Process
    for (int counter = 0; counter < 10; counter++) {
        randomNumbers = rand_r(&seed) % 100;
        std::cout << randomNumbers << std::endl;
        numberArray[counter] = randomNumbers;
    }

    // Call function
    smallest = Identify(numberArray);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The smallest number in this array is " \
              << smallest << std::endl;
}
