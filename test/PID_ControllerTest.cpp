/**
 *@file PID_ControllerTest.cpp
 *@brief The PID_Controller class is tested here,
 *@Created on: Sep 28, 2020
 *@copyright 2020
 *@copyright owner : Loic Barret, Aditya Goswami
 */
#include <gtest/gtest.h>
#include "PID_Controller.hpp"

PIDController pid(0.05, 0.4, 0.0001, 0.005);

/**
   * @brief PIDController constructor test
   * @param ConstructorTest, ConstructorTesting
   * @return none
   */
TEST(ConstructorTest, ConstructorTesting) {
  EXPECT_DOUBLE_EQ(.05, pid.getKp());
  EXPECT_DOUBLE_EQ(.4, pid.getKi());
  EXPECT_DOUBLE_EQ(0.0001, pid.getKd());
  EXPECT_DOUBLE_EQ(.005, pid.getTimeInterval());
}

/**
   * @brief PIDController Compute test
   * @param ComputeTest, ComputeTesting
   * @return none
   */
TEST(ComputeTest, ComputeTesting) {
  EXPECT_DOUBLE_EQ(2.072, pid.compute(3, 2));
}

/**
   * @brief PIDController getPreviousError test
   * @param getPreviousErrorTest, getPreviousErrorTesting
   * @return none
   */
TEST(getPreviousErrorTest, getPreviousErrorTesting) {
  EXPECT_DOUBLE_EQ(0, pid.getPreviousError());
}

/**
   * @brief PIDController getAccumulationError test
   * @param getAccumulationErrorTest, getAccumulationErrorTesting
   * @return none
   */
TEST(getAccumulationErrorTest, getAccumulationErrorTesting) {
  EXPECT_DOUBLE_EQ(0, pid.getAccumulationError());
}

