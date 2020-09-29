# PID Controller
[![Build Status](https://travis-ci.org/Lbarret/PID_Controller.svg?branch=master)](https://travis-ci.org/Lbarret/PID_Controller)
[![Coverage Status](https://coveralls.io/repos/github/Lbarret/PID_Controller/badge.svg?branch=master)](https://coveralls.io/github/Lbarret/PID_Controller?branch=master)
---

## Overview

This repo is developed as a part of developing new mobile robot product for ACME Robotics. It implements [PID Controller](https://en.wikipedia.org/wiki/PID_controller) functionality for a new mobile robot. The team members working to develop this project uses pair programming software development technique. The authors are listed in the author section below.

This repository serves as a simple C++ PID controller algorithm implementation with:

- cmake
- googletest

## Authors for Part 1

**- Driver:** Loic Barret

**- Navigator:** Aditya Goswami 

## Authors for Part 2

**- Driver:** Pradeep Gopal

**- Navigator:** Divyam Garg

## Standard install via command-line
```
git clone --recursive https://github.com/Lbarret/PID_Controller
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage 
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone --recursive https://github.com/Lbarret/PID_Controller
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of PID_Controller

```
cd ~/workspace
mkdir -p PID_Controller-eclipse
cd PID_Controller-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../PID_Controller/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "PID_Controller-eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold PID_Controller-eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the PID_Controller-eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)







