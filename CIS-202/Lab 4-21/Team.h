/* 
    File: Team.h
    Description: 4.21.1: LAB: Winning team (classes)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-14-2024
*/

#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
   
    public:
        // mutators
        SetName(string name);
        SetWins(int wins);
        SetLosses(int losses);
        // accessors
        GetName();
        GetWins();
        GetLosses();

        GetWinPercentage();
        PrintStanding();
    private: 
        string name;
        int wins;
        int losses;
   
   // TODO: Declare mutator functions - 
   //       SetName(), SetWins(), SetLosses()
   // TODO: Declare accessor functions - 
   //       GetName(), GetWins(), GetLosses()
   // TODO: Declare GetWinPercentage()
   // TODO: Declare PrintStanding()
   // TODO: Declare private data members - name, wins, losses
};

#endif