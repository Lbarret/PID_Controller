/*
 * PID_Controller.cpp
 *
 *  Created on: Sep 26, 2020
 *      Author: lbarret
 */
#include <iostream>
#include <vector>
#include "PID_Controller.hpp"

PID_Controller::PID_Controller(double kp, double ki, double kd){
Kp = kp;
Ki = ki;
Kd = kd;
}
float computeError(){

  return 1;
}
