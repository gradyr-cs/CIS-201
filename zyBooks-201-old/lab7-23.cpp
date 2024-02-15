/* 
    File: main.cpp 
    Description: 7.23.1: LAB: Vending machine
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-03-2023
*/

#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
	int purchCan; // cans, bottles, yada yada
	int restockCan; 
	
	VendingMachine jolt; // establish instanced vending machine. RIP Jolt Cola.
	
	cin >> purchCan; // gather user input
	cin >> restockCan;
	
	jolt.Purchase(purchCan); // buy var-input units
	jolt.Restock(restockCan); // replenish inventory by var-input units
	jolt.Report(); // Show us what you've got!
	
}

-------------------------
VendingMachine.h

#ifndef VENDINGMACHINE_H_
#define VENDINGMACHINE_H_

#include <iostream>
using namespace std;

class VendingMachine {

    public:
		VendingMachine();
		void Purchase(int amount);
		int GetInventory();
		void Restock(int amount);
		void Report();

    private:
        int bottles;
};

#endif /* VENDINGMACHINE_H_ */

-------------------------------
VendingMachine.cpp

#include <iostream>
#include <string>

#include "VendingMachine.h"
using namespace std;


VendingMachine::VendingMachine() {
	bottles = 20;
}

void VendingMachine::Purchase(int amount) {
	bottles = bottles - amount;
}

int VendingMachine::GetInventory() {
	return bottles;
}


void VendingMachine::Restock(int amount) {
	bottles = bottles + amount;
}

void VendingMachine::Report() {
	cout << "Inventory: " << bottles << " bottles" << endl;
}

