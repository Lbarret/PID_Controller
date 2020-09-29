/**
 * @file PID_Controller.hpp
 * @version 1.0
 * @brief Header file for pid class
 * @Created on: Sep 28, 2020
 * @copyright 2020 
 * @Author Loic Barret (Driver),  Aditya Goswami (Navigator)
 */

// user defined header file
#include "../include/PID_Controller.hpp"
#include <math.h>

// c++ header file
#include <iostream>

/**
 * @brief PIDController constructor
 * @param none
 * @return none
 */
PIDController::PIDController(void)
    :
    Kp_(0.5),
    Ki_(0.001),
    Kd_(0.01),
    time_interval_(0.05),
    previous_error_(0.0),
    accumulation_error_(0.0) {
  std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief Parameterized PID Constructor
 * @param[1] Kp_ which is a proportional coefficient
 * @param[2] Ki_ which is a integral coefficient
 * @param[3] Kd_ which is a differential coefficient
 * @param[4] time_interval_ which is delta t
 * @return none
 */
PIDController::PIDController(double Kp, double Ki, double Kd,
                             double time_interval)
    :
    Kp_(Kp),
    Ki_(Ki),
    Kd_(Kd),
    time_interval_(time_interval),
    previous_error_(0.0),
    accumulation_error_(0.0) {
  std::cout << "Parameterized constructor called" << std::endl;
}

/**
 * @brief compute method
 * @param[1] target_velocity, which is Set Point(SP)
 * @param[2] actual_velocity, which is Process Value (PV)
 * @return double
 */
auto PIDController::compute(double target_velocity,
                            double actual_velocity) -> double {
  // double diffError, propError, integError;
  double error = target_velocity - actual_velocity;
  // Setting new actual velocity to return it in case of error is zero
  auto newActualVelocity = actual_velocity;
  // If error is zero return same velocity
  if (fabs(error) < 0.0000001) {
    return newActualVelocity;
  } else {
    while (fabs(error) > 0.0000001) {
      double propError = this->Kp_ * error;
      this->accumulation_error_ += error * this->time_interval_;
      double integError = this->Ki_ * this->accumulation_error_;
      double diffError = (error - this->previous_error_) / this->time_interval_;
      diffError = this->Kd_ * diffError;
      this->previous_error_ = error;
      newActualVelocity = propError + integError + diffError;
      error = target_velocity - newActualVelocity;
      if (fabs(error) < 0.000001) {
        break;
      }
    }
  }
  return newActualVelocity;
}

/**
 * @brief Method to get value of private class member previous_error_
 * @param none
 * @return double
 */
auto PIDController::getPreviousError() -> double {
  return previous_error_;
}

/**
 * @brief Method to get value of private class member accumulation_error_
 * @param none
 * @return double
 */
auto PIDController::getAccumulationError() -> double {
  return accumulation_error_;
}

/**
 * @brief Method to get value of private class member time_interval_
 * @param none
 * @return double
 */
auto PIDController::getTimeInterval() -> double {
  return time_interval_;
}

/**
 * @brief Method to get value of private class member Kp_
 * @param none
 * @return double
 */
auto PIDController::getKp() -> double {
  return Kp_;
}

/**
 * @brief Method to get value of private class member Ki_
 * @param none
 * @return double
 */
auto PIDController::getKi() -> double {
  return Ki_;
}
/**
 * @brief Method to get value of private class member Kd_
 * @param none
 * @return double
 */
auto PIDController::getKd() -> double {
  return Kd_;
}
