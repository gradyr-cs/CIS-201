/*
5.15 LAB: Plant information (vector)
Given a base Plant class and a derived Flower class, complete main() to create a vector called myGarden. The vector should be able to store objects that belong to the Plant class or the Flower class. Create a function called PrintVector(), that uses the PrintInfo() functions defined in the respective classes and prints each element in myGarden. The program should read plants or flowers from input (ending with -1), add each Plant or Flower to the myGarden vector, and output each element in myGarden using the PrintInfo() function.

Ex. If the input is:

plant Spirea 10
flower Hydrangea 30 false lilac
flower Rose 6 false white
plant Mint 4
-1
the output is:

Plant 1 Information:
   Plant name: Spirea
   Cost: 10

Plant 2 Information:
   Plant name: Hydrangea
   Cost: 30
   Annual: false
   Color of flowers: lilac

Plant 3 Information:
   Plant name: Rose
   Cost: 6
   Annual: false
   Color of flowers: white

Plant 4 Information:
   Plant name: Mint
   Cost: 4
537434.3637190.qx3zqy7
LAB ACTIVITY
5.15.1: LAB: Plant information (vector)
*/

// header here

#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints a vector of plant (or flower) object pointers

int main() {
   // TODO: Declare a vector called myGarden that can hold object of type plant pointer

   // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual
   string input;

   cin >> input;

   while(input != "-1") {
   // TODO: Check if input is a plant or flower
   //       Store as a plant object or flower object
   //       Add to the vector myGarden
      cin >> input;
   }

   // TODO: Call the method PrintVector to print myGarden

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }
   
   return 0;
}