/* 
    File: main.cpp 
    Description: 1.24.1: LAB: Reverse vector
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-16-2024
*/

#include <iostream>
#include <vector>
using namespace std;

// This method reverses contents of parameter vect.
// This function uses a temp swap to replace the first and last index of the input vector
vector<int> Reverse(vector<int> vect) {
    int temp; // establish a placeholder for a swap
    
    temp = vect.at(0); // place index 0 into temp storage
    vect.at(0) = vect.at(vect.size() - 1); // place 0 into the index's end
    vect.at(vect.size() - 1) = temp; // place the original 0 into index's end
	
	 return vect;
	
}

int main() {
    size_t i = 0; // special unsigned int type, can theoretically hold the maximum size of an array/object
	 vector<int> intVect(3); // establish the vector
	 intVect.at(0) = 2; // fill the vector by index
	 intVect.at(1) = 4;
	 intVect.at(2) = 6;

	 vector<int> reverseVect = Reverse(intVect); // send vector for processing & assign the return statement into this new vector

    cout << "Reversed vector: {";
	 for (i = 0; i < reverseVect.size() - 1; ++i) { // iterate through the vector to display in console
        cout << reverseVect.at(i) << ", ";
    }
        cout << reverseVect.at(i) << "}" << endl;
	 return 0;
}