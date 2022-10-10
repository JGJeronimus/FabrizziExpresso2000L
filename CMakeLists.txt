cmake_minimum_required(VERSION 3.5)

project(CoffeeMachine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
   CoffeeMachine main.cpp
   coffeemachine.cpp
   piston.cpp
<<<<<<< HEAD
   heater.cpp

   coffeemachine.h
   piston.h
   heater.h
=======

   coffeemachine.h
   piston.h
>>>>>>> 689d2d564e8b02abcf20538f5e664531694bc150
   )
