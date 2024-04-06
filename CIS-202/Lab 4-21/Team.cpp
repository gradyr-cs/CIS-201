/* 
    File: Team.cpp
    Description: 4.21.1: LAB: Winning team (classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-14-2024
*/

#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

// TODO: Implement mutator functions - 
//       SetName(), SetWins(), SetLosses()
void Team::SetName(string inName) {
    name = inName;
}

void Team::SetWins(int inWins) {
    wins = inWins;
}

void Team::SetLosses(int inLosses) {
    losses = inLosses;
}
   
// TODO: Implement accessor functions - 
//       GetName(), GetWins(), GetLosses() 
string Team::GetName() const {
    return name;
}

int Team::GetWins() const {
    return wins;
}

int Team::GetLosses() const {
    return losses;
}
   
// TODO: Implement GetWinPercentage()

double Team::GetWinPercentage() const {
    return static_cast<double>(wins) / (wins + losses);
}

// TODO: Implement PrintStanding()
// configure whitespace output to match zyBooks example 
void Team::PrintStanding() const {
    double winResult = GetWinPercentage(); // temp variable to store win percentage
    cout << fixed << setprecision(2); // set precision to indicate 2 digits after decimal
    cout << "Win percentage: " << winResult << endl;
    if (winResult >= 0.5) { // if the temp var is >= percentile threshold per zyBooks
        cout << "Congratulations, Team " << name << " has a winning average!" << endl;
    }
    else { // default out if initial check fails.
        cout << "Team " << name << " has a losing average." << endl;
    }
}