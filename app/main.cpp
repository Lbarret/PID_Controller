/**
 * @file main.cpp
 * @version 1.0
 * @brief Header file for pid class
 * @Created on: Sep 28, 2020
 * @copyright 2020 
 * @Auther Loic Barret (Driver),  Aditya Goswami (Navigator)
 */

// c++ header file
#include <iostream>

// user defined header file
#include "../include/PID_Controller.hpp"

int main() {
    // Object created by calling parameterized constructor
    PIDController control(0.05, 0.4, 0.0001, 0.005);
    std::cout << control.compute(3.0, 2.0) << std::endl;
    std::cout << control.compute(5.0, 4.0) << std::endl;
    std::cout << control.compute(7.0, 8.0) << std::endl;
    std::cout << control.compute(0.0, 0.0) << std::endl;
    return 0;
}
