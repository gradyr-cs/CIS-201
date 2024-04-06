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
        void SetName(string inName);
        void SetWins(int inWins);
        void SetLosses(int inLosses);
        // accessors
        string GetName() const;
        int GetWins() const;
        int GetLosses() const;

        double GetWinPercentage() const;
        void PrintStanding() const;
    private: 
        string name;
        int wins;
        int losses;
   
   // TODO: Declare mutator functions - 
   //       SetName(), SetWins(), SetLosses() - done
   // TODO: Declare accessor functions - 
   //       GetName(), GetWins(), GetLosses() - done
   // TODO: Declare GetWinPercentage() - done
   // TODO: Declare PrintStanding() - done
   // TODO: Declare private data members - name, wins, losses - done
};

#endif