/** @file PID_Controller.hpp
* @brief a header file that outlines the PID_Controller class
*
*/

// Copyright [2020] <Loic>

#pragma once
#include <iostream>
#include <vector>

class PID_Controller{
 public:
  PID_Controller(double kp, double ki, double kd);
  ~PID_Controller();
 private:
  double Kp, Ki, Kd;
  float computeError();


};
