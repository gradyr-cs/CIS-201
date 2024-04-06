/* 
    File: FoodItem.h
    Description: 4.22.1: LAB: Nutritional information (classes/constructors)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-20-2024
*/

#ifndef FOODITEMH
#define FOODITEMH

#include <string>

using namespace std;

class FoodItem {
   public:
      // TODO: Declare default constructor
      FoodItem();

      // TODO: Declare second constructor with parameters
      // to initialize private data members
      FoodItem(string itemName, double amountFat, double amountCarbs, double amountProtein);

      string GetName();

      double GetFat();

      double GetCarbs();

      double GetProtein();

      double GetCalories(double numServings);

      void PrintInfo();

   private:
      string name;
      double fat;
      double carbs;
      double protein;
};

#endif