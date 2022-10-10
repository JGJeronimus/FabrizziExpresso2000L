#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
#include "piston.h"
#include "heater.h"
#include "sensor.h"


class CoffeeMachine
{
public:
   CoffeeMachine();
   void checkTemp();
   void checkHandle();
   void checkWater();

private:
   void start();
   void idle();
   void makeCoffee();

private:
      piston piston;
   //handle handle;
};

#endif // COFFEEMACHINE_H
