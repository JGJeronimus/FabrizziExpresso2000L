#ifndef HEATER_H
#define HEATER_H

// The heater-class discribes the possible states of all heaters in the FabrizziExpresso2000L

class heater
{
public:
   heater();
   void heat();
   void idle();
private:
   bool heaterON_OFF;
};

#endif // HEATER_H
