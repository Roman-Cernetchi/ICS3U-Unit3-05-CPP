// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: December 2020
// This program shows you what month it is

#include <iostream>


int main() {
    // this function checks what month it is based off a number
    int chosen_number;

    // input
    std::cout << "Enter a number between 1-12: ";
    std::cin >> chosen_number;
    std::cout << "" << std::endl;

    // process
    switch (chosen_number) {
    case 1 :
        std::cout << "The month is January" << std::endl;
        break;
    case 2 :
        std::cout << "The month is Febuary" << std::endl;
        break;
    case 3 :
        std::cout << "The month is March" << std::endl;
        break;
    case 4 :
        std::cout << "The month is April" << std::endl;
        break;
    case 5 :
        std::cout << "The month is May" << std::endl;
        break;
    case 6 :
        std::cout << "The month is June" << std::endl;
        break;
    case 7 :
        std::cout << "The month is July" << std::endl;
        break;
    case 8 :
        std::cout << "The month is August" << std::endl;
        break;
    case 9 :
        std::cout << "The month is September" << std::endl;
        break;
    case 10 :
        std::cout << "The month is October" << std::endl;
        break;
    case 11 :
        std::cout << "The month is November" << std::endl;
        break;
    case 12 :
        std::cout << "The month is December" << std::endl;
        break;
    default :
        std::cout << "Invalid input" << std::endl;
    }
}
