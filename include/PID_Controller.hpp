/** @file PID_Controller.hpp
* @brief a header file that outlines the PID_Controller class
*
*/

// Copyright [2020] <Loic>

#pragma once
#include <iostream>
#include <vector>

class PID_Controller{

PID_Controller(double kp, double ki, double kd);
 private:
  double Kp, Ki, Kd;
  float computeError();

};



