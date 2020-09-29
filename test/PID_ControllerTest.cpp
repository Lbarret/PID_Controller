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

/**
   * @brief PIDController getTimeIntervalTest test
   * @param getTimeIntervalTest, getTimeIntervalTesting
   * @return none
   */
TEST(getTimeIntervalTest, getTimeIntervalTesting) {
  EXPECT_DOUBLE_EQ(0.005, pid.getTimeInterval());
}

/**
   * @brief PIDController getAKpTest test
   * @param getKpTest, getKpTesting
   * @return none
   */
TEST(getKpTest, getKpTesting) {
  EXPECT_DOUBLE_EQ(0.05, pid.getKp());
}

/**
   * @brief PIDController getKiTest test
   * @param getKiTest, getKiTesting
   * @return none
   */
TEST(getKiTest, getKiTesting) {
  EXPECT_DOUBLE_EQ(0.4, pid.getKi());
}

/**
   * @brief PIDController getKdTest test
   * @param getKdTest, getKdTesting
   * @return none
   */
TEST(getKdTest, getKdTesting) {
  EXPECT_DOUBLE_EQ(0.0001, pid.getKd());
}

/**
   * @brief PIDController Compute test
   * @param ComputeTest, ComputeTesting
   * @return none
   */
TEST(ComputeTest, ComputeTesting) {
  EXPECT_NEAR(2.9990007902761038, pid.compute(3, 2), 0.5);
}

/**
   * @brief PIDController Compute test
   * @param ComputeTest1, ComputeTesting1
   * @return none
   */
TEST(ComputeTest1, ComputeTesting1) {
  EXPECT_NEAR(29.990007902761038, pid.compute(30, 2), 0.5);
}




