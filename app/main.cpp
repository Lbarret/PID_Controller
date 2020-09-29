/**
 * @file main.cpp
 * @version 1.0
 * @brief Header file for pid class
 * @Created on: Sep 28, 2020
 * @copyright 2020 
 * @Author Loic Barret (Driver),  Aditya Goswami (Navigator)
 */

// c++ header file
#include <iostream>

// user defined header file
#include "../include/PID_Controller.hpp"

int main() {
  // Object created by calling parameterized constructor
  PIDController pid(0.05, 0.4, 0.0001, 0.005);
  float target_velocity = 400.0;
  float actual_velocity = 20.0;
  std::cout << "The actual velocity is = " << actual_velocity << std::endl;
  std::cout << "The target velocity is = " << target_velocity << std::endl;
  std::cout << "The New velocity using PID controller is = "
            << pid.compute(target_velocity, actual_velocity) << std::endl;
  return 0;
}
