/*
Complete a program that reads a vector index as input and outputs the element of a vector of 10 names at the index specified by the input. Use a try block to output the name and a catch block to catch any out_of_range exceptions. When an out_of_range exception is caught, output the message from the exception object and the first element in the vector if the index is negative or the last element if the index is greater than the size of the vector.

Hint: Format the exception outputs using the what() function from the exception object. Do not hard code the exception messages.

Ex: If the input of the program is:

5
the program outputs:

Jane
Ex: If the input of the program is:

12
the program outputs:

Exception! vector::_M_range_check: __n (which is 12) >= this->size() (which is 10)
The closest name is: Johnny
Ex: If the input of the program is:

-2
the program outputs:

Exception! vector::_M_range_check: __n (which is 18446744073709551614) >= this->size() (which is 10)
The closest name is: Ryley
*/

/* 
    File: main.cpp
    Description: 7.6.1: LAB: Exceptions with vectors
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-25-2024
*/

#include <iostream>
#include <vector>
#include <stdexcept>      // For std::out_of_range
using namespace std;

int main() {
   vector<string> names = { "Ryley", "Edan", "Reagan", "Henry", "Caius", "Jane", "Guto", "Sonya", "Tyrese", "Johnny" };
   int index;

   cin >> index;
   
   // Try to access the element at index and output it
    try {
         cout << names.at(index) << endl;
    } 
    catch (out_of_range &excpt) { // if the index is out of range, catch the exception and find closest index
         cout << "Exception! " << excpt.what() << endl; // Catch what I'm throwing? (contained in excpt object)
         if (index < 0) {
              cout << "The closest name is: " << names.at(0) << endl;
         } 
         // casted size_t to fix compiler issue with long unsigned int comparison, where unsigned was not available in this particular instance
         else if (static_cast<size_t>(index) >= names.size()) { // experimental range adjustemnt to fix 10 input testcase in zybooks (Solution was >= to include the end of the vector)
              cout << "The closest name is: " << names.back() << endl; // .back() will handle the proper element per range based on the testcase integration of zybooks in case of alternate sized tests
         }
    }
   return 0;
}