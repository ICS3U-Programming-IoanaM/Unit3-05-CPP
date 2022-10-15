// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu
//
// Date: Oct. 14, 2022
// tells user what month is associated with a their chosen number from 1 - 12


#include <iostream>

int main() {
    // variables
    int monthNum;

    // get user input
    std::cout << "Enter in a number from 1 - 12: ";
    std::cin >> monthNum;

    // checks to make sure user imputed a number within range
    if (monthNum > 1 || monthNum < 12) {
        std::cout << "Error. " << monthNum << " does not represent a month.\n";

    } else {
        // switch case for month association
        switch (monthNum) {
            case 1:
                std::cout << "1 is January\n";
                break;
            case 2:
                std::cout << "2 is February\n";
                break;
            case 3:
                std::cout << "3 is March\n";
                break;
            case 4:
                std::cout << "4 is April\n";
                break;
            case 5:
                std::cout << "5 is May\n";
                break;
            case 6:
                std::cout << "6 is June\n";
                break;
            case 7:
                std::cout << "7 is July\n";
                break;
            case 8:
                std::cout << "7 is August\n";
                break;
            case 9:
                std::cout << "9 is September\n";
                break;
            case 10:
                std::cout << "10 is October\n";
                break;
            case 11:
                std::cout << "11 is November\n";
                break;
            case 12:
                std::cout << "12 is December\n";
                break;
        }
    }
}
