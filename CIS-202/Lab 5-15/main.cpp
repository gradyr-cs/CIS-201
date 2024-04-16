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

/* 
    File: main.cpp
    Description: 5.15.1: LAB: Plant information (vector)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints a vector of plant (or flower) object pointers
void PrintVector(vector<Plant*> myGarden) {
   for (size_t i = 0; i < myGarden.size(); ++i) {
      cout << "Plant " << i + 1 << " Information:" << endl;
      myGarden.at(i)->PrintInfo();
      cout << endl; // proper spacing for whitespace
   }
}

int main() {
   // TODO: Declare a vector called myGarden that can hold object of type plant pointer
   vector<Plant*> myGarden;

   // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual
   string plantName;
   int plantCost;
   string flowerName;
   int flowerCost;
   string colorOfFlowers;
   string annual;
   bool isAnnual;
   string input;

   cin >> input;

   // This will process the user input data per whitespace requirements.
   // while input != -1, the logic will branch based on plant or flower and then call functions of the class.
   while(input != "-1") {
   // TODO: Check if input is a plant or flower
   //       Store as a plant object or flower object
   //       Add to the vector myGarden
      if (input == "plant") {
         cout << "Debug: Entered plant branch" << endl;
         cin >> plantName >> plantCost;
         Plant* plant = new Plant();
         plant->SetPlantName(plantName);
         plant->SetPlantCost(plantCost);;
         myGarden.push_back(plant);
         
      } 
      else if (input == "flower") {
         cout << "Debug: Entered flower branch" << endl;
         cin >> flowerName >> flowerCost >> annual >> colorOfFlowers;
         Flower* flower = new Flower();
         flower->SetPlantName(flowerName);
         flower->SetPlantCost(flowerCost);
         // endless loop happens here, experimental fix inc...
         // This will convert the string to a boolean
         if (annual == "true") {
            isAnnual = true;
         } 
         else {
            isAnnual = false;
         }
         flower->SetPlantType(isAnnual);
         flower->SetColorOfFlowers(colorOfFlowers);
         myGarden.push_back(flower);
         
      }
   

      cout << "Debug: left if branch - Give next input to enter the top of the while loop." << endl;
      
      cin >> input;
   }

   // TODO: Call the method PrintVector to print myGarden
   PrintVector(myGarden);

   // This loop will delete the objects in the vector to prevent memory leaks.
   for (size_t i = 0; i < myGarden.size(); ++i) {
      //cout << "Debug: Deleting object at index " << i << endl;
      delete myGarden.at(i);
   }
   
   return 0;
}