/* 
    File: main.cpp 
    Description: 5.11.1: LAB: Pet information (derived classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#include <iostream>
#include<string>
#include "Cat.h"

using namespace std;

int main() {

	string petName, catName, catBreed;
	int petAge, catAge;

	Pet myPet;
	Cat myCat;

	getline(cin, petName);
	cin >> petAge;
	cin.ignore();
	getline(cin, catName);
	cin >> catAge;
	cin.ignore();
	getline(cin, catBreed);

	// Only main.cpp was able to be modified in this assignment.
	// This part of the assignment will use the mutators/accessors to modify and use the pet.
	myPet.SetName(petName);
	myPet.SetAge(petAge);
	myPet.PrintInfo();      

	// This part of the assignment will use the mutators/accessors to modify and use the cat.
	myCat.SetName(catName);
	myCat.SetAge(catAge);
	myCat.SetBreed(catBreed);
	myCat.PrintInfo();

	// This part will add the breed output to the end of the cat's info per whitespace requirements.
	// spacing = 3 to align with other functions.
	cout << "   Breed: " << myCat.GetBreed() << endl;

}
