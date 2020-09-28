set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    PID_ControllerTest.cpp
    ../app/PID_Controller.cpp
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(cpp-test PUBLIC gtest)
