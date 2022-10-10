#include <string>
#include <iostream>
#include "coffeemachine.h"
using namespace std;

// The specific name of this (badge of) machines
string machineName = "Fabrizzi Expresso 2000L";

int main()
{

   cout << "Starting the " << machineName << endl;
   CoffeeMachine CoffeeMachine;

   // Endless loop for the coffeemachine
   while(true) {
   CoffeeMachine.checkHandle();
   }

   return 0;
}
