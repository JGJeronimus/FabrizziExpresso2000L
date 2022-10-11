cmake_minimum_required(VERSION 3.5)

project(CoffeeMachine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
   CoffeeMachine main.cpp
   coffeemachine.cpp
   piston.cpp
   heater.cpp
   sensor.cpp
   boiler.cpp

   coffeemachine.h
   piston.h
   heater.h
   sensor.h
   boiler.h
   )
