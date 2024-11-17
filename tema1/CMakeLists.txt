# CMake version
cmake_minimum_required(VERSION 3.2)

set(myproject "car")
# Project name
project(${myproject})

# include header files
include_directories(inc)
include_directories(src)

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()    

# Define the executable
add_executable(${PROJECT_NAME}
                src/main.cpp
                src/car.cpp
                src/carpark.cpp)