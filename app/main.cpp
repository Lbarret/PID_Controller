/**
 * @file main.cpp
 * @version 1.0
 * @brief Header file for pid class
 * @Created on: Sep 28, 2020
 * @copyright 2020 
 * @Author Part 1: Loic Barret (Driver),  Aditya Goswami (Navigator)
 * @Author Part 2: Pradeep Gopal (Driver),  Divyam Garg (Navigator)
 */

// c++ header file
#include <iostream>

// user defined header file
#include "../include/PID_Controller.hpp"

int main() {
  // Object created by calling parameterized constructor
  PIDController pid(0.05, 0.4, 0.0001, 0.005);
  std::cout << "The New velocity using PID controller is = "
            << pid.compute(400.0, 20.0) << std::endl;
  return 0;
}
